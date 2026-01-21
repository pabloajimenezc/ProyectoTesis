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
// Model version                  : 19.73
// Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
// C/C++ source code generated on : Wed Jan 21 19:54:07 2026
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
real32_T magnetize;                    // Tunable parameter
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
  real_T A[16];
  real_T M[16];
  real_T tmp[16];
  real_T M_0[8];
  real_T M_1[8];
  real_T DataTypeConversion1[6];
  real_T DataTypeConversion2[6];
  real_T rtb_Gain[6];
  real_T rtb_Gain_f[6];
  real_T rtb_Gain1_h[5];
  real_T rtb_VectorConcatenate[5];
  real_T xt_est[4];
  real_T Mean_AccVal;
  real_T csum;
  real_T cumRevIndex;
  real_T rtb_DeadZone;
  real_T rtb_F;
  real_T rtb_Fr_idx_0;
  real_T rtb_Fr_idx_1;
  real_T rtb_Gain11;
  real_T rtb_Gain3;
  real_T rtb_IntegralGain_dr;
  real_T rtb_IntegralGain_k;
  real_T rtb_Integrator_fi;
  real_T rtb_Saturation;
  real_T rtb_Saturation_j;
  real_T rtb_Saturation_m;
  real_T rtb_Saturation_n2;
  real_T rtb_Saturation_p;
  real_T rtb_Sum1_c;
  real_T rtb_Sum2;
  real_T rtb_Sum6;
  real_T rtb_Sum8;
  real_T rtb_Sum_b;
  real_T rtb_Sum_h;
  real_T rtb_Sum_j;
  real_T rtb_Sum_m;
  real_T rtb_Sum_p;
  real_T rtb_Switch;
  real_T rtb_Switch_g_idx_0;
  real_T rtb_Switch_g_idx_1;
  real_T rtb_im_idx_0;
  real_T rtb_im_idx_1;
  real_T rtb_w;
  real_T z;
  int32_T M_tmp;
  int32_T i;
  int32_T i_0;
  int32_T k;
  int8_T tmp_0;
  int8_T tmp_1;
  uint8_T rtb_Compare;

  // Update the flag to indicate when data transfers from
  //   Sample time: [0.00016666666666666666s, 0.0s] to Sample time: [0.0016666666666666668s, 0.0s]  
  (imperix_ctrl_M->Timing.RateInteraction.TID0_1)++;
  if ((imperix_ctrl_M->Timing.RateInteraction.TID0_1) > 9) {
    imperix_ctrl_M->Timing.RateInteraction.TID0_1 = 0;
  }

  // S-Function (ADC): '<S107>/ADC'
  imperix_ctrl_B.ADC = (float)(*ix_raw_adc_ptr_7_2) * 0.00045776F + 0.0F;

  // S-Function (ADC): '<S109>/ADC'
  imperix_ctrl_B.ADC_m = (float)(*ix_raw_adc_ptr_6_2) * 0.00045776F + 0.0F;

  // S-Function (ADC): '<S99>/ADC'
  imperix_ctrl_B.ADC_c = (float)(*ix_raw_adc_ptr_5_2) * 0.00045776F + 0.0F;

  // S-Function (ADC): '<S87>/ADC'
  imperix_ctrl_B.ADC_n = (float)(*ix_raw_adc_ptr_4_2) * 0.00045776F + 0.0F;

  // S-Function (ADC): '<S101>/ADC'
  imperix_ctrl_B.ADC_g = (float)(*ix_raw_adc_ptr_3_2) * 0.00045776F + 0.0F;

  // S-Function (ADC): '<S103>/ADC'
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

  // S-Function (TUNABLE_PARAM): '<S604>/S-Function'
  imperix_ctrl_B.SFunction = reset_mean;

  // Outputs for Triggered SubSystem: '<S62>/Sample and Hold' incorporates:
  //   TriggerPort: '<S360>/Trigger'

  // DataTypeConversion: '<S1>/Cast To Double4'
  if ((imperix_ctrl_B.SFunction != 0.0F) &&
      (imperix_ctrl_PrevZCX.SampleandHold_Trig_ZCE_i != POS_ZCSIG)) {
    for (i = 0; i < 6; i++) {
      // SignalConversion generated from: '<S360>/In' incorporates:
      //   MATLABSystem: '<S62>/Moving Average'

      imperix_ctrl_B.In_h[i] = imperix_ctrl_B.MovingAverage_p.MovingAverage[i];
    }
  }

  imperix_ctrl_PrevZCX.SampleandHold_Trig_ZCE_i = (imperix_ctrl_B.SFunction !=
    0.0F);

  // End of Outputs for SubSystem: '<S62>/Sample and Hold'

  // Gain: '<S1>/Gain'
  Mean_AccVal = 1.0 / imperix_ctrl_P.M2C.is_max;
  for (i = 0; i < 6; i++) {
    // Sum: '<S62>/Sum1' incorporates:
    //   SignalConversion generated from: '<S360>/In'

    csum = DataTypeConversion2[i] - imperix_ctrl_B.In_h[i];
    DataTypeConversion2[i] = csum;

    // Gain: '<S1>/Gain' incorporates:
    //   Sum: '<S62>/Sum1'

    rtb_Gain[i] = Mean_AccVal * csum;
  }

  // DataTypeConversion: '<S172>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion = static_cast<real32_T>(rtb_Gain[0]);

  // S-Function (PROBE): '<S172>/S-Function'
  is1 = imperix_ctrl_B.DataTypeConversion;

  // DataTypeConversion: '<S174>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion_h = static_cast<real32_T>(rtb_Gain[1]);

  // S-Function (PROBE): '<S174>/S-Function'
  is2 = imperix_ctrl_B.DataTypeConversion_h;

  // S-Function (ADC): '<S95>/ADC'
  imperix_ctrl_B.ADC_o = (float)(*ix_raw_adc_ptr_1_2) * 0.030518F + 0.0F;

  // S-Function (ADC): '<S111>/ADC'
  imperix_ctrl_B.ADC_e = (float)(*ix_raw_adc_ptr_0_2) * 0.030518F + 0.0F;

  // S-Function (ADC): '<S89>/ADC'
  imperix_ctrl_B.ADC_l = (float)(*ix_raw_adc_ptr_7_0) * 0.030518F + 0.0F;

  // S-Function (ADC): '<S97>/ADC'
  imperix_ctrl_B.ADC_nj = (float)(*ix_raw_adc_ptr_6_0) * 0.030518F + 0.0F;

  // S-Function (ADC): '<S91>/ADC'
  imperix_ctrl_B.ADC_mz = (float)(*ix_raw_adc_ptr_5_0) * 0.030518F + 0.0F;

  // S-Function (ADC): '<S93>/ADC'
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
  //   TriggerPort: '<S359>/Trigger'

  // DataTypeConversion: '<S1>/Cast To Double4'
  if ((imperix_ctrl_B.SFunction != 0.0F) &&
      (imperix_ctrl_PrevZCX.SampleandHold_Trig_ZCE_f != POS_ZCSIG)) {
    for (i = 0; i < 6; i++) {
      // SignalConversion generated from: '<S359>/In' incorporates:
      //   MATLABSystem: '<S61>/Moving Average'

      imperix_ctrl_B.In_c[i] = imperix_ctrl_B.MovingAverage.MovingAverage[i];
    }
  }

  imperix_ctrl_PrevZCX.SampleandHold_Trig_ZCE_f = (imperix_ctrl_B.SFunction !=
    0.0F);

  // End of Outputs for SubSystem: '<S61>/Sample and Hold'

  // Gain: '<S1>/Gain1'
  Mean_AccVal = 1.0 / imperix_ctrl_P.M2C.Vc_ref;
  for (i = 0; i < 6; i++) {
    // Sum: '<S61>/Sum1' incorporates:
    //   SignalConversion generated from: '<S359>/In'

    z = DataTypeConversion1[i] - imperix_ctrl_B.In_c[i];
    DataTypeConversion1[i] = z;

    // Gain: '<S1>/Gain1' incorporates:
    //   Gain: '<S17>/Gain'
    //   Sum: '<S61>/Sum1'

    rtb_Gain_f[i] = Mean_AccVal * z;
  }

  // DataTypeConversion: '<S176>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion_c = static_cast<real32_T>(rtb_Gain_f[4]);

  // S-Function (PROBE): '<S176>/S-Function'
  Vc5 = imperix_ctrl_B.DataTypeConversion_c;

  // DataTypeConversion: '<S178>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion_k = static_cast<real32_T>(rtb_Gain_f[5]);

  // S-Function (PROBE): '<S178>/S-Function'
  Vc6 = imperix_ctrl_B.DataTypeConversion_k;

  // S-Function (ADC): '<S105>/ADC'
  imperix_ctrl_B.ADC_f = (float)(*ix_raw_adc_ptr_3_0) * 0.0061035F + 0.0F;

  // MATLABSystem: '<S74>/Moving Average' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion36'

  if (imperix_ctrl_DW.obj.TunablePropsChanged) {
    imperix_ctrl_DW.obj.TunablePropsChanged = false;
  }

  z = 0.0;
  Mean_AccVal = 0.0;
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
    for (k = 97; k >= 0; k--) {
      imperix_ctrl_DW.obj.pCumSumRev[k] += imperix_ctrl_DW.obj.pCumSumRev[k + 1];
    }
  }

  if (imperix_ctrl_DW.obj.pModValueRev == 0.0) {
    Mean_AccVal = z / 100.0;
  }

  imperix_ctrl_DW.obj.pCumSum = csum;
  imperix_ctrl_DW.obj.pCumRevIndex = cumRevIndex;
  if (imperix_ctrl_DW.obj.pModValueRev > 0.0) {
    imperix_ctrl_DW.obj.pModValueRev--;
  } else {
    imperix_ctrl_DW.obj.pModValueRev = 0.0;
  }

  // Outputs for Triggered SubSystem: '<S74>/Sample and Hold' incorporates:
  //   TriggerPort: '<S588>/Trigger'

  // DataTypeConversion: '<S1>/Cast To Double4'
  if ((imperix_ctrl_B.SFunction != 0.0F) &&
      (imperix_ctrl_PrevZCX.SampleandHold_Trig_ZCE != POS_ZCSIG)) {
    // SignalConversion generated from: '<S588>/In' incorporates:
    //   MATLABSystem: '<S74>/Moving Average'

    imperix_ctrl_B.In = Mean_AccVal;
  }

  imperix_ctrl_PrevZCX.SampleandHold_Trig_ZCE = (imperix_ctrl_B.SFunction !=
    0.0F);

  // End of Outputs for SubSystem: '<S74>/Sample and Hold'

  // Sum: '<S74>/Sum1' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion36'

  z = imperix_ctrl_B.ADC_f - imperix_ctrl_B.In;

  // DataTypeConversion: '<S180>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain8'

  imperix_ctrl_B.DataTypeConversion_a = static_cast<real32_T>
    (imperix_ctrl_P.Gain8_Gain * z);

  // S-Function (PROBE): '<S180>/S-Function'
  wm = imperix_ctrl_B.DataTypeConversion_a;

  // Gain: '<S65>/Gain1'
  for (k = 0; k < 5; k++) {
    rtb_Gain1_h[k] = 0.0;
  }

  for (k = 0; k < 6; k++) {
    Mean_AccVal = DataTypeConversion2[k];
    for (i_0 = 0; i_0 < 5; i_0++) {
      rtb_Gain1_h[i_0] += imperix_ctrl_P.M2C.A[5 * k + i_0] * Mean_AccVal;
    }
  }

  // End of Gain: '<S65>/Gain1'

  // Gain: '<S541>/Gain3' incorporates:
  //   Gain: '<S69>/Gain2'

  rtb_Sum2 = 0.0;
  rtb_IntegralGain_k = 0.0;
  for (k = 0; k < 3; k++) {
    Mean_AccVal = rtb_Gain1_h[k + 2] * imperix_ctrl_P.Gain2_Gain;
    rtb_Sum2 += imperix_ctrl_P.Gain3_Gain[3 * k] * Mean_AccVal;
    rtb_IntegralGain_k += imperix_ctrl_P.Gain3_Gain[3 * k + 1] * Mean_AccVal;
  }

  // End of Gain: '<S541>/Gain3'

  // Gain: '<S541>/Gain1'
  csum = imperix_ctrl_P.Gain1_Gain * rtb_Sum2;
  cumRevIndex = imperix_ctrl_P.Gain1_Gain * rtb_IntegralGain_k;

  // Gain: '<S1>/Gain3'
  rtb_Gain3 = imperix_ctrl_P.IM.np * z;

  // S-Function (TUNABLE_PARAM): '<S612>/S-Function'
  imperix_ctrl_B.SFunction_e = enable_KF;

  // S-Function (TUNABLE_PARAM): '<S616>/S-Function'
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
    A[12] = imperix_ctrl_P.KF.A[12] * rtb_Gain3;

    // '<S20>:1:29'
    A[9] = imperix_ctrl_P.KF.A[9] * rtb_Gain3;

    // '<S20>:1:30'
    A[14] = imperix_ctrl_P.KF.A[14] * rtb_Gain3;

    // '<S20>:1:31'
    A[11] = imperix_ctrl_P.KF.A[11] * rtb_Gain3;

    // '<S20>:1:32'
    rtb_Sum2 = 0.5 * imperix_ctrl_P.KF.Ts;

    // '<S20>:1:33'
    // '<S20>:1:41'
    // '<S20>:1:74'
    // '<S20>:1:62'
    // '<S20>:1:63'
    // '<S20>:1:65'
    // '<S20>:1:74'
    // '<S20>:1:75'
    // '<S20>:1:77'
    // '<S20>:1:78'
    // '<S20>:1:79'
    // '<S20>:1:81'
    // '<S20>:1:44'
    // '<S20>:1:47'
    // '<S20>:1:48'
    for (i = 0; i < 4; i++) {
      xt_est[i] = imperix_ctrl_DW.xt_est_apriori[i];
      M_tmp = i << 2;
      M[M_tmp] = A[M_tmp] * rtb_Sum2 + imperix_ctrl_DW.Inx[0];
      M[M_tmp + 1] = A[M_tmp + 1] * rtb_Sum2 + imperix_ctrl_DW.Inx[1];
      M[M_tmp + 2] = A[M_tmp + 2] * rtb_Sum2 + imperix_ctrl_DW.Inx[2];
      M[M_tmp + 3] = A[M_tmp + 3] * rtb_Sum2 + imperix_ctrl_DW.Inx[3];
      Mean_AccVal = 0.0;
      rtb_IntegralGain_k = 0.0;
      rtb_DeadZone = 0.0;
      rtb_IntegralGain_dr = 0.0;
      for (k = 0; k < 4; k++) {
        rtb_im_idx_0 = M[M_tmp + k];
        i_0 = k << 2;
        Mean_AccVal += A[i_0] * imperix_ctrl_P.KF.Ts * rtb_im_idx_0;
        rtb_IntegralGain_k += A[i_0 + 1] * imperix_ctrl_P.KF.Ts * rtb_im_idx_0;
        rtb_DeadZone += A[i_0 + 2] * imperix_ctrl_P.KF.Ts * rtb_im_idx_0;
        rtb_IntegralGain_dr += A[i_0 + 3] * imperix_ctrl_P.KF.Ts * rtb_im_idx_0;
      }

      tmp[M_tmp] = Mean_AccVal + imperix_ctrl_DW.Inx[0];
      tmp[M_tmp + 1] = rtb_IntegralGain_k + imperix_ctrl_DW.Inx[1];
      tmp[M_tmp + 2] = rtb_DeadZone + imperix_ctrl_DW.Inx[2];
      tmp[M_tmp + 3] = rtb_IntegralGain_dr + imperix_ctrl_DW.Inx[3];
    }

    for (k = 0; k < 2; k++) {
      rtb_DeadZone = 0.0;
      rtb_IntegralGain_dr = 0.0;
      rtb_im_idx_0 = 0.0;
      rtb_Fr_idx_0 = 0.0;
      for (i_0 = 0; i_0 < 4; i_0++) {
        Mean_AccVal = imperix_ctrl_P.KF.B[(k << 2) + i_0];
        M_tmp = i_0 << 2;
        rtb_DeadZone += M[M_tmp] * Mean_AccVal;
        rtb_IntegralGain_dr += M[M_tmp + 1] * Mean_AccVal;
        rtb_im_idx_0 += M[M_tmp + 2] * Mean_AccVal;
        rtb_Fr_idx_0 += M[M_tmp + 3] * Mean_AccVal;
      }

      M_tmp = k << 2;
      M_0[M_tmp + 3] = rtb_Fr_idx_0;
      M_0[M_tmp + 2] = rtb_im_idx_0;
      M_0[M_tmp + 1] = rtb_IntegralGain_dr;
      M_0[M_tmp] = rtb_DeadZone;
    }

    for (k = 0; k < 8; k++) {
      M_1[k] = M_0[k] * imperix_ctrl_P.KF.Ts;
    }

    rtb_Sum2 = 0.0;
    rtb_IntegralGain_k = 0.0;
    rtb_im_idx_1 = 0.0;
    rtb_Fr_idx_1 = 0.0;
    for (k = 0; k < 4; k++) {
      Mean_AccVal = imperix_ctrl_DW.xt_est_apriori[k];
      i = k << 2;
      rtb_Sum2 += tmp[i] * Mean_AccVal;
      rtb_IntegralGain_k += tmp[i + 1] * Mean_AccVal;
      rtb_im_idx_1 += tmp[i + 2] * Mean_AccVal;
      rtb_Fr_idx_1 += tmp[i + 3] * Mean_AccVal;
    }

    rtb_DeadZone = 0.0;
    rtb_IntegralGain_dr = 0.0;
    rtb_im_idx_0 = 0.0;
    rtb_Fr_idx_0 = 0.0;
    for (k = 0; k < 2; k++) {
      Mean_AccVal = imperix_ctrl_DW.UnitDelay_DSTATE[k];
      M_tmp = k << 2;
      rtb_DeadZone += M_1[M_tmp] * Mean_AccVal;
      rtb_IntegralGain_dr += M_1[M_tmp + 1] * Mean_AccVal;
      rtb_im_idx_0 += M_1[M_tmp + 2] * Mean_AccVal;
      rtb_Fr_idx_0 += M_1[M_tmp + 3] * Mean_AccVal;
    }

    imperix_ctrl_DW.xt_est_apriori[0] = rtb_Sum2 + rtb_DeadZone;
    imperix_ctrl_DW.xt_est_apriori[1] = rtb_IntegralGain_k + rtb_IntegralGain_dr;
    imperix_ctrl_DW.xt_est_apriori[2] = rtb_im_idx_1 + rtb_im_idx_0;
    imperix_ctrl_DW.xt_est_apriori[3] = rtb_Fr_idx_1 + rtb_Fr_idx_0;

    // '<S20>:1:49'
    // '<S20>:1:52'
    // '<S20>:1:53'
    rtb_im_idx_0 = xt_est[0];
    rtb_Fr_idx_0 = xt_est[2];
    rtb_im_idx_1 = xt_est[1];
    rtb_Fr_idx_1 = xt_est[3];

    // '<S20>:1:54'
  } else {
    // '<S20>:1:18'
  }

  // End of MATLAB Function: '<S1>/Kalman Filter'

  // ComplexToMagnitudeAngle: '<S66>/Complex to Magnitude-Angle' incorporates:
  //   RealImagToComplex: '<S66>/Real-Imag to Complex'

  rtb_Sum2 = rt_hypotd_snf(rtb_Fr_idx_0, rtb_Fr_idx_1);

  // DataTypeConversion: '<S182>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain14'

  imperix_ctrl_B.DataTypeConversion_cf = static_cast<real32_T>(1.0 /
    imperix_ctrl_P.IM.FrN * rtb_Sum2);

  // S-Function (PROBE): '<S182>/S-Function'
  Frd = imperix_ctrl_B.DataTypeConversion_cf;

  // S-Function (sdspstatfcns): '<S68>/Mean' incorporates:
  //   Sum: '<S61>/Sum1'

  Mean_AccVal = DataTypeConversion1[0];
  for (k = 4; k >= 0; k--) {
    Mean_AccVal += DataTypeConversion1[5 - k];
  }

  Mean_AccVal /= 6.0;

  // End of S-Function (sdspstatfcns): '<S68>/Mean'

  // DataTypeConversion: '<S184>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain2'

  imperix_ctrl_B.DataTypeConversion_e = static_cast<real32_T>(1.0 /
    imperix_ctrl_P.M2C.Vc_ref * Mean_AccVal);

  // S-Function (PROBE): '<S184>/S-Function'
  Vc_m = imperix_ctrl_B.DataTypeConversion_e;

  // DataTypeConversion: '<S186>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion_p = static_cast<real32_T>(rtb_Gain[2]);

  // S-Function (PROBE): '<S186>/S-Function'
  is3 = imperix_ctrl_B.DataTypeConversion_p;

  // Sum: '<S21>/Sum' incorporates:
  //   Gain: '<S21>/Gain1'
  //   Gain: '<S21>/Gain2'
  //   UnitDelay: '<S21>/Unit Delay1'

  imperix_ctrl_DW.UnitDelay1_DSTATE = (1.0 - imperix_ctrl_P.TEB.alpha) *
    Mean_AccVal + imperix_ctrl_P.TEB.alpha * imperix_ctrl_DW.UnitDelay1_DSTATE;

  // DataTypeConversion: '<S188>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain4'
  //   UnitDelay: '<S21>/Unit Delay1'

  imperix_ctrl_B.DataTypeConversion_o = static_cast<real32_T>(1.0 /
    imperix_ctrl_P.M2C.Vc_ref * imperix_ctrl_DW.UnitDelay1_DSTATE);

  // S-Function (PROBE): '<S188>/S-Function'
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

  // Sum: '<S162>/Sum' incorporates:
  //   DiscreteIntegrator: '<S153>/Integrator'
  //   Gain: '<S158>/Proportional Gain'

  rtb_DeadZone = imperix_ctrl_P.TEB.kp * rtb_IntegralGain_k +
    imperix_ctrl_DW.Integrator_DSTATE;

  // Saturate: '<S160>/Saturation'
  if (rtb_DeadZone > imperix_ctrl_P.TEB.u_max) {
    rtb_IntegralGain_dr = imperix_ctrl_P.TEB.u_max;
  } else if (rtb_DeadZone < -imperix_ctrl_P.TEB.u_max) {
    rtb_IntegralGain_dr = -imperix_ctrl_P.TEB.u_max;
  } else {
    rtb_IntegralGain_dr = rtb_DeadZone;
  }

  // End of Saturate: '<S160>/Saturation'

  // DataTypeConversion: '<S190>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain7'

  imperix_ctrl_B.DataTypeConversion_k1 = static_cast<real32_T>(1.0 /
    imperix_ctrl_P.PCC.u_max * rtb_IntegralGain_dr);

  // S-Function (PROBE): '<S190>/S-Function'
  iP_r = imperix_ctrl_B.DataTypeConversion_k1;

  // DataTypeConversion: '<S192>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain6'

  imperix_ctrl_B.DataTypeConversion_n = static_cast<real32_T>(1.0 /
    imperix_ctrl_P.PCC.u_max * rtb_Gain1_h[0]);

  // S-Function (PROBE): '<S192>/S-Function'
  iP = imperix_ctrl_B.DataTypeConversion_n;

  // S-Function (TUNABLE_PARAM): '<S606>/S-Function'
  imperix_ctrl_B.SFunction_oo = magnetize;

  // S-Function (TUNABLE_PARAM): '<S602>/S-Function'
  imperix_ctrl_B.SFunction_i = F_ref;

  // S-Function (TUNABLE_PARAM): '<S610>/S-Function'
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
    Mean_AccVal = imperix_ctrl_B.SFunction_i - imperix_ctrl_DW.F_prev;
    if (rtIsNaN(Mean_AccVal)) {
      Mean_AccVal = (rtNaN);
    } else if (Mean_AccVal < 0.0) {
      Mean_AccVal = -1.0;
    } else {
      Mean_AccVal = (Mean_AccVal > 0.0);
    }

    rtb_Saturation = Mean_AccVal * imperix_ctrl_DW.dF + imperix_ctrl_DW.F_prev;
  }

  if (fabs(imperix_ctrl_B.SFunction_p - imperix_ctrl_DW.w_prev) >
      imperix_ctrl_DW.dw) {
    // '<S19>:1:25'
    // '<S19>:1:26'
    Mean_AccVal = imperix_ctrl_B.SFunction_p - imperix_ctrl_DW.w_prev;
    if (rtIsNaN(Mean_AccVal)) {
      Mean_AccVal = (rtNaN);
    } else if (Mean_AccVal < 0.0) {
      Mean_AccVal = -1.0;
    } else {
      Mean_AccVal = (Mean_AccVal > 0.0);
    }

    rtb_Sum_p = Mean_AccVal * imperix_ctrl_DW.dw + imperix_ctrl_DW.w_prev;
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

  // S-Function (TUNABLE_PARAM): '<S614>/S-Function'
  imperix_ctrl_B.SFunction_h = reset_PI;

  // DiscreteIntegrator: '<S329>/Integrator' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double5'

  if ((imperix_ctrl_B.SFunction_h != 0.0F) ||
      (imperix_ctrl_DW.Integrator_PrevResetState != 0)) {
    imperix_ctrl_DW.Integrator_DSTATE_d =
      imperix_ctrl_P.SpeedPI_InitialConditionForInte;
  }

  // Sum: '<S338>/Sum' incorporates:
  //   DiscreteIntegrator: '<S329>/Integrator'
  //   Gain: '<S334>/Proportional Gain'

  rtb_Sum_p = imperix_ctrl_P.FOC.kp_w * z + imperix_ctrl_DW.Integrator_DSTATE_d;

  // Saturate: '<S336>/Saturation'
  if (rtb_Sum_p > imperix_ctrl_P.FOC.u_max) {
    rtb_Saturation = imperix_ctrl_P.FOC.u_max;
  } else if (rtb_Sum_p < -imperix_ctrl_P.FOC.u_max) {
    rtb_Saturation = -imperix_ctrl_P.FOC.u_max;
  } else {
    rtb_Saturation = rtb_Sum_p;
  }

  // End of Saturate: '<S336>/Saturation'

  // Switch: '<S59>/Switch1' incorporates:
  //   Constant: '<S59>/Constant'
  //   DataTypeConversion: '<S1>/Cast To Double7'

  if (imperix_ctrl_B.SFunction_oo != 0.0F) {
    rtb_Gain11 = imperix_ctrl_P.Constant_Value;
  } else {
    rtb_Gain11 = rtb_Saturation;
  }

  // End of Switch: '<S59>/Switch1'

  // Sum: '<S1>/Sum' incorporates:
  //   Bias: '<S1>/Add Constant1'
  //   Gain: '<S1>/Gain5'
  //   Product: '<S1>/Divide'

  rtb_Saturation_n2 = rtb_Gain11 / (rtb_F + imperix_ctrl_P.AddConstant1_Bias) *
    (imperix_ctrl_P.IM.Lm / imperix_ctrl_P.IM.tau_r) + rtb_Gain3;

  // Gain: '<S63>/Gain'
  rtb_Gain3 = imperix_ctrl_P.IM.Lo * rtb_Saturation_n2;

  // Sum: '<S59>/Sum2'
  rtb_Sum2 = rtb_F - rtb_Sum2;

  // DiscreteIntegrator: '<S277>/Integrator' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double5'

  if ((imperix_ctrl_B.SFunction_h != 0.0F) ||
      (imperix_ctrl_DW.Integrator_PrevResetState_b != 0)) {
    imperix_ctrl_DW.Integrator_DSTATE_i =
      imperix_ctrl_P.FluxPI_InitialConditionForInteg;
  }

  // Sum: '<S286>/Sum' incorporates:
  //   DiscreteIntegrator: '<S277>/Integrator'
  //   Gain: '<S282>/Proportional Gain'

  rtb_Sum_b = imperix_ctrl_P.FOC.kp_F * rtb_Sum2 +
    imperix_ctrl_DW.Integrator_DSTATE_i;

  // Saturate: '<S284>/Saturation'
  if (rtb_Sum_b > imperix_ctrl_P.FOC.u_max) {
    rtb_Saturation_m = imperix_ctrl_P.FOC.u_max;
  } else if (rtb_Sum_b < -imperix_ctrl_P.FOC.u_max) {
    rtb_Saturation_m = -imperix_ctrl_P.FOC.u_max;
  } else {
    rtb_Saturation_m = rtb_Sum_b;
  }

  // End of Saturate: '<S284>/Saturation'

  // Switch: '<S59>/Switch' incorporates:
  //   ComplexToMagnitudeAngle: '<S66>/Complex to Magnitude-Angle'
  //   Constant: '<S59>/isdN'
  //   Constant: '<S66>/Constant'
  //   DataTypeConversion: '<S1>/Cast To Double7'
  //   RealImagToComplex: '<S66>/Real-Imag to Complex'
  //   Switch: '<S66>/Switch'

  if (imperix_ctrl_B.SFunction_oo != 0.0F) {
    rtb_Integrator_fi = imperix_ctrl_P.IM.isdN;
    rtb_Switch = imperix_ctrl_P.Constant_Value_h;
  } else {
    rtb_Integrator_fi = rtb_Saturation_m;
    rtb_Switch = rt_atan2d_snf(rtb_Fr_idx_1, rtb_Fr_idx_0);
  }

  // End of Switch: '<S59>/Switch'

  // RelationalOperator: '<S542>/Compare' incorporates:
  //   Constant: '<S540>/Constant'
  //   Constant: '<S542>/Constant'

  rtb_Compare = (imperix_ctrl_P.AlphaBetaZerotodq0_Alignment ==
                 imperix_ctrl_P.CompareToConstant_const);

  // Outputs for Enabled SubSystem: '<S540>/Subsystem1' incorporates:
  //   EnablePort: '<S545>/Enable'

  if (rtb_Compare > 0) {
    // Fcn: '<S545>/Fcn' incorporates:
    //   Fcn: '<S545>/Fcn1'

    Mean_AccVal = sin(rtb_Switch);
    rtb_Sum6 = cos(rtb_Switch);

    // Fcn: '<S545>/Fcn'
    imperix_ctrl_B.Fcn = csum * rtb_Sum6 + cumRevIndex * Mean_AccVal;

    // Fcn: '<S545>/Fcn1'
    imperix_ctrl_B.Fcn1 = -csum * Mean_AccVal + cumRevIndex * rtb_Sum6;
  }

  // End of Outputs for SubSystem: '<S540>/Subsystem1'

  // Outputs for Enabled SubSystem: '<S540>/Subsystem - pi//2 delay' incorporates:
  //   EnablePort: '<S544>/Enable'

  // RelationalOperator: '<S543>/Compare' incorporates:
  //   Constant: '<S540>/Constant'
  //   Constant: '<S543>/Constant'

  if (imperix_ctrl_P.AlphaBetaZerotodq0_Alignment ==
      imperix_ctrl_P.CompareToConstant1_const) {
    // Fcn: '<S544>/Fcn' incorporates:
    //   Fcn: '<S544>/Fcn1'

    Mean_AccVal = cos(rtb_Switch);
    rtb_Sum6 = sin(rtb_Switch);

    // Fcn: '<S544>/Fcn'
    imperix_ctrl_B.Fcn_c = csum * rtb_Sum6 - cumRevIndex * Mean_AccVal;

    // Fcn: '<S544>/Fcn1'
    imperix_ctrl_B.Fcn1_p = csum * Mean_AccVal + cumRevIndex * rtb_Sum6;
  }

  // End of RelationalOperator: '<S543>/Compare'
  // End of Outputs for SubSystem: '<S540>/Subsystem - pi//2 delay'

  // Switch: '<S540>/Switch'
  if (rtb_Compare != 0) {
    rtb_Switch_g_idx_0 = imperix_ctrl_B.Fcn;
    rtb_Switch_g_idx_1 = imperix_ctrl_B.Fcn1;
  } else {
    rtb_Switch_g_idx_0 = imperix_ctrl_B.Fcn_c;
    rtb_Switch_g_idx_1 = imperix_ctrl_B.Fcn1_p;
  }

  // End of Switch: '<S540>/Switch'

  // Sum: '<S63>/Sum6'
  rtb_Sum6 = rtb_Integrator_fi - rtb_Switch_g_idx_0;

  // DiscreteIntegrator: '<S399>/Integrator' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double5'

  if ((imperix_ctrl_B.SFunction_h != 0.0F) ||
      (imperix_ctrl_DW.Integrator_PrevResetState_n != 0)) {
    imperix_ctrl_DW.Integrator_DSTATE_j =
      imperix_ctrl_P.MCCPId_InitialConditionForInteg;
  }

  // Sum: '<S408>/Sum' incorporates:
  //   DiscreteIntegrator: '<S399>/Integrator'
  //   Gain: '<S404>/Proportional Gain'

  rtb_Sum_m = imperix_ctrl_P.MCC.kp * rtb_Sum6 +
    imperix_ctrl_DW.Integrator_DSTATE_j;

  // Saturate: '<S406>/Saturation'
  if (rtb_Sum_m > imperix_ctrl_P.MCC.u_max) {
    rtb_Saturation_p = imperix_ctrl_P.MCC.u_max;
  } else if (rtb_Sum_m < -imperix_ctrl_P.MCC.u_max) {
    rtb_Saturation_p = -imperix_ctrl_P.MCC.u_max;
  } else {
    rtb_Saturation_p = rtb_Sum_m;
  }

  // End of Saturate: '<S406>/Saturation'

  // Sum: '<S63>/Sum' incorporates:
  //   Product: '<S63>/Product1'

  rtb_Sum_j = rtb_Saturation_p - rtb_Gain3 * rtb_Gain11;

  // Sum: '<S63>/Sum8'
  rtb_Sum8 = rtb_Gain11 - rtb_Switch_g_idx_1;

  // DiscreteIntegrator: '<S451>/Integrator' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double5'

  if ((imperix_ctrl_B.SFunction_h != 0.0F) ||
      (imperix_ctrl_DW.Integrator_PrevResetState_i != 0)) {
    imperix_ctrl_DW.Integrator_DSTATE_e =
      imperix_ctrl_P.MCCPIq_InitialConditionForInteg;
  }

  // Sum: '<S460>/Sum' incorporates:
  //   DiscreteIntegrator: '<S451>/Integrator'
  //   Gain: '<S456>/Proportional Gain'

  rtb_Sum_h = imperix_ctrl_P.MCC.kp * rtb_Sum8 +
    imperix_ctrl_DW.Integrator_DSTATE_e;

  // Saturate: '<S458>/Saturation'
  if (rtb_Sum_h > imperix_ctrl_P.MCC.u_max) {
    rtb_Saturation_j = imperix_ctrl_P.MCC.u_max;
  } else if (rtb_Sum_h < -imperix_ctrl_P.MCC.u_max) {
    rtb_Saturation_j = -imperix_ctrl_P.MCC.u_max;
  } else {
    rtb_Saturation_j = rtb_Sum_h;
  }

  // End of Saturate: '<S458>/Saturation'

  // Sum: '<S63>/Sum1' incorporates:
  //   Product: '<S63>/Product'

  rtb_Sum1_c = rtb_Integrator_fi * rtb_Gain3 + rtb_Saturation_j;

  // Gain: '<S1>/Gain16'
  Mean_AccVal = 1.0 / imperix_ctrl_P.MCC.u_max;

  // DataTypeConversion: '<S194>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain16'

  imperix_ctrl_B.DataTypeConversion_i = static_cast<real32_T>(Mean_AccVal *
    rtb_Sum1_c);

  // S-Function (PROBE): '<S194>/S-Function'
  vm_q = imperix_ctrl_B.DataTypeConversion_i;

  // DataTypeConversion: '<S196>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain15'

  imperix_ctrl_B.DataTypeConversion_l = static_cast<real32_T>(1.0 /
    imperix_ctrl_P.IM.FrN * rtb_F);

  // S-Function (PROBE): '<S196>/S-Function'
  Frd_r = imperix_ctrl_B.DataTypeConversion_l;

  // DataTypeConversion: '<S198>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain9'

  imperix_ctrl_B.DataTypeConversion_hg = static_cast<real32_T>
    (imperix_ctrl_P.Gain9_Gain * rtb_w);

  // S-Function (PROBE): '<S198>/S-Function'
  wm_r = imperix_ctrl_B.DataTypeConversion_hg;

  // DataTypeConversion: '<S200>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain12'

  imperix_ctrl_B.DataTypeConversion_as = static_cast<real32_T>(1.0 /
    imperix_ctrl_P.IM.isdN * rtb_Switch_g_idx_0);

  // S-Function (PROBE): '<S200>/S-Function'
  im_d = imperix_ctrl_B.DataTypeConversion_as;

  // DataTypeConversion: '<S202>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain13'

  imperix_ctrl_B.DataTypeConversion_f = static_cast<real32_T>(1.0 /
    imperix_ctrl_P.IM.isdN * rtb_Integrator_fi);

  // S-Function (PROBE): '<S202>/S-Function'
  imd_r = imperix_ctrl_B.DataTypeConversion_f;

  // DataTypeConversion: '<S204>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain10'

  imperix_ctrl_B.DataTypeConversion_il = static_cast<real32_T>(1.0 /
    imperix_ctrl_P.IM.isqN * rtb_Switch_g_idx_1);

  // S-Function (PROBE): '<S204>/S-Function'
  im_q = imperix_ctrl_B.DataTypeConversion_il;

  // DataTypeConversion: '<S206>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain11'

  imperix_ctrl_B.DataTypeConversion_ep = static_cast<real32_T>(1.0 /
    imperix_ctrl_P.IM.isqN * rtb_Gain11);

  // S-Function (PROBE): '<S206>/S-Function'
  imq_r = imperix_ctrl_B.DataTypeConversion_ep;

  // DataTypeConversion: '<S208>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion_ly = static_cast<real32_T>(rtb_Gain[3]);

  // S-Function (PROBE): '<S208>/S-Function'
  is4 = imperix_ctrl_B.DataTypeConversion_ly;

  // DataTypeConversion: '<S210>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain16'

  imperix_ctrl_B.DataTypeConversion_hm = static_cast<real32_T>(Mean_AccVal *
    rtb_Sum_j);

  // S-Function (PROBE): '<S210>/S-Function'
  vm_d = imperix_ctrl_B.DataTypeConversion_hm;

  // Gain: '<S1>/Gain17'
  Mean_AccVal = 1.0 / (imperix_ctrl_P.IM.IN * 1.4142135623730951);

  // DataTypeConversion: '<S212>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain17'

  imperix_ctrl_B.DataTypeConversion_fv = static_cast<real32_T>(Mean_AccVal *
    cumRevIndex);

  // S-Function (PROBE): '<S212>/S-Function'
  im_bet = imperix_ctrl_B.DataTypeConversion_fv;

  // DataTypeConversion: '<S214>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain17'

  imperix_ctrl_B.DataTypeConversion_nx = static_cast<real32_T>(Mean_AccVal *
    csum);

  // S-Function (PROBE): '<S214>/S-Function'
  im_alp = imperix_ctrl_B.DataTypeConversion_nx;

  // Gain: '<S1>/Gain18'
  Mean_AccVal = 1.0 / (imperix_ctrl_P.IM.IN * 1.4142135623730951);

  // DataTypeConversion: '<S216>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain18'

  imperix_ctrl_B.DataTypeConversion_b = static_cast<real32_T>(Mean_AccVal *
    rtb_im_idx_1);

  // S-Function (PROBE): '<S216>/S-Function'
  im_bet_KF = imperix_ctrl_B.DataTypeConversion_b;

  // DataTypeConversion: '<S218>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain18'

  imperix_ctrl_B.DataTypeConversion_of = static_cast<real32_T>(Mean_AccVal *
    rtb_im_idx_0);

  // S-Function (PROBE): '<S218>/S-Function'
  im_alp_KF = imperix_ctrl_B.DataTypeConversion_of;

  // Gain: '<S1>/Gain19'
  Mean_AccVal = 1.0 / imperix_ctrl_P.IM.FrN;

  // DataTypeConversion: '<S220>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain19'

  imperix_ctrl_B.DataTypeConversion_ch = static_cast<real32_T>(Mean_AccVal *
    rtb_Fr_idx_1);

  // S-Function (PROBE): '<S220>/S-Function'
  Fr_bet = imperix_ctrl_B.DataTypeConversion_ch;

  // DataTypeConversion: '<S222>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain19'

  imperix_ctrl_B.DataTypeConversion_cz = static_cast<real32_T>(Mean_AccVal *
    rtb_Fr_idx_0);

  // S-Function (PROBE): '<S222>/S-Function'
  Fr_alp = imperix_ctrl_B.DataTypeConversion_cz;

  // DataTypeConversion: '<S224>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain20'

  imperix_ctrl_B.DataTypeConversion_ci = static_cast<real32_T>
    (imperix_ctrl_P.Gain20_Gain * rtb_Saturation_n2);

  // S-Function (PROBE): '<S224>/S-Function'
  ws = imperix_ctrl_B.DataTypeConversion_ci;

  // DataTypeConversion: '<S226>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain21'

  imperix_ctrl_B.DataTypeConversion_k2 = static_cast<real32_T>
    (imperix_ctrl_P.Gain21_Gain * rtb_Switch);

  // S-Function (PROBE): '<S226>/S-Function'
  gF = imperix_ctrl_B.DataTypeConversion_k2;

  // S-Function (ADC): '<S85>/ADC'
  imperix_ctrl_B.ADC_h = (float)(*ix_raw_adc_ptr_2_0) * 6.1035E-5F + 0.0F;

  // DataTypeConversion: '<S228>/Data Type Conversion' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion3'

  imperix_ctrl_B.DataTypeConversion_nc = imperix_ctrl_B.ADC_h;

  // S-Function (PROBE): '<S228>/S-Function'
  Te = imperix_ctrl_B.DataTypeConversion_nc;

  // DataTypeConversion: '<S230>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion_lx = static_cast<real32_T>(rtb_Gain[4]);

  // S-Function (PROBE): '<S230>/S-Function'
  is5 = imperix_ctrl_B.DataTypeConversion_lx;

  // DataTypeConversion: '<S232>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion_kf = static_cast<real32_T>(rtb_Gain[5]);

  // S-Function (PROBE): '<S232>/S-Function'
  is6 = imperix_ctrl_B.DataTypeConversion_kf;

  // DataTypeConversion: '<S234>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion_ex = static_cast<real32_T>(rtb_Gain_f[0]);

  // S-Function (PROBE): '<S234>/S-Function'
  Vc1 = imperix_ctrl_B.DataTypeConversion_ex;

  // DataTypeConversion: '<S236>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion_p2 = static_cast<real32_T>(rtb_Gain_f[1]);

  // S-Function (PROBE): '<S236>/S-Function'
  Vc2 = imperix_ctrl_B.DataTypeConversion_p2;

  // DataTypeConversion: '<S238>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion_ok = static_cast<real32_T>(rtb_Gain_f[2]);

  // S-Function (PROBE): '<S238>/S-Function'
  Vc3 = imperix_ctrl_B.DataTypeConversion_ok;

  // DataTypeConversion: '<S240>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion_j = static_cast<real32_T>(rtb_Gain_f[3]);

  // S-Function (PROBE): '<S240>/S-Function'
  Vc4 = imperix_ctrl_B.DataTypeConversion_j;

  // S-Function (TUNABLE_PARAM): '<S608>/S-Function'
  imperix_ctrl_B.SFunction_c = enable_FP;

  // Constant: '<S17>/Constant'
  rtb_VectorConcatenate[3] = imperix_ctrl_P.Constant_Value_f[0];
  rtb_VectorConcatenate[4] = imperix_ctrl_P.Constant_Value_f[1];

  // Sum: '<S67>/Sum3'
  rtb_IntegralGain_dr -= rtb_Gain1_h[0];

  // Sum: '<S531>/Sum' incorporates:
  //   DiscreteIntegrator: '<S522>/Integrator'
  //   Gain: '<S527>/Proportional Gain'

  rtb_Gain3 = imperix_ctrl_P.PCC.kp * rtb_IntegralGain_dr +
    imperix_ctrl_DW.Integrator_DSTATE_p;

  // Saturate: '<S529>/Saturation'
  if (rtb_Gain3 > imperix_ctrl_P.PCC.u_max) {
    Mean_AccVal = imperix_ctrl_P.PCC.u_max;
  } else if (rtb_Gain3 < -imperix_ctrl_P.PCC.u_max) {
    Mean_AccVal = -imperix_ctrl_P.PCC.u_max;
  } else {
    Mean_AccVal = rtb_Gain3;
  }

  // Sum: '<S67>/Sum13' incorporates:
  //   Constant: '<S67>/Constant1'
  //   Saturate: '<S529>/Saturation'

  rtb_VectorConcatenate[0] = Mean_AccVal - 1.5 * imperix_ctrl_P.M2C.Vdc;

  // RelationalOperator: '<S469>/Compare' incorporates:
  //   Constant: '<S364>/Constant'
  //   Constant: '<S469>/Constant'

  rtb_Compare = (imperix_ctrl_P.dq0toAlphaBetaZero_Alignment ==
                 imperix_ctrl_P.CompareToConstant_const_l);

  // Outputs for Enabled SubSystem: '<S364>/Subsystem1' incorporates:
  //   EnablePort: '<S472>/Enable'

  if (rtb_Compare > 0) {
    // Fcn: '<S472>/Fcn' incorporates:
    //   Fcn: '<S472>/Fcn1'

    csum = sin(rtb_Switch);
    cumRevIndex = cos(rtb_Switch);

    // Fcn: '<S472>/Fcn'
    imperix_ctrl_B.Fcn_b = rtb_Sum_j * cumRevIndex - rtb_Sum1_c * csum;

    // Fcn: '<S472>/Fcn1'
    imperix_ctrl_B.Fcn1_i = rtb_Sum_j * csum + rtb_Sum1_c * cumRevIndex;
  }

  // End of Outputs for SubSystem: '<S364>/Subsystem1'

  // Outputs for Enabled SubSystem: '<S364>/Subsystem - pi//2 delay' incorporates:
  //   EnablePort: '<S471>/Enable'

  // RelationalOperator: '<S470>/Compare' incorporates:
  //   Constant: '<S364>/Constant'
  //   Constant: '<S470>/Constant'

  if (imperix_ctrl_P.dq0toAlphaBetaZero_Alignment ==
      imperix_ctrl_P.CompareToConstant1_const_l) {
    // Fcn: '<S471>/Fcn' incorporates:
    //   Fcn: '<S471>/Fcn1'

    csum = cos(rtb_Switch);
    cumRevIndex = sin(rtb_Switch);

    // Fcn: '<S471>/Fcn'
    imperix_ctrl_B.Fcn_d = rtb_Sum_j * cumRevIndex + rtb_Sum1_c * csum;

    // Fcn: '<S471>/Fcn1'
    imperix_ctrl_B.Fcn1_d = -rtb_Sum_j * csum + rtb_Sum1_c * cumRevIndex;
  }

  // End of RelationalOperator: '<S470>/Compare'
  // End of Outputs for SubSystem: '<S364>/Subsystem - pi//2 delay'

  // Switch: '<S364>/Switch' incorporates:
  //   UnitDelay: '<S63>/Unit Delay'

  if (rtb_Compare != 0) {
    imperix_ctrl_DW.UnitDelay_DSTATE[0] = imperix_ctrl_B.Fcn_b;
    imperix_ctrl_DW.UnitDelay_DSTATE[1] = imperix_ctrl_B.Fcn1_i;
  } else {
    imperix_ctrl_DW.UnitDelay_DSTATE[0] = imperix_ctrl_B.Fcn_d;
    imperix_ctrl_DW.UnitDelay_DSTATE[1] = imperix_ctrl_B.Fcn1_d;
  }

  // End of Switch: '<S364>/Switch'

  // Gain: '<S63>/Gain1' incorporates:
  //   UnitDelay: '<S63>/Unit Delay'

  rtb_VectorConcatenate[1] = imperix_ctrl_P.Gain1_Gain_m *
    imperix_ctrl_DW.UnitDelay_DSTATE[0];
  rtb_VectorConcatenate[2] = imperix_ctrl_P.Gain1_Gain_m *
    imperix_ctrl_DW.UnitDelay_DSTATE[1];

  // Sum: '<S17>/Sum11' incorporates:
  //   Constant: '<S17>/Constant1'
  //   Gain: '<S17>/Gain'

  for (k = 0; k < 6; k++) {
    Mean_AccVal = 0.0;
    for (i_0 = 0; i_0 < 5; i_0++) {
      Mean_AccVal += imperix_ctrl_P.CCMPC.pinvT[6 * i_0 + k] *
        rtb_VectorConcatenate[i_0];
    }

    DataTypeConversion2[k] = Mean_AccVal + imperix_ctrl_P.Constant1_Value_n;
  }

  // End of Sum: '<S17>/Sum11'
  // MATLAB Function: '<S1>/Modulation index'
  // MATLAB Function 'Closed_loop_control/Modulation index': '<S22>:1'
  // '<S22>:1:10'
  // '<S22>:1:4'
  DataTypeConversion2[3] = -DataTypeConversion2[3];
  DataTypeConversion2[4] = -DataTypeConversion2[4];
  DataTypeConversion2[5] = -DataTypeConversion2[5];

  // '<S22>:1:10'
  for (k = 0; k < 6; k++) {
    csum = DataTypeConversion2[k] / 520.0;
    if (!(csum >= 0.0)) {
      csum = 0.0;
    }

    if (csum <= 1.0) {
      DataTypeConversion2[k] = csum;
    } else {
      DataTypeConversion2[k] = 1.0;
    }
  }

  // End of MATLAB Function: '<S1>/Modulation index'

  // DeadZone: '<S145>/DeadZone'
  if (rtb_DeadZone > imperix_ctrl_P.TEB.u_max) {
    rtb_DeadZone -= imperix_ctrl_P.TEB.u_max;
  } else if (rtb_DeadZone >= -imperix_ctrl_P.TEB.u_max) {
    rtb_DeadZone = 0.0;
  } else {
    rtb_DeadZone -= -imperix_ctrl_P.TEB.u_max;
  }

  // End of DeadZone: '<S145>/DeadZone'

  // Gain: '<S150>/Integral Gain'
  rtb_IntegralGain_k *= imperix_ctrl_P.TEB.ki;

  // DataTypeConversion: '<S347>/Data Type Conversion1'
  imperix_ctrl_B.DataTypeConversion1_l = static_cast<real32_T>
    (DataTypeConversion2[1]);

  // DataTypeConversion: '<S347>/Data Type Conversion2' incorporates:
  //   Constant: '<S347>/phase'

  imperix_ctrl_B.DataTypeConversion2_l = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value);

  // DataTypeConversion: '<S347>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3 = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S351>/generation'
  // S-Function (CB_PWM): '<S352>/PWM' incorporates:
  //   Constant: '<S116>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3 > 0.0) {
    CbPwm_Activate((tPwmOutput) 2, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 2, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 2, imperix_ctrl_B.DataTypeConversion1_l, 1);

  // End of Outputs for SubSystem: '<S351>/generation'

  // DataTypeConversion: '<S348>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S347>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_p = static_cast<real32_T>
    (DataTypeConversion2[1]);

  // DataTypeConversion: '<S348>/Data Type Conversion2' incorporates:
  //   Constant: '<S348>/phase'

  imperix_ctrl_B.DataTypeConversion2_i = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_o);

  // DataTypeConversion: '<S348>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_g = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S353>/generation'
  // S-Function (CB_PWM): '<S354>/PWM' incorporates:
  //   Constant: '<S116>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_g > 0.0) {
    CbPwm_Activate((tPwmOutput) 6, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 6, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 6, imperix_ctrl_B.DataTypeConversion1_p, 1);

  // End of Outputs for SubSystem: '<S353>/generation'

  // DataTypeConversion: '<S349>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S347>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_h = static_cast<real32_T>
    (DataTypeConversion2[1]);

  // DataTypeConversion: '<S349>/Data Type Conversion2' incorporates:
  //   Constant: '<S349>/phase'

  imperix_ctrl_B.DataTypeConversion2_b = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_l);

  // DataTypeConversion: '<S349>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_i = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S355>/generation'
  // S-Function (CB_PWM): '<S356>/PWM' incorporates:
  //   Constant: '<S116>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_i > 0.0) {
    CbPwm_Activate((tPwmOutput) 3, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 3, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 3, imperix_ctrl_B.DataTypeConversion1_h, 1);

  // End of Outputs for SubSystem: '<S355>/generation'

  // DataTypeConversion: '<S350>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S347>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_f = static_cast<real32_T>
    (DataTypeConversion2[1]);

  // DataTypeConversion: '<S350>/Data Type Conversion2' incorporates:
  //   Constant: '<S350>/phase'

  imperix_ctrl_B.DataTypeConversion2_p = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_oo);

  // DataTypeConversion: '<S350>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_gf = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S357>/generation'
  // S-Function (CB_PWM): '<S358>/PWM' incorporates:
  //   Constant: '<S116>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_gf > 0.0) {
    CbPwm_Activate((tPwmOutput) 7, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 7, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 7, imperix_ctrl_B.DataTypeConversion1_f, 1);

  // End of Outputs for SubSystem: '<S357>/generation'

  // DataTypeConversion: '<S473>/Data Type Conversion1'
  imperix_ctrl_B.DataTypeConversion1_b = static_cast<real32_T>
    (DataTypeConversion2[2]);

  // DataTypeConversion: '<S473>/Data Type Conversion2' incorporates:
  //   Constant: '<S473>/phase'

  imperix_ctrl_B.DataTypeConversion2_d = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_p);

  // DataTypeConversion: '<S473>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_gp = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S477>/generation'
  // S-Function (CB_PWM): '<S478>/PWM' incorporates:
  //   Constant: '<S116>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_gp > 0.0) {
    CbPwm_Activate((tPwmOutput) 0, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 0, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 0, imperix_ctrl_B.DataTypeConversion1_b, 0);

  // End of Outputs for SubSystem: '<S477>/generation'

  // DataTypeConversion: '<S474>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S473>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_e = static_cast<real32_T>
    (DataTypeConversion2[2]);

  // DataTypeConversion: '<S474>/Data Type Conversion2' incorporates:
  //   Constant: '<S474>/phase'

  imperix_ctrl_B.DataTypeConversion2_o = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_pr);

  // DataTypeConversion: '<S474>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_gl = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S479>/generation'
  // S-Function (CB_PWM): '<S480>/PWM' incorporates:
  //   Constant: '<S116>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_gl > 0.0) {
    CbPwm_Activate((tPwmOutput) 4, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 4, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 4, imperix_ctrl_B.DataTypeConversion1_e, 0);

  // End of Outputs for SubSystem: '<S479>/generation'

  // DataTypeConversion: '<S475>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S473>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_po = static_cast<real32_T>
    (DataTypeConversion2[2]);

  // DataTypeConversion: '<S475>/Data Type Conversion2' incorporates:
  //   Constant: '<S475>/phase'

  imperix_ctrl_B.DataTypeConversion2_g = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_c);

  // DataTypeConversion: '<S475>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_m = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S481>/generation'
  // S-Function (CB_PWM): '<S482>/PWM' incorporates:
  //   Constant: '<S116>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_m > 0.0) {
    CbPwm_Activate((tPwmOutput) 1, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 1, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 1, imperix_ctrl_B.DataTypeConversion1_po, 0);

  // End of Outputs for SubSystem: '<S481>/generation'

  // DataTypeConversion: '<S476>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S473>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_c = static_cast<real32_T>
    (DataTypeConversion2[2]);

  // DataTypeConversion: '<S476>/Data Type Conversion2' incorporates:
  //   Constant: '<S476>/phase'

  imperix_ctrl_B.DataTypeConversion2_k = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_ll);

  // DataTypeConversion: '<S476>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_a = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S483>/generation'
  // S-Function (CB_PWM): '<S484>/PWM' incorporates:
  //   Constant: '<S116>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_a > 0.0) {
    CbPwm_Activate((tPwmOutput) 5, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 5, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 5, imperix_ctrl_B.DataTypeConversion1_c, 0);

  // End of Outputs for SubSystem: '<S483>/generation'

  // DeadZone: '<S514>/DeadZone'
  if (rtb_Gain3 > imperix_ctrl_P.PCC.u_max) {
    rtb_Gain3 -= imperix_ctrl_P.PCC.u_max;
  } else if (rtb_Gain3 >= -imperix_ctrl_P.PCC.u_max) {
    rtb_Gain3 = 0.0;
  } else {
    rtb_Gain3 -= -imperix_ctrl_P.PCC.u_max;
  }

  // End of DeadZone: '<S514>/DeadZone'

  // Gain: '<S519>/Integral Gain'
  rtb_IntegralGain_dr *= imperix_ctrl_P.PCC.ki;

  // DataTypeConversion: '<S546>/Data Type Conversion1'
  imperix_ctrl_B.DataTypeConversion1_h3 = static_cast<real32_T>
    (DataTypeConversion2[3]);

  // DataTypeConversion: '<S546>/Data Type Conversion2' incorporates:
  //   Constant: '<S546>/phase'

  imperix_ctrl_B.DataTypeConversion2_bv = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_n);

  // DataTypeConversion: '<S546>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_b = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S550>/generation'
  // S-Function (CB_PWM): '<S551>/PWM' incorporates:
  //   Constant: '<S116>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_b > 0.0) {
    CbPwm_Activate((tPwmOutput) 2, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 2, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 2, imperix_ctrl_B.DataTypeConversion1_h3, 0);

  // End of Outputs for SubSystem: '<S550>/generation'

  // DataTypeConversion: '<S547>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S546>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_m = static_cast<real32_T>
    (DataTypeConversion2[3]);

  // DataTypeConversion: '<S547>/Data Type Conversion2' incorporates:
  //   Constant: '<S547>/phase'

  imperix_ctrl_B.DataTypeConversion2_j = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_k);

  // DataTypeConversion: '<S547>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_h = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S552>/generation'
  // S-Function (CB_PWM): '<S553>/PWM' incorporates:
  //   Constant: '<S116>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_h > 0.0) {
    CbPwm_Activate((tPwmOutput) 6, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 6, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 6, imperix_ctrl_B.DataTypeConversion1_m, 0);

  // End of Outputs for SubSystem: '<S552>/generation'

  // DataTypeConversion: '<S548>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S546>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_fz = static_cast<real32_T>
    (DataTypeConversion2[3]);

  // DataTypeConversion: '<S548>/Data Type Conversion2' incorporates:
  //   Constant: '<S548>/phase'

  imperix_ctrl_B.DataTypeConversion2_a = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_py);

  // DataTypeConversion: '<S548>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_e = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S554>/generation'
  // S-Function (CB_PWM): '<S555>/PWM' incorporates:
  //   Constant: '<S116>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_e > 0.0) {
    CbPwm_Activate((tPwmOutput) 3, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 3, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 3, imperix_ctrl_B.DataTypeConversion1_fz, 0);

  // End of Outputs for SubSystem: '<S554>/generation'

  // DataTypeConversion: '<S549>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S546>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_i = static_cast<real32_T>
    (DataTypeConversion2[3]);

  // DataTypeConversion: '<S549>/Data Type Conversion2' incorporates:
  //   Constant: '<S549>/phase'

  imperix_ctrl_B.DataTypeConversion2_f = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_ng);

  // DataTypeConversion: '<S549>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_k = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S556>/generation'
  // S-Function (CB_PWM): '<S557>/PWM' incorporates:
  //   Constant: '<S116>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_k > 0.0) {
    CbPwm_Activate((tPwmOutput) 7, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 7, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 7, imperix_ctrl_B.DataTypeConversion1_i, 0);

  // End of Outputs for SubSystem: '<S556>/generation'

  // DataTypeConversion: '<S558>/Data Type Conversion1'
  imperix_ctrl_B.DataTypeConversion1_a = static_cast<real32_T>
    (DataTypeConversion2[4]);

  // DataTypeConversion: '<S558>/Data Type Conversion2' incorporates:
  //   Constant: '<S558>/phase'

  imperix_ctrl_B.DataTypeConversion2_dx = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_j);

  // DataTypeConversion: '<S558>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_l = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S562>/generation'
  // S-Function (CB_PWM): '<S563>/PWM' incorporates:
  //   Constant: '<S116>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_l > 0.0) {
    CbPwm_Activate((tPwmOutput) 8, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 8, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 8, imperix_ctrl_B.DataTypeConversion1_a, 0);

  // End of Outputs for SubSystem: '<S562>/generation'

  // DataTypeConversion: '<S559>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S558>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_k = static_cast<real32_T>
    (DataTypeConversion2[4]);

  // DataTypeConversion: '<S559>/Data Type Conversion2' incorporates:
  //   Constant: '<S559>/phase'

  imperix_ctrl_B.DataTypeConversion2_dm = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_of);

  // DataTypeConversion: '<S559>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_n = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S564>/generation'
  // S-Function (CB_PWM): '<S565>/PWM' incorporates:
  //   Constant: '<S116>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_n > 0.0) {
    CbPwm_Activate((tPwmOutput) 12, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 12, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 12, imperix_ctrl_B.DataTypeConversion1_k, 0);

  // End of Outputs for SubSystem: '<S564>/generation'

  // DataTypeConversion: '<S560>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S558>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_l4 = static_cast<real32_T>
    (DataTypeConversion2[4]);

  // DataTypeConversion: '<S560>/Data Type Conversion2' incorporates:
  //   Constant: '<S560>/phase'

  imperix_ctrl_B.DataTypeConversion2_n = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_h);

  // DataTypeConversion: '<S560>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_j = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S566>/generation'
  // S-Function (CB_PWM): '<S567>/PWM' incorporates:
  //   Constant: '<S116>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_j > 0.0) {
    CbPwm_Activate((tPwmOutput) 9, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 9, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 9, imperix_ctrl_B.DataTypeConversion1_l4, 0);

  // End of Outputs for SubSystem: '<S566>/generation'

  // DataTypeConversion: '<S561>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S558>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_bg = static_cast<real32_T>
    (DataTypeConversion2[4]);

  // DataTypeConversion: '<S561>/Data Type Conversion2' incorporates:
  //   Constant: '<S561>/phase'

  imperix_ctrl_B.DataTypeConversion2_nx = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_nc);

  // DataTypeConversion: '<S561>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_bs = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S568>/generation'
  // S-Function (CB_PWM): '<S569>/PWM' incorporates:
  //   Constant: '<S116>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_bs > 0.0) {
    CbPwm_Activate((tPwmOutput) 13, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 13, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 13, imperix_ctrl_B.DataTypeConversion1_bg, 0);

  // End of Outputs for SubSystem: '<S568>/generation'

  // DataTypeConversion: '<S570>/Data Type Conversion1'
  imperix_ctrl_B.DataTypeConversion1_d = static_cast<real32_T>
    (DataTypeConversion2[5]);

  // DataTypeConversion: '<S570>/Data Type Conversion2' incorporates:
  //   Constant: '<S570>/phase'

  imperix_ctrl_B.DataTypeConversion2_pe = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_f);

  // DataTypeConversion: '<S570>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_bsx = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S574>/generation'
  // S-Function (CB_PWM): '<S575>/PWM' incorporates:
  //   Constant: '<S116>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_bsx > 0.0) {
    CbPwm_Activate((tPwmOutput) 10, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 10, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 10, imperix_ctrl_B.DataTypeConversion1_d, 0);

  // End of Outputs for SubSystem: '<S574>/generation'

  // DataTypeConversion: '<S571>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S570>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_o = static_cast<real32_T>
    (DataTypeConversion2[5]);

  // DataTypeConversion: '<S571>/Data Type Conversion2' incorporates:
  //   Constant: '<S571>/phase'

  imperix_ctrl_B.DataTypeConversion2_n0 = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_i);

  // DataTypeConversion: '<S571>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_hm = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S576>/generation'
  // S-Function (CB_PWM): '<S577>/PWM' incorporates:
  //   Constant: '<S116>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_hm > 0.0) {
    CbPwm_Activate((tPwmOutput) 14, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 14, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 14, imperix_ctrl_B.DataTypeConversion1_o, 0);

  // End of Outputs for SubSystem: '<S576>/generation'

  // DataTypeConversion: '<S572>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S570>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_ay = static_cast<real32_T>
    (DataTypeConversion2[5]);

  // DataTypeConversion: '<S572>/Data Type Conversion2' incorporates:
  //   Constant: '<S572>/phase'

  imperix_ctrl_B.DataTypeConversion2_gl = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_a);

  // DataTypeConversion: '<S572>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_ip = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S578>/generation'
  // S-Function (CB_PWM): '<S579>/PWM' incorporates:
  //   Constant: '<S116>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_ip > 0.0) {
    CbPwm_Activate((tPwmOutput) 11, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 11, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 11, imperix_ctrl_B.DataTypeConversion1_ay, 0);

  // End of Outputs for SubSystem: '<S578>/generation'

  // DataTypeConversion: '<S573>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S570>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_pf = static_cast<real32_T>
    (DataTypeConversion2[5]);

  // DataTypeConversion: '<S573>/Data Type Conversion2' incorporates:
  //   Constant: '<S573>/phase'

  imperix_ctrl_B.DataTypeConversion2_by = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_ns);

  // DataTypeConversion: '<S573>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_o = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S580>/generation'
  // S-Function (CB_PWM): '<S581>/PWM' incorporates:
  //   Constant: '<S116>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_o > 0.0) {
    CbPwm_Activate((tPwmOutput) 15, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 15, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 15, imperix_ctrl_B.DataTypeConversion1_pf, 0);

  // End of Outputs for SubSystem: '<S580>/generation'

  // DataTypeConversion: '<S589>/Data Type Conversion1'
  imperix_ctrl_B.DataTypeConversion1_al = static_cast<real32_T>
    (DataTypeConversion2[0]);

  // DataTypeConversion: '<S589>/Data Type Conversion2' incorporates:
  //   Constant: '<S589>/phase'

  imperix_ctrl_B.DataTypeConversion2_jw = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_fa);

  // DataTypeConversion: '<S589>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_d = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S593>/generation'
  // S-Function (CB_PWM): '<S594>/PWM' incorporates:
  //   Constant: '<S116>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_d > 0.0) {
    CbPwm_Activate((tPwmOutput) 0, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 0, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 0, imperix_ctrl_B.DataTypeConversion1_al, 1);

  // End of Outputs for SubSystem: '<S593>/generation'

  // DataTypeConversion: '<S590>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S589>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_ig = static_cast<real32_T>
    (DataTypeConversion2[0]);

  // DataTypeConversion: '<S590>/Data Type Conversion2' incorporates:
  //   Constant: '<S590>/phase'

  imperix_ctrl_B.DataTypeConversion2_ij = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_hr);

  // DataTypeConversion: '<S590>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_bt = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S595>/generation'
  // S-Function (CB_PWM): '<S596>/PWM' incorporates:
  //   Constant: '<S116>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_bt > 0.0) {
    CbPwm_Activate((tPwmOutput) 4, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 4, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 4, imperix_ctrl_B.DataTypeConversion1_ig, 1);

  // End of Outputs for SubSystem: '<S595>/generation'

  // DataTypeConversion: '<S591>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S589>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_g = static_cast<real32_T>
    (DataTypeConversion2[0]);

  // DataTypeConversion: '<S591>/Data Type Conversion2' incorporates:
  //   Constant: '<S591>/phase'

  imperix_ctrl_B.DataTypeConversion2_nm = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_at);

  // DataTypeConversion: '<S591>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_p = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S597>/generation'
  // S-Function (CB_PWM): '<S598>/PWM' incorporates:
  //   Constant: '<S116>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_p > 0.0) {
    CbPwm_Activate((tPwmOutput) 1, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 1, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 1, imperix_ctrl_B.DataTypeConversion1_g, 1);

  // End of Outputs for SubSystem: '<S597>/generation'

  // DataTypeConversion: '<S592>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S589>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_gw = static_cast<real32_T>
    (DataTypeConversion2[0]);

  // DataTypeConversion: '<S592>/Data Type Conversion2' incorporates:
  //   Constant: '<S592>/phase'

  imperix_ctrl_B.DataTypeConversion2_a0 = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_cq);

  // DataTypeConversion: '<S592>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_bm = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S599>/generation'
  // S-Function (CB_PWM): '<S600>/PWM' incorporates:
  //   Constant: '<S116>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_bm > 0.0) {
    CbPwm_Activate((tPwmOutput) 5, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 5, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 5, imperix_ctrl_B.DataTypeConversion1_gw, 1);

  // End of Outputs for SubSystem: '<S599>/generation'

  // Switch: '<S143>/Switch1' incorporates:
  //   Constant: '<S143>/Clamping_zero'
  //   Constant: '<S143>/Constant'
  //   Constant: '<S143>/Constant2'
  //   RelationalOperator: '<S143>/fix for DT propagation issue'

  if (rtb_DeadZone > imperix_ctrl_P.Clamping_zero_Value) {
    tmp_0 = imperix_ctrl_P.Constant_Value_e;
  } else {
    tmp_0 = imperix_ctrl_P.Constant2_Value;
  }

  // Switch: '<S143>/Switch2' incorporates:
  //   Constant: '<S143>/Clamping_zero'
  //   Constant: '<S143>/Constant3'
  //   Constant: '<S143>/Constant4'
  //   RelationalOperator: '<S143>/fix for DT propagation issue1'

  if (rtb_IntegralGain_k > imperix_ctrl_P.Clamping_zero_Value) {
    tmp_1 = imperix_ctrl_P.Constant3_Value;
  } else {
    tmp_1 = imperix_ctrl_P.Constant4_Value;
  }

  // Switch: '<S143>/Switch' incorporates:
  //   Constant: '<S143>/Clamping_zero'
  //   Constant: '<S143>/Constant1'
  //   Logic: '<S143>/AND3'
  //   RelationalOperator: '<S143>/Equal1'
  //   RelationalOperator: '<S143>/Relational Operator'
  //   Switch: '<S143>/Switch1'
  //   Switch: '<S143>/Switch2'

  if ((imperix_ctrl_P.Clamping_zero_Value != rtb_DeadZone) && (tmp_0 == tmp_1))
  {
    rtb_IntegralGain_k = imperix_ctrl_P.Constant1_Value;
  }

  // Update for DiscreteIntegrator: '<S153>/Integrator' incorporates:
  //   Switch: '<S143>/Switch'

  imperix_ctrl_DW.Integrator_DSTATE += imperix_ctrl_P.Integrator_gainval *
    rtb_IntegralGain_k;

  // Update for DiscreteIntegrator: '<S329>/Integrator' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double5'
  //   Gain: '<S321>/Kb'
  //   Gain: '<S326>/Integral Gain'
  //   Sum: '<S321>/SumI2'
  //   Sum: '<S321>/SumI4'

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

  // End of Update for DiscreteIntegrator: '<S329>/Integrator'

  // Update for DiscreteIntegrator: '<S277>/Integrator' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double5'
  //   Gain: '<S269>/Kb'
  //   Gain: '<S274>/Integral Gain'
  //   Sum: '<S269>/SumI2'
  //   Sum: '<S269>/SumI4'

  if (imperix_ctrl_B.SFunction_h == 0.0F) {
    imperix_ctrl_DW.Integrator_DSTATE_i += (2.0 * imperix_ctrl_P.FOC.kp_F *
      (rtb_Saturation_m - rtb_Sum_b) + imperix_ctrl_P.FOC.ki_F * rtb_Sum2) *
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

  // End of Update for DiscreteIntegrator: '<S277>/Integrator'

  // Update for DiscreteIntegrator: '<S399>/Integrator' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double5'
  //   Gain: '<S391>/Kb'
  //   Gain: '<S396>/Integral Gain'
  //   Sum: '<S391>/SumI2'
  //   Sum: '<S391>/SumI4'

  if (imperix_ctrl_B.SFunction_h == 0.0F) {
    imperix_ctrl_DW.Integrator_DSTATE_j += ((rtb_Saturation_p - rtb_Sum_m) *
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

  // End of Update for DiscreteIntegrator: '<S399>/Integrator'

  // Update for DiscreteIntegrator: '<S451>/Integrator' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double5'
  //   Gain: '<S443>/Kb'
  //   Gain: '<S448>/Integral Gain'
  //   Sum: '<S443>/SumI2'
  //   Sum: '<S443>/SumI4'

  if (imperix_ctrl_B.SFunction_h == 0.0F) {
    imperix_ctrl_DW.Integrator_DSTATE_e += ((rtb_Saturation_j - rtb_Sum_h) *
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

  // End of Update for DiscreteIntegrator: '<S451>/Integrator'

  // Switch: '<S512>/Switch1' incorporates:
  //   Constant: '<S512>/Clamping_zero'
  //   Constant: '<S512>/Constant'
  //   Constant: '<S512>/Constant2'
  //   RelationalOperator: '<S512>/fix for DT propagation issue'

  if (rtb_Gain3 > imperix_ctrl_P.Clamping_zero_Value_a) {
    tmp_0 = imperix_ctrl_P.Constant_Value_hg;
  } else {
    tmp_0 = imperix_ctrl_P.Constant2_Value_a;
  }

  // Switch: '<S512>/Switch2' incorporates:
  //   Constant: '<S512>/Clamping_zero'
  //   Constant: '<S512>/Constant3'
  //   Constant: '<S512>/Constant4'
  //   RelationalOperator: '<S512>/fix for DT propagation issue1'

  if (rtb_IntegralGain_dr > imperix_ctrl_P.Clamping_zero_Value_a) {
    tmp_1 = imperix_ctrl_P.Constant3_Value_j;
  } else {
    tmp_1 = imperix_ctrl_P.Constant4_Value_a;
  }

  // Switch: '<S512>/Switch' incorporates:
  //   Constant: '<S512>/Clamping_zero'
  //   Constant: '<S512>/Constant1'
  //   Logic: '<S512>/AND3'
  //   RelationalOperator: '<S512>/Equal1'
  //   RelationalOperator: '<S512>/Relational Operator'
  //   Switch: '<S512>/Switch1'
  //   Switch: '<S512>/Switch2'

  if ((imperix_ctrl_P.Clamping_zero_Value_a != rtb_Gain3) && (tmp_0 == tmp_1)) {
    rtb_IntegralGain_dr = imperix_ctrl_P.Constant1_Value_d;
  }

  // Update for DiscreteIntegrator: '<S522>/Integrator' incorporates:
  //   Switch: '<S512>/Switch'

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

    // Start for S-Function (ADC): '<S107>/ADC'
    Adc_ConfigureInput(7, 0.00045776F, 0.0F, 2);
    Adc_GetPointer(7, 2, &ix_raw_adc_ptr_7_2);

    // Start for S-Function (ADC): '<S109>/ADC'
    Adc_ConfigureInput(6, 0.00045776F, 0.0F, 2);
    Adc_GetPointer(6, 2, &ix_raw_adc_ptr_6_2);

    // Start for S-Function (ADC): '<S99>/ADC'
    Adc_ConfigureInput(5, 0.00045776F, 0.0F, 2);
    Adc_GetPointer(5, 2, &ix_raw_adc_ptr_5_2);

    // Start for S-Function (ADC): '<S87>/ADC'
    Adc_ConfigureInput(4, 0.00045776F, 0.0F, 2);
    Adc_GetPointer(4, 2, &ix_raw_adc_ptr_4_2);

    // Start for S-Function (ADC): '<S101>/ADC'
    Adc_ConfigureInput(3, 0.00045776F, 0.0F, 2);
    Adc_GetPointer(3, 2, &ix_raw_adc_ptr_3_2);

    // Start for S-Function (ADC): '<S103>/ADC'
    Adc_ConfigureInput(2, 0.00045776F, 0.0F, 2);
    Adc_GetPointer(2, 2, &ix_raw_adc_ptr_2_2);
    imperix_MovingAverage_Start(&imperix_ctrl_DW.MovingAverage_p);

    // Start for S-Function (TUNABLE_PARAM): '<S604>/S-Function'
    reset_mean = 0.0F;                 // Tunable parameter initialization
    ConfigureTunable(&reset_mean, 0, 0, 0.0F, 1.0F);

    // Start for S-Function (PROBE): '<S172>/S-Function'
    ConfigureProbe(&is1, 0);

    // Start for S-Function (PROBE): '<S174>/S-Function'
    ConfigureProbe(&is2, 0);

    // Start for S-Function (ADC): '<S95>/ADC'
    Adc_ConfigureInput(1, 0.030518F, 0.0F, 2);
    Adc_GetPointer(1, 2, &ix_raw_adc_ptr_1_2);

    // Start for S-Function (ADC): '<S111>/ADC'
    Adc_ConfigureInput(0, 0.030518F, 0.0F, 2);
    Adc_GetPointer(0, 2, &ix_raw_adc_ptr_0_2);

    // Start for S-Function (ADC): '<S89>/ADC'
    Adc_ConfigureInput(7, 0.030518F, 0.0F, 0);
    Adc_GetPointer(7, 0, &ix_raw_adc_ptr_7_0);

    // Start for S-Function (ADC): '<S97>/ADC'
    Adc_ConfigureInput(6, 0.030518F, 0.0F, 0);
    Adc_GetPointer(6, 0, &ix_raw_adc_ptr_6_0);

    // Start for S-Function (ADC): '<S91>/ADC'
    Adc_ConfigureInput(5, 0.030518F, 0.0F, 0);
    Adc_GetPointer(5, 0, &ix_raw_adc_ptr_5_0);

    // Start for S-Function (ADC): '<S93>/ADC'
    Adc_ConfigureInput(4, 0.030518F, 0.0F, 0);
    Adc_GetPointer(4, 0, &ix_raw_adc_ptr_4_0);
    imperix_MovingAverage_Start(&imperix_ctrl_DW.MovingAverage);

    // Start for S-Function (PROBE): '<S176>/S-Function'
    ConfigureProbe(&Vc5, 0);

    // Start for S-Function (PROBE): '<S178>/S-Function'
    ConfigureProbe(&Vc6, 0);

    // Start for S-Function (ADC): '<S105>/ADC'
    Adc_ConfigureInput(3, 0.0061035F, 0.0F, 0);
    Adc_GetPointer(3, 0, &ix_raw_adc_ptr_3_0);

    // Start for MATLABSystem: '<S74>/Moving Average'
    imperix_ctrl_DW.obj.isInitialized = 0;
    imperix_ctrl_DW.obj.NumChannels = -1;
    imperix_ctrl_DW.obj.FrameLength = -1;
    imperix_ctrl_DW.obj.matlabCodegenIsDeleted = false;
    imperix_ctrl_SystemCore_setup_m(&imperix_ctrl_DW.obj);

    // Start for S-Function (PROBE): '<S180>/S-Function'
    ConfigureProbe(&wm, 0);

    // Start for S-Function (TUNABLE_PARAM): '<S612>/S-Function'
    enable_KF = 0.0F;                  // Tunable parameter initialization
    ConfigureTunable(&enable_KF, 0, 0, 0.0F, 1.0F);

    // Start for S-Function (TUNABLE_PARAM): '<S616>/S-Function'
    reset_KF = 1.0F;                   // Tunable parameter initialization
    ConfigureTunable(&reset_KF, 0, 0, 0.0F, 1.0F);

    // Start for S-Function (PROBE): '<S182>/S-Function'
    ConfigureProbe(&Frd, 0);

    // Start for S-Function (PROBE): '<S184>/S-Function'
    ConfigureProbe(&Vc_m, 0);

    // Start for S-Function (PROBE): '<S186>/S-Function'
    ConfigureProbe(&is3, 0);

    // Start for S-Function (PROBE): '<S188>/S-Function'
    ConfigureProbe(&Vc_m_f, 0);

    // Start for RateTransition generated from: '<S1>/Sum6'
    imperix_ctrl_B.TmpRTBAtSum6Inport1 =
      imperix_ctrl_P.TmpRTBAtSum6Inport1_InitialCond;

    // Start for S-Function (PROBE): '<S190>/S-Function'
    ConfigureProbe(&iP_r, 0);

    // Start for S-Function (PROBE): '<S192>/S-Function'
    ConfigureProbe(&iP, 0);

    // Start for S-Function (TUNABLE_PARAM): '<S606>/S-Function'
    magnetize = 0.0F;                  // Tunable parameter initialization
    ConfigureTunable(&magnetize, 0, 0, 0.0F, 1.0F);

    // Start for S-Function (TUNABLE_PARAM): '<S602>/S-Function'
    F_ref = 0.0F;                      // Tunable parameter initialization
    ConfigureTunable(&F_ref, 0, 0, 0.0F, 1.0F);

    // Start for S-Function (TUNABLE_PARAM): '<S610>/S-Function'
    w_ref = 0.0F;                      // Tunable parameter initialization
    ConfigureTunable(&w_ref, 0, 0, -1.0F, 1.0F);

    // Start for S-Function (TUNABLE_PARAM): '<S614>/S-Function'
    reset_PI = 0.0F;                   // Tunable parameter initialization
    ConfigureTunable(&reset_PI, 0, 0, 0.0F, 1.0F);

    // Start for S-Function (PROBE): '<S194>/S-Function'
    ConfigureProbe(&vm_q, 0);

    // Start for S-Function (PROBE): '<S196>/S-Function'
    ConfigureProbe(&Frd_r, 0);

    // Start for S-Function (PROBE): '<S198>/S-Function'
    ConfigureProbe(&wm_r, 0);

    // Start for S-Function (PROBE): '<S200>/S-Function'
    ConfigureProbe(&im_d, 0);

    // Start for S-Function (PROBE): '<S202>/S-Function'
    ConfigureProbe(&imd_r, 0);

    // Start for S-Function (PROBE): '<S204>/S-Function'
    ConfigureProbe(&im_q, 0);

    // Start for S-Function (PROBE): '<S206>/S-Function'
    ConfigureProbe(&imq_r, 0);

    // Start for S-Function (PROBE): '<S208>/S-Function'
    ConfigureProbe(&is4, 0);

    // Start for S-Function (PROBE): '<S210>/S-Function'
    ConfigureProbe(&vm_d, 0);

    // Start for S-Function (PROBE): '<S212>/S-Function'
    ConfigureProbe(&im_bet, 0);

    // Start for S-Function (PROBE): '<S214>/S-Function'
    ConfigureProbe(&im_alp, 0);

    // Start for S-Function (PROBE): '<S216>/S-Function'
    ConfigureProbe(&im_bet_KF, 0);

    // Start for S-Function (PROBE): '<S218>/S-Function'
    ConfigureProbe(&im_alp_KF, 0);

    // Start for S-Function (PROBE): '<S220>/S-Function'
    ConfigureProbe(&Fr_bet, 0);

    // Start for S-Function (PROBE): '<S222>/S-Function'
    ConfigureProbe(&Fr_alp, 0);

    // Start for S-Function (PROBE): '<S224>/S-Function'
    ConfigureProbe(&ws, 0);

    // Start for S-Function (PROBE): '<S226>/S-Function'
    ConfigureProbe(&gF, 0);

    // Start for S-Function (ADC): '<S85>/ADC'
    Adc_ConfigureInput(2, 6.1035E-5F, 0.0F, 0);
    Adc_GetPointer(2, 0, &ix_raw_adc_ptr_2_0);

    // Start for S-Function (PROBE): '<S228>/S-Function'
    ConfigureProbe(&Te, 0);

    // Start for S-Function (PROBE): '<S230>/S-Function'
    ConfigureProbe(&is5, 0);

    // Start for S-Function (PROBE): '<S232>/S-Function'
    ConfigureProbe(&is6, 0);

    // Start for S-Function (PROBE): '<S234>/S-Function'
    ConfigureProbe(&Vc1, 0);

    // Start for S-Function (PROBE): '<S236>/S-Function'
    ConfigureProbe(&Vc2, 0);

    // Start for S-Function (PROBE): '<S238>/S-Function'
    ConfigureProbe(&Vc3, 0);

    // Start for S-Function (PROBE): '<S240>/S-Function'
    ConfigureProbe(&Vc4, 0);

    // Start for S-Function (TUNABLE_PARAM): '<S608>/S-Function'
    enable_FP = 0.0F;                  // Tunable parameter initialization
    ConfigureTunable(&enable_FP, 0, 0, 0.0F, 1.0F);

    // Start for S-Function (IRQ): '<S114>/S-Function' incorporates:
    //   Constant: '<S116>/clk_id'

    ConfigureMainInterrupt(SimulinkInterrupt, (tClock)
      imperix_ctrl_P.clk_id_Value, 0.5F, 0U);
    ConfigureReadTriggerDelayInNs(2000U);
    Adc_SetUserOversampling(0.0F);

    // Start for S-Function (CLK): '<S116>/CLK1'
    Clock_SetFrequency((tClock) 0, 6000.0F);

    // Start for Atomic SubSystem: '<S351>/generation'
    // Start for S-Function (CB_PWM): '<S352>/PWM' incorporates:
    //   Constant: '<S116>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 2, (tClock) imperix_ctrl_P.clk_id_Value, 1);
    CbPwm_ConfigureOutputMode((tPwmOutput) 2, (tPwmOutMode) 2, 1);
    CbPwm_ConfigureCarrier((tPwmOutput) 2, (tPwmCarrier) 0, 1);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 2, (tPwmRate) 0, 1);
    CbPwm_SetPhase((tPwmOutput) 2, 0.75F, 1);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 2, 1);
    CbPwm_SetDutyCycle((tPwmOutput) 2, 0.0F, 1);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 2, 1);
    CbPwm_Activate((tPwmOutput) 2, 1);

    // End of Start for SubSystem: '<S351>/generation'

    // Start for Atomic SubSystem: '<S353>/generation'
    // Start for S-Function (CB_PWM): '<S354>/PWM' incorporates:
    //   Constant: '<S116>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 6, (tClock) imperix_ctrl_P.clk_id_Value, 1);
    CbPwm_ConfigureOutputMode((tPwmOutput) 6, (tPwmOutMode) 2, 1);
    CbPwm_ConfigureCarrier((tPwmOutput) 6, (tPwmCarrier) 0, 1);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 6, (tPwmRate) 0, 1);
    CbPwm_SetPhase((tPwmOutput) 6, 0.5F, 1);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 6, 1);
    CbPwm_SetDutyCycle((tPwmOutput) 6, 0.0F, 1);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 6, 1);
    CbPwm_Activate((tPwmOutput) 6, 1);

    // End of Start for SubSystem: '<S353>/generation'

    // Start for Atomic SubSystem: '<S355>/generation'
    // Start for S-Function (CB_PWM): '<S356>/PWM' incorporates:
    //   Constant: '<S116>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 3, (tClock) imperix_ctrl_P.clk_id_Value, 1);
    CbPwm_ConfigureOutputMode((tPwmOutput) 3, (tPwmOutMode) 2, 1);
    CbPwm_ConfigureCarrier((tPwmOutput) 3, (tPwmCarrier) 0, 1);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 3, (tPwmRate) 0, 1);
    CbPwm_SetPhase((tPwmOutput) 3, 0.25F, 1);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 3, 1);
    CbPwm_SetDutyCycle((tPwmOutput) 3, 0.0F, 1);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 3, 1);
    CbPwm_Activate((tPwmOutput) 3, 1);

    // End of Start for SubSystem: '<S355>/generation'

    // Start for Atomic SubSystem: '<S357>/generation'
    // Start for S-Function (CB_PWM): '<S358>/PWM' incorporates:
    //   Constant: '<S116>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 7, (tClock) imperix_ctrl_P.clk_id_Value, 1);
    CbPwm_ConfigureOutputMode((tPwmOutput) 7, (tPwmOutMode) 2, 1);
    CbPwm_ConfigureCarrier((tPwmOutput) 7, (tPwmCarrier) 0, 1);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 7, (tPwmRate) 0, 1);
    CbPwm_SetPhase((tPwmOutput) 7, 0.0F, 1);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 7, 1);
    CbPwm_SetDutyCycle((tPwmOutput) 7, 0.0F, 1);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 7, 1);
    CbPwm_Activate((tPwmOutput) 7, 1);

    // End of Start for SubSystem: '<S357>/generation'

    // Start for Atomic SubSystem: '<S477>/generation'
    // Start for S-Function (CB_PWM): '<S478>/PWM' incorporates:
    //   Constant: '<S116>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 0, (tClock) imperix_ctrl_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 0, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 0, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 0, (tPwmRate) 0, 0);
    CbPwm_SetPhase((tPwmOutput) 0, 0.75F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 0, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 0, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 0, 0);
    CbPwm_Activate((tPwmOutput) 0, 0);

    // End of Start for SubSystem: '<S477>/generation'

    // Start for Atomic SubSystem: '<S479>/generation'
    // Start for S-Function (CB_PWM): '<S480>/PWM' incorporates:
    //   Constant: '<S116>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 4, (tClock) imperix_ctrl_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 4, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 4, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 4, (tPwmRate) 0, 0);
    CbPwm_SetPhase((tPwmOutput) 4, 0.5F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 4, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 4, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 4, 0);
    CbPwm_Activate((tPwmOutput) 4, 0);

    // End of Start for SubSystem: '<S479>/generation'

    // Start for Atomic SubSystem: '<S481>/generation'
    // Start for S-Function (CB_PWM): '<S482>/PWM' incorporates:
    //   Constant: '<S116>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 1, (tClock) imperix_ctrl_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 1, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 1, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 1, (tPwmRate) 0, 0);
    CbPwm_SetPhase((tPwmOutput) 1, 0.25F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 1, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 1, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 1, 0);
    CbPwm_Activate((tPwmOutput) 1, 0);

    // End of Start for SubSystem: '<S481>/generation'

    // Start for Atomic SubSystem: '<S483>/generation'
    // Start for S-Function (CB_PWM): '<S484>/PWM' incorporates:
    //   Constant: '<S116>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 5, (tClock) imperix_ctrl_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 5, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 5, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 5, (tPwmRate) 0, 0);
    CbPwm_SetPhase((tPwmOutput) 5, 0.0F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 5, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 5, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 5, 0);
    CbPwm_Activate((tPwmOutput) 5, 0);

    // End of Start for SubSystem: '<S483>/generation'

    // Start for Atomic SubSystem: '<S550>/generation'
    // Start for S-Function (CB_PWM): '<S551>/PWM' incorporates:
    //   Constant: '<S116>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 2, (tClock) imperix_ctrl_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 2, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 2, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 2, (tPwmRate) 0, 0);
    CbPwm_SetPhase((tPwmOutput) 2, 0.75F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 2, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 2, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 2, 0);
    CbPwm_Activate((tPwmOutput) 2, 0);

    // End of Start for SubSystem: '<S550>/generation'

    // Start for Atomic SubSystem: '<S552>/generation'
    // Start for S-Function (CB_PWM): '<S553>/PWM' incorporates:
    //   Constant: '<S116>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 6, (tClock) imperix_ctrl_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 6, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 6, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 6, (tPwmRate) 0, 0);
    CbPwm_SetPhase((tPwmOutput) 6, 0.5F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 6, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 6, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 6, 0);
    CbPwm_Activate((tPwmOutput) 6, 0);

    // End of Start for SubSystem: '<S552>/generation'

    // Start for Atomic SubSystem: '<S554>/generation'
    // Start for S-Function (CB_PWM): '<S555>/PWM' incorporates:
    //   Constant: '<S116>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 3, (tClock) imperix_ctrl_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 3, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 3, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 3, (tPwmRate) 0, 0);
    CbPwm_SetPhase((tPwmOutput) 3, 0.25F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 3, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 3, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 3, 0);
    CbPwm_Activate((tPwmOutput) 3, 0);

    // End of Start for SubSystem: '<S554>/generation'

    // Start for Atomic SubSystem: '<S556>/generation'
    // Start for S-Function (CB_PWM): '<S557>/PWM' incorporates:
    //   Constant: '<S116>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 7, (tClock) imperix_ctrl_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 7, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 7, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 7, (tPwmRate) 0, 0);
    CbPwm_SetPhase((tPwmOutput) 7, 0.0F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 7, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 7, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 7, 0);
    CbPwm_Activate((tPwmOutput) 7, 0);

    // End of Start for SubSystem: '<S556>/generation'

    // Start for Atomic SubSystem: '<S562>/generation'
    // Start for S-Function (CB_PWM): '<S563>/PWM' incorporates:
    //   Constant: '<S116>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 8, (tClock) imperix_ctrl_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 8, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 8, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 8, (tPwmRate) 0, 0);
    CbPwm_SetPhase((tPwmOutput) 8, 0.75F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 8, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 8, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 8, 0);
    CbPwm_Activate((tPwmOutput) 8, 0);

    // End of Start for SubSystem: '<S562>/generation'

    // Start for Atomic SubSystem: '<S564>/generation'
    // Start for S-Function (CB_PWM): '<S565>/PWM' incorporates:
    //   Constant: '<S116>/clk_id'

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

    // End of Start for SubSystem: '<S564>/generation'

    // Start for Atomic SubSystem: '<S566>/generation'
    // Start for S-Function (CB_PWM): '<S567>/PWM' incorporates:
    //   Constant: '<S116>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 9, (tClock) imperix_ctrl_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 9, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 9, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 9, (tPwmRate) 0, 0);
    CbPwm_SetPhase((tPwmOutput) 9, 0.25F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 9, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 9, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 9, 0);
    CbPwm_Activate((tPwmOutput) 9, 0);

    // End of Start for SubSystem: '<S566>/generation'

    // Start for Atomic SubSystem: '<S568>/generation'
    // Start for S-Function (CB_PWM): '<S569>/PWM' incorporates:
    //   Constant: '<S116>/clk_id'

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

    // End of Start for SubSystem: '<S568>/generation'

    // Start for Atomic SubSystem: '<S574>/generation'
    // Start for S-Function (CB_PWM): '<S575>/PWM' incorporates:
    //   Constant: '<S116>/clk_id'

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

    // End of Start for SubSystem: '<S574>/generation'

    // Start for Atomic SubSystem: '<S576>/generation'
    // Start for S-Function (CB_PWM): '<S577>/PWM' incorporates:
    //   Constant: '<S116>/clk_id'

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

    // End of Start for SubSystem: '<S576>/generation'

    // Start for Atomic SubSystem: '<S578>/generation'
    // Start for S-Function (CB_PWM): '<S579>/PWM' incorporates:
    //   Constant: '<S116>/clk_id'

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

    // End of Start for SubSystem: '<S578>/generation'

    // Start for Atomic SubSystem: '<S580>/generation'
    // Start for S-Function (CB_PWM): '<S581>/PWM' incorporates:
    //   Constant: '<S116>/clk_id'

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

    // End of Start for SubSystem: '<S580>/generation'

    // Start for Atomic SubSystem: '<S593>/generation'
    // Start for S-Function (CB_PWM): '<S594>/PWM' incorporates:
    //   Constant: '<S116>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 0, (tClock) imperix_ctrl_P.clk_id_Value, 1);
    CbPwm_ConfigureOutputMode((tPwmOutput) 0, (tPwmOutMode) 2, 1);
    CbPwm_ConfigureCarrier((tPwmOutput) 0, (tPwmCarrier) 0, 1);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 0, (tPwmRate) 0, 1);
    CbPwm_SetPhase((tPwmOutput) 0, 0.75F, 1);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 0, 1);
    CbPwm_SetDutyCycle((tPwmOutput) 0, 0.0F, 1);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 0, 1);
    CbPwm_Activate((tPwmOutput) 0, 1);

    // End of Start for SubSystem: '<S593>/generation'

    // Start for Atomic SubSystem: '<S595>/generation'
    // Start for S-Function (CB_PWM): '<S596>/PWM' incorporates:
    //   Constant: '<S116>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 4, (tClock) imperix_ctrl_P.clk_id_Value, 1);
    CbPwm_ConfigureOutputMode((tPwmOutput) 4, (tPwmOutMode) 2, 1);
    CbPwm_ConfigureCarrier((tPwmOutput) 4, (tPwmCarrier) 0, 1);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 4, (tPwmRate) 0, 1);
    CbPwm_SetPhase((tPwmOutput) 4, 0.5F, 1);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 4, 1);
    CbPwm_SetDutyCycle((tPwmOutput) 4, 0.0F, 1);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 4, 1);
    CbPwm_Activate((tPwmOutput) 4, 1);

    // End of Start for SubSystem: '<S595>/generation'

    // Start for Atomic SubSystem: '<S597>/generation'
    // Start for S-Function (CB_PWM): '<S598>/PWM' incorporates:
    //   Constant: '<S116>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 1, (tClock) imperix_ctrl_P.clk_id_Value, 1);
    CbPwm_ConfigureOutputMode((tPwmOutput) 1, (tPwmOutMode) 2, 1);
    CbPwm_ConfigureCarrier((tPwmOutput) 1, (tPwmCarrier) 0, 1);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 1, (tPwmRate) 0, 1);
    CbPwm_SetPhase((tPwmOutput) 1, 0.25F, 1);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 1, 1);
    CbPwm_SetDutyCycle((tPwmOutput) 1, 0.0F, 1);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 1, 1);
    CbPwm_Activate((tPwmOutput) 1, 1);

    // End of Start for SubSystem: '<S597>/generation'

    // Start for Atomic SubSystem: '<S599>/generation'
    // Start for S-Function (CB_PWM): '<S600>/PWM' incorporates:
    //   Constant: '<S116>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 5, (tClock) imperix_ctrl_P.clk_id_Value, 1);
    CbPwm_ConfigureOutputMode((tPwmOutput) 5, (tPwmOutMode) 2, 1);
    CbPwm_ConfigureCarrier((tPwmOutput) 5, (tPwmCarrier) 0, 1);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 5, (tPwmRate) 0, 1);
    CbPwm_SetPhase((tPwmOutput) 5, 0.0F, 1);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 5, 1);
    CbPwm_SetDutyCycle((tPwmOutput) 5, 0.0F, 1);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 5, 1);
    CbPwm_Activate((tPwmOutput) 5, 1);

    // End of Start for SubSystem: '<S599>/generation'
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

    // InitializeConditions for DiscreteIntegrator: '<S153>/Integrator'
    imperix_ctrl_DW.Integrator_DSTATE =
      imperix_ctrl_P.PIDController1_InitialCondition;

    // InitializeConditions for DiscreteIntegrator: '<S329>/Integrator'
    imperix_ctrl_DW.Integrator_DSTATE_d =
      imperix_ctrl_P.SpeedPI_InitialConditionForInte;

    // InitializeConditions for DiscreteIntegrator: '<S277>/Integrator'
    imperix_ctrl_DW.Integrator_DSTATE_i =
      imperix_ctrl_P.FluxPI_InitialConditionForInteg;

    // InitializeConditions for DiscreteIntegrator: '<S399>/Integrator'
    imperix_ctrl_DW.Integrator_DSTATE_j =
      imperix_ctrl_P.MCCPId_InitialConditionForInteg;

    // InitializeConditions for DiscreteIntegrator: '<S451>/Integrator'
    imperix_ctrl_DW.Integrator_DSTATE_e =
      imperix_ctrl_P.MCCPIq_InitialConditionForInteg;

    // InitializeConditions for DiscreteIntegrator: '<S522>/Integrator'
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
      // SystemInitialize for SignalConversion generated from: '<S359>/In' incorporates:
      //   Outport: '<S359>/ '

      imperix_ctrl_B.In_c[i] = imperix_ctrl_P._Y0;

      // SystemInitialize for SignalConversion generated from: '<S360>/In' incorporates:
      //   Outport: '<S360>/ '

      imperix_ctrl_B.In_h[i] = imperix_ctrl_P._Y0_o;
    }

    // End of SystemInitialize for SubSystem: '<S61>/Sample and Hold'
    // End of SystemInitialize for SubSystem: '<S62>/Sample and Hold'

    // SystemInitialize for Enabled SubSystem: '<S364>/Subsystem - pi//2 delay'
    // SystemInitialize for Fcn: '<S471>/Fcn' incorporates:
    //   Outport: '<S471>/alpha_beta'

    imperix_ctrl_B.Fcn_d = imperix_ctrl_P.alpha_beta_Y0[0];

    // SystemInitialize for Fcn: '<S471>/Fcn1' incorporates:
    //   Outport: '<S471>/alpha_beta'

    imperix_ctrl_B.Fcn1_d = imperix_ctrl_P.alpha_beta_Y0[1];

    // End of SystemInitialize for SubSystem: '<S364>/Subsystem - pi//2 delay'

    // SystemInitialize for Enabled SubSystem: '<S364>/Subsystem1'
    // SystemInitialize for Fcn: '<S472>/Fcn' incorporates:
    //   Outport: '<S472>/alpha_beta'

    imperix_ctrl_B.Fcn_b = imperix_ctrl_P.alpha_beta_Y0_n[0];

    // SystemInitialize for Fcn: '<S472>/Fcn1' incorporates:
    //   Outport: '<S472>/alpha_beta'

    imperix_ctrl_B.Fcn1_i = imperix_ctrl_P.alpha_beta_Y0_n[1];

    // End of SystemInitialize for SubSystem: '<S364>/Subsystem1'

    // SystemInitialize for Enabled SubSystem: '<S540>/Subsystem - pi//2 delay'
    // SystemInitialize for Fcn: '<S544>/Fcn' incorporates:
    //   Outport: '<S544>/dq'

    imperix_ctrl_B.Fcn_c = imperix_ctrl_P.dq_Y0[0];

    // SystemInitialize for Fcn: '<S544>/Fcn1' incorporates:
    //   Outport: '<S544>/dq'

    imperix_ctrl_B.Fcn1_p = imperix_ctrl_P.dq_Y0[1];

    // End of SystemInitialize for SubSystem: '<S540>/Subsystem - pi//2 delay'

    // SystemInitialize for Enabled SubSystem: '<S540>/Subsystem1'
    // SystemInitialize for Fcn: '<S545>/Fcn' incorporates:
    //   Outport: '<S545>/dq'

    imperix_ctrl_B.Fcn = imperix_ctrl_P.dq_Y0_f[0];

    // SystemInitialize for Fcn: '<S545>/Fcn1' incorporates:
    //   Outport: '<S545>/dq'

    imperix_ctrl_B.Fcn1 = imperix_ctrl_P.dq_Y0_f[1];

    // End of SystemInitialize for SubSystem: '<S540>/Subsystem1'

    // SystemInitialize for Triggered SubSystem: '<S74>/Sample and Hold'
    // SystemInitialize for SignalConversion generated from: '<S588>/In' incorporates:
    //   Outport: '<S588>/ '

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
