//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: imperix_vf_kf_ctrl.cpp
//
// Code generated for Simulink model 'imperix_vf_kf_ctrl'.
// To be implemented on the B-Box RCP or the B-Board PRO.
//
// Model version                  : 19.101
// Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
// C/C++ source code generated on : Tue Feb  3 17:07:16 2026
//
#include "imperix_vf_kf_ctrl.h"
#include "imperix_vf_kf_ctrl_types.h"
#include <math.h>
#include <string.h>

extern "C"
{

#include "rt_nonfinite.h"

}

#include "rtwtypes.h"
#include "imperix_vf_kf_ctrl_private.h"
#include "zero_crossing_types.h"

real32_T reset_I;                      // Tunable parameter
int16_T* ix_raw_adc_ptr_3_0;
real32_T reset_mean;                   // Tunable parameter
real32_T wm;                           // Probe
int16_T* ix_raw_adc_ptr_7_2;
int16_T* ix_raw_adc_ptr_6_2;
int16_T* ix_raw_adc_ptr_5_2;
int16_T* ix_raw_adc_ptr_4_2;
int16_T* ix_raw_adc_ptr_3_2;
int16_T* ix_raw_adc_ptr_2_2;
real32_T im_alp;                       // Probe
real32_T im_bet;                       // Probe
real32_T is1;                          // Probe
real32_T is2;                          // Probe
real32_T enable_KF;                    // Tunable parameter
real32_T reset_KF;                     // Tunable parameter
real32_T im_bet_KF;                    // Probe
real32_T im_alp_KF;                    // Probe
real32_T Fr_bet;                       // Probe
real32_T Fr_alp;                       // Probe
real32_T Te_KF;                        // Probe
real32_T D5;                           // Probe
real32_T is3;                          // Probe
real32_T D6;                           // Probe
real32_T D1;                           // Probe
real32_T D2;                           // Probe
real32_T D3;                           // Probe
real32_T D4;                           // Probe
real32_T is4;                          // Probe
real32_T is5;                          // Probe
real32_T is6;                          // Probe
real32_T iP;                           // Probe
real32_T Vf_slope;                     // Tunable parameter
unsigned char __attribute__ ((section ("devicescount"))) __attribute__((used))
  ____DEVICES_COUNT = (2U+1);
real32_T enable_FP;                    // Tunable parameter

// Block signals (default storage)
B_imperix_vf_kf_ctrl_T imperix_vf_kf_ctrl_B;

// Block states (default storage)
DW_imperix_vf_kf_ctrl_T imperix_vf_kf_ctrl_DW;

// Previous zero-crossings (trigger) states
PrevZCX_imperix_vf_kf_ctrl_T imperix_vf_kf_ctrl_PrevZCX;

// Real-time model
RT_MODEL_imperix_vf_kf_ctrl_T imperix_vf_kf_ctrl_M_ =
  RT_MODEL_imperix_vf_kf_ctrl_T();
RT_MODEL_imperix_vf_kf_ctrl_T *const imperix_vf_kf_ctrl_M =
  &imperix_vf_kf_ctrl_M_;

// Forward declaration for local functions
static void imperix_vf_kf__SystemCore_setup(dsp_simulink_MovingAverage_im_T *obj);
static void imperix_vf_kf__SystemCore_setup(dsp_simulink_MovingAverage_im_T *obj)
{
  obj->isInitialized = 1;

  // Start for MATLABSystem: '<S48>/Moving Average'
  obj->NumChannels = 1;
  obj->FrameLength = 1;
  obj->pCumSum = 0.0;
  memset(&obj->pCumSumRev[0], 0, 99U * sizeof(real_T));
  obj->pCumRevIndex = 1.0;
  obj->pModValueRev = 0.0;
  obj->isSetupComplete = true;
  obj->TunablePropsChanged = false;
}

// Model step function
void imperix_vf_kf_ctrl_step(void)
{
  real_T varargin_1[200];
  real_T A[16];
  real_T M[16];
  real_T tmp[16];
  real_T M_0[8];
  real_T b_a[8];
  real_T rtb_Gain1_mw[6];
  real_T rtb_VectorConcatenate2[6];
  real_T rtb_Gain1_e[5];
  real_T xt_est[4];
  real_T rtb_Gain1[3];
  real_T rtb_Product2[3];
  real_T rtb_Gain1_0[2];
  real_T M_1;
  real_T csum;
  real_T cumRevIndex;
  real_T rtb_Bias1;
  real_T rtb_DiscreteTimeIntegrator3;
  real_T rtb_Te;
  real_T rtb_im_idx_1;
  real_T tmp_0;
  real_T xt_est_apriori;
  real_T z;
  int32_T b_a_tmp;
  int32_T b_a_tmp_0;
  int32_T idx_1;
  int32_T iindx;
  int32_T k;
  boolean_T exitg1;
  boolean_T tmp_1;
  ZCEventType zcEvent;

  // S-Function (TUNABLE_PARAM): '<S207>/S-Function'
  imperix_vf_kf_ctrl_B.SFunction = reset_I;

  // DiscreteIntegrator: '<S1>/Discrete-Time Integrator2'
  if ((imperix_vf_kf_ctrl_B.SFunction != 0.0F) ||
      (imperix_vf_kf_ctrl_DW.DiscreteTimeIntegrator2_PrevRes != 0)) {
    imperix_vf_kf_ctrl_DW.DiscreteTimeIntegrator2_DSTATE =
      imperix_vf_kf_ctrl_P.DiscreteTimeIntegrator2_IC;
  }

  // Gain: '<S1>/Gain2' incorporates:
  //   Bias: '<S1>/Bias1'

  rtb_Bias1 = imperix_vf_kf_ctrl_P.IM.Rs * imperix_vf_kf_ctrl_P.IM.isdN;

  // Bias: '<S1>/Bias1' incorporates:
  //   DiscreteIntegrator: '<S1>/Discrete-Time Integrator2'
  //   Gain: '<S1>/Gain2'

  rtb_Bias1 += (310.26870075253589 - rtb_Bias1) *
    imperix_vf_kf_ctrl_DW.DiscreteTimeIntegrator2_DSTATE;

  // Product: '<S1>/Product2' incorporates:
  //   DiscreteIntegrator: '<S1>/Discrete-Time Integrator1'
  //   Fcn: '<S1>/Fcn3'
  //   Fcn: '<S1>/Fcn4'
  //   Fcn: '<S1>/Fcn5'

  rtb_Product2[0] = rtb_Bias1 * cos
    (imperix_vf_kf_ctrl_DW.DiscreteTimeIntegrator1_DSTATE);
  rtb_Product2[1] = cos(imperix_vf_kf_ctrl_DW.DiscreteTimeIntegrator1_DSTATE -
                        2.0943951023931953) * rtb_Bias1;
  rtb_Product2[2] = cos(imperix_vf_kf_ctrl_DW.DiscreteTimeIntegrator1_DSTATE +
                        2.0943951023931953) * rtb_Bias1;

  // Sum: '<S11>/Sum1' incorporates:
  //   Constant: '<S11>/vP'

  // MATLAB Function 'Closed_loop_control/Modulation index': '<S20>:1'
  // '<S20>:1:4'
  rtb_VectorConcatenate2[0] = imperix_vf_kf_ctrl_P.M2C.Ax_max - rtb_Product2[0];

  // MATLAB Function: '<S1>/Modulation index' incorporates:
  //   Constant: '<S11>/vP'
  //   Sum: '<S11>/Sum1'
  //   Sum: '<S11>/Sum2'

  rtb_VectorConcatenate2[3] = -((0.0 - imperix_vf_kf_ctrl_P.M2C.Ax_max) -
    rtb_Product2[0]);

  // Sum: '<S11>/Sum1' incorporates:
  //   Constant: '<S11>/vP'

  rtb_VectorConcatenate2[1] = imperix_vf_kf_ctrl_P.M2C.Ax_max - rtb_Product2[1];

  // MATLAB Function: '<S1>/Modulation index' incorporates:
  //   Constant: '<S11>/vP'
  //   Sum: '<S11>/Sum1'
  //   Sum: '<S11>/Sum2'

  rtb_VectorConcatenate2[4] = -((0.0 - imperix_vf_kf_ctrl_P.M2C.Ax_max) -
    rtb_Product2[1]);

  // Sum: '<S11>/Sum1' incorporates:
  //   Constant: '<S11>/vP'

  rtb_VectorConcatenate2[2] = imperix_vf_kf_ctrl_P.M2C.Ax_max - rtb_Product2[2];

  // MATLAB Function: '<S1>/Modulation index' incorporates:
  //   Constant: '<S11>/vP'
  //   Sum: '<S11>/Sum1'
  //   Sum: '<S11>/Sum2'

  rtb_VectorConcatenate2[5] = -((0.0 - imperix_vf_kf_ctrl_P.M2C.Ax_max) -
    rtb_Product2[2]);

  // '<S20>:1:8'
  for (k = 0; k < 6; k++) {
    rtb_Bias1 = rtb_VectorConcatenate2[k] / 520.0;
    if (!(rtb_Bias1 >= 0.0)) {
      rtb_Bias1 = 0.0;
    }

    if (!(rtb_Bias1 <= 1.0)) {
      rtb_Bias1 = 1.0;
    }

    rtb_VectorConcatenate2[k] = rtb_Bias1;

    // Gain: '<S1>/Gain' incorporates:
    //   Gain: '<S1>/Gain1'

    rtb_Gain1_mw[k] = imperix_vf_kf_ctrl_P.Gain_Gain * rtb_Bias1;
  }

  // DataTypeConversion: '<S79>/Data Type Conversion1'
  imperix_vf_kf_ctrl_B.DataTypeConversion1 = static_cast<real32_T>(rtb_Gain1_mw
    [4]);

  // S-Function (DAC): '<S79>/DAC'
  Dac_SetVoltage(1, imperix_vf_kf_ctrl_B.DataTypeConversion1, 0);

  // DataTypeConversion: '<S81>/Data Type Conversion1'
  imperix_vf_kf_ctrl_B.DataTypeConversion1_l = static_cast<real32_T>
    (rtb_Gain1_mw[5]);

  // S-Function (DAC): '<S81>/DAC'
  Dac_SetVoltage(2, imperix_vf_kf_ctrl_B.DataTypeConversion1_l, 0);

  // DataTypeConversion: '<S83>/Data Type Conversion1'
  imperix_vf_kf_ctrl_B.DataTypeConversion1_la = static_cast<real32_T>
    (rtb_Gain1_mw[0]);

  // S-Function (DAC): '<S83>/DAC'
  Dac_SetVoltage(0, imperix_vf_kf_ctrl_B.DataTypeConversion1_la, 1);

  // DataTypeConversion: '<S85>/Data Type Conversion1'
  imperix_vf_kf_ctrl_B.DataTypeConversion1_p = static_cast<real32_T>
    (rtb_Gain1_mw[1]);

  // S-Function (DAC): '<S85>/DAC'
  Dac_SetVoltage(1, imperix_vf_kf_ctrl_B.DataTypeConversion1_p, 1);

  // DataTypeConversion: '<S87>/Data Type Conversion1'
  imperix_vf_kf_ctrl_B.DataTypeConversion1_a = static_cast<real32_T>
    (rtb_Gain1_mw[2]);

  // S-Function (DAC): '<S87>/DAC'
  Dac_SetVoltage(2, imperix_vf_kf_ctrl_B.DataTypeConversion1_a, 1);

  // DataTypeConversion: '<S89>/Data Type Conversion1'
  imperix_vf_kf_ctrl_B.DataTypeConversion1_e = static_cast<real32_T>
    (rtb_Gain1_mw[3]);

  // S-Function (DAC): '<S89>/DAC'
  Dac_SetVoltage(3, imperix_vf_kf_ctrl_B.DataTypeConversion1_e, 1);

  // S-Function (ADC): '<S64>/ADC'
  imperix_vf_kf_ctrl_B.ADC = (float)(*ix_raw_adc_ptr_3_0) * 0.0047937F + 0.0F;

  // MATLABSystem: '<S48>/Moving Average' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double1'

  if (imperix_vf_kf_ctrl_DW.obj.TunablePropsChanged) {
    imperix_vf_kf_ctrl_DW.obj.TunablePropsChanged = false;
  }

  z = 0.0;
  rtb_Bias1 = 0.0;
  csum = imperix_vf_kf_ctrl_DW.obj.pCumSum + imperix_vf_kf_ctrl_B.ADC;
  if (imperix_vf_kf_ctrl_DW.obj.pModValueRev == 0.0) {
    z = imperix_vf_kf_ctrl_DW.obj.pCumSumRev[static_cast<int32_T>
      (imperix_vf_kf_ctrl_DW.obj.pCumRevIndex) - 1] + csum;
  }

  imperix_vf_kf_ctrl_DW.obj.pCumSumRev[static_cast<int32_T>
    (imperix_vf_kf_ctrl_DW.obj.pCumRevIndex) - 1] = imperix_vf_kf_ctrl_B.ADC;
  if (imperix_vf_kf_ctrl_DW.obj.pCumRevIndex != 99.0) {
    cumRevIndex = imperix_vf_kf_ctrl_DW.obj.pCumRevIndex + 1.0;
  } else {
    cumRevIndex = 1.0;
    csum = 0.0;
    for (k = 97; k >= 0; k--) {
      imperix_vf_kf_ctrl_DW.obj.pCumSumRev[k] +=
        imperix_vf_kf_ctrl_DW.obj.pCumSumRev[k + 1];
    }
  }

  if (imperix_vf_kf_ctrl_DW.obj.pModValueRev == 0.0) {
    rtb_Bias1 = z / 100.0;
  }

  imperix_vf_kf_ctrl_DW.obj.pCumSum = csum;
  imperix_vf_kf_ctrl_DW.obj.pCumRevIndex = cumRevIndex;
  if (imperix_vf_kf_ctrl_DW.obj.pModValueRev > 0.0) {
    imperix_vf_kf_ctrl_DW.obj.pModValueRev--;
  } else {
    imperix_vf_kf_ctrl_DW.obj.pModValueRev = 0.0;
  }

  // S-Function (TUNABLE_PARAM): '<S209>/S-Function'
  imperix_vf_kf_ctrl_B.SFunction_k = reset_mean;

  // Outputs for Triggered SubSystem: '<S48>/Sample and Hold' incorporates:
  //   TriggerPort: '<S193>/Trigger'

  zcEvent = rt_R32ZCFcn(RISING_ZERO_CROSSING,
                        &imperix_vf_kf_ctrl_PrevZCX.SampleandHold_Trig_ZCE,
                        (imperix_vf_kf_ctrl_B.SFunction_k));
  if (zcEvent != NO_ZCEVENT) {
    // SignalConversion generated from: '<S193>/In' incorporates:
    //   MATLABSystem: '<S48>/Moving Average'

    imperix_vf_kf_ctrl_B.In = rtb_Bias1;
  }

  // End of Outputs for SubSystem: '<S48>/Sample and Hold'

  // Sum: '<S48>/Sum1' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double1'

  rtb_DiscreteTimeIntegrator3 = imperix_vf_kf_ctrl_B.ADC -
    imperix_vf_kf_ctrl_B.In;

  // DataTypeConversion: '<S91>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain8'

  imperix_vf_kf_ctrl_B.DataTypeConversion = static_cast<real32_T>(1.0 /
    imperix_vf_kf_ctrl_P.IM.wN * rtb_DiscreteTimeIntegrator3);

  // S-Function (PROBE): '<S91>/S-Function'
  wm = imperix_vf_kf_ctrl_B.DataTypeConversion;

  // S-Function (ADC): '<S66>/ADC'
  imperix_vf_kf_ctrl_B.ADC_f = (float)(*ix_raw_adc_ptr_7_2) * 0.00030518F + 0.0F;

  // S-Function (ADC): '<S68>/ADC'
  imperix_vf_kf_ctrl_B.ADC_e = (float)(*ix_raw_adc_ptr_6_2) * 0.00030518F + 0.0F;

  // S-Function (ADC): '<S58>/ADC'
  imperix_vf_kf_ctrl_B.ADC_i = (float)(*ix_raw_adc_ptr_5_2) * 0.00030518F + 0.0F;

  // S-Function (ADC): '<S70>/ADC'
  imperix_vf_kf_ctrl_B.ADC_d = (float)(*ix_raw_adc_ptr_4_2) * 0.00030518F + 0.0F;

  // S-Function (ADC): '<S60>/ADC'
  imperix_vf_kf_ctrl_B.ADC_ib = (float)(*ix_raw_adc_ptr_3_2) * 0.00030518F +
    0.0F;

  // S-Function (ADC): '<S62>/ADC'
  imperix_vf_kf_ctrl_B.ADC_p = (float)(*ix_raw_adc_ptr_2_2) * 0.00030518F + 0.0F;

  // DataTypeConversion: '<S1>/Cast To Double'
  rtb_Gain1_mw[0] = imperix_vf_kf_ctrl_B.ADC_f;
  rtb_Gain1_mw[1] = imperix_vf_kf_ctrl_B.ADC_e;
  rtb_Gain1_mw[2] = imperix_vf_kf_ctrl_B.ADC_i;
  rtb_Gain1_mw[3] = imperix_vf_kf_ctrl_B.ADC_d;
  rtb_Gain1_mw[4] = imperix_vf_kf_ctrl_B.ADC_ib;
  rtb_Gain1_mw[5] = imperix_vf_kf_ctrl_B.ADC_p;

  // Gain: '<S44>/Gain1'
  for (k = 0; k < 5; k++) {
    rtb_Gain1_e[k] = 0.0;
  }

  for (k = 0; k < 6; k++) {
    rtb_Bias1 = rtb_Gain1_mw[k];
    for (idx_1 = 0; idx_1 < 5; idx_1++) {
      rtb_Gain1_e[idx_1] += imperix_vf_kf_ctrl_P.M2C.A[5 * k + idx_1] *
        rtb_Bias1;
    }
  }

  // End of Gain: '<S44>/Gain1'

  // Gain: '<S156>/Gain3' incorporates:
  //   Gain: '<S44>/Gain2'

  csum = 0.0;
  cumRevIndex = 0.0;
  rtb_im_idx_1 = 0.0;
  for (k = 0; k < 3; k++) {
    rtb_Bias1 = rtb_Gain1_e[k + 2] * imperix_vf_kf_ctrl_P.Gain2_Gain;
    csum += imperix_vf_kf_ctrl_P.Gain3_Gain[3 * k] * rtb_Bias1;
    cumRevIndex += imperix_vf_kf_ctrl_P.Gain3_Gain[3 * k + 1] * rtb_Bias1;
    rtb_im_idx_1 += imperix_vf_kf_ctrl_P.Gain3_Gain[3 * k + 2] * rtb_Bias1;
  }

  // End of Gain: '<S156>/Gain3'

  // Gain: '<S156>/Gain1'
  rtb_Gain1[0] = imperix_vf_kf_ctrl_P.Gain1_Gain * csum;
  rtb_Gain1[1] = imperix_vf_kf_ctrl_P.Gain1_Gain * cumRevIndex;
  rtb_Gain1[2] = imperix_vf_kf_ctrl_P.Gain1_Gain * rtb_im_idx_1;

  // Gain: '<S1>/Gain9'
  rtb_Bias1 = 1.0 / (1.4142135623730951 * imperix_vf_kf_ctrl_P.IM.IN);

  // DataTypeConversion: '<S93>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain9'

  imperix_vf_kf_ctrl_B.DataTypeConversion_f = static_cast<real32_T>(rtb_Bias1 *
    rtb_Gain1[0]);

  // S-Function (PROBE): '<S93>/S-Function'
  im_alp = imperix_vf_kf_ctrl_B.DataTypeConversion_f;

  // DataTypeConversion: '<S95>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain9'

  imperix_vf_kf_ctrl_B.DataTypeConversion_i = static_cast<real32_T>(rtb_Bias1 *
    rtb_Gain1[1]);

  // S-Function (PROBE): '<S95>/S-Function'
  im_bet = imperix_vf_kf_ctrl_B.DataTypeConversion_i;

  // Gain: '<S1>/Gain1'
  z = 1.0 / imperix_vf_kf_ctrl_P.M2C.is_max;
  for (k = 0; k < 6; k++) {
    rtb_Gain1_mw[k] *= z;
  }

  // End of Gain: '<S1>/Gain1'

  // DataTypeConversion: '<S97>/Data Type Conversion'
  imperix_vf_kf_ctrl_B.DataTypeConversion_id = static_cast<real32_T>
    (rtb_Gain1_mw[0]);

  // S-Function (PROBE): '<S97>/S-Function'
  is1 = imperix_vf_kf_ctrl_B.DataTypeConversion_id;

  // DataTypeConversion: '<S99>/Data Type Conversion'
  imperix_vf_kf_ctrl_B.DataTypeConversion_p = static_cast<real32_T>
    (rtb_Gain1_mw[1]);

  // S-Function (PROBE): '<S99>/S-Function'
  is2 = imperix_vf_kf_ctrl_B.DataTypeConversion_p;

  // Gain: '<S1>/Gain5'
  csum = imperix_vf_kf_ctrl_P.IM.np * rtb_DiscreteTimeIntegrator3;

  // S-Function (TUNABLE_PARAM): '<S215>/S-Function'
  imperix_vf_kf_ctrl_B.SFunction_m = enable_KF;

  // S-Function (TUNABLE_PARAM): '<S217>/S-Function'
  imperix_vf_kf_ctrl_B.SFunction_f = reset_KF;

  // MATLAB Function: '<S1>/Kalman Filter' incorporates:
  //   Gain: '<S56>/Gain1'

  // MATLAB Function 'Closed_loop_control/Kalman Filter': '<S19>:1'
  // '<S19>:1:12'
  // '<S19>:1:13'
  z = 0.0;
  cumRevIndex = 0.0;
  rtb_im_idx_1 = 0.0;
  rtb_DiscreteTimeIntegrator3 = 0.0;

  // '<S19>:1:14'
  rtb_Te = 0.0;
  if (imperix_vf_kf_ctrl_B.SFunction_m != 0.0F) {
    if (imperix_vf_kf_ctrl_B.SFunction_f != 0.0F) {
      // '<S19>:1:21'
      imperix_vf_kf_ctrl_DW.xt_est_apriori[0] = imperix_vf_kf_ctrl_P.KF.x1_mu[0];
      imperix_vf_kf_ctrl_DW.xt_est_apriori[1] = imperix_vf_kf_ctrl_P.KF.x1_mu[1];
      imperix_vf_kf_ctrl_DW.xt_est_apriori[2] = imperix_vf_kf_ctrl_P.KF.x1_mu[2];
      imperix_vf_kf_ctrl_DW.xt_est_apriori[3] = imperix_vf_kf_ctrl_P.KF.x1_mu[3];
    }

    // '<S19>:1:25'
    memcpy(&A[0], &imperix_vf_kf_ctrl_P.KF.A[0], sizeof(real_T) << 4U);

    // '<S19>:1:26'
    A[12] = imperix_vf_kf_ctrl_P.KF.A[12] * csum;

    // '<S19>:1:27'
    A[9] = imperix_vf_kf_ctrl_P.KF.A[9] * csum;

    // '<S19>:1:28'
    A[14] = imperix_vf_kf_ctrl_P.KF.A[14] * csum;

    // '<S19>:1:29'
    A[11] = imperix_vf_kf_ctrl_P.KF.A[11] * csum;

    // '<S19>:1:30'
    z = 0.5 * imperix_vf_kf_ctrl_P.KF.Ts;
    for (k = 0; k < 16; k++) {
      M[k] = z * A[k] + imperix_vf_kf_ctrl_DW.Inx[k];
    }

    // '<S19>:1:31'
    // '<S19>:1:39'
    // '<S19>:1:69'
    // '<S19>:1:57'
    for (k = 0; k < 200; k++) {
      varargin_1[k] = fabs(imperix_vf_kf_ctrl_P.KF.we_list[k] - csum);
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
      z = varargin_1[k - 1];
      iindx = k;
      for (idx_1 = k + 1; idx_1 < 201; idx_1++) {
        cumRevIndex = varargin_1[idx_1 - 1];
        if (z > cumRevIndex) {
          z = cumRevIndex;
          iindx = idx_1;
        }
      }
    }

    // '<S19>:1:57'
    idx_1 = iindx - 1;

    // '<S19>:1:58'
    z = csum - imperix_vf_kf_ctrl_P.KF.we_list[iindx - 1];
    if (rtIsNaN(z)) {
      z = (rtNaN);
    } else if (z < 0.0) {
      z = -1.0;
    } else {
      z = (z > 0.0);
    }

    z += static_cast<real_T>(iindx);

    // '<S19>:1:60'
    tmp_1 = rtIsNaN(z);
    if ((iindx <= z) || tmp_1) {
      k = iindx;
    } else {
      k = static_cast<int32_T>(z);
    }

    if (k == 0) {
      // '<S19>:1:61'
      // '<S19>:1:62'
      idx_1 = iindx;

      // '<S19>:1:63'
      z++;
    } else {
      if ((iindx >= z) || tmp_1) {
        k = iindx;
      } else {
        k = static_cast<int32_T>(z);
      }

      if (k == 201) {
        // '<S19>:1:64'
        // '<S19>:1:65'
        idx_1 = iindx - 2;

        // '<S19>:1:66'
        z--;
      }
    }

    // '<S19>:1:69'
    // '<S19>:1:70'
    // '<S19>:1:72'
    rtb_im_idx_1 = imperix_vf_kf_ctrl_P.KF.we_list[1] -
      imperix_vf_kf_ctrl_P.KF.we_list[0];

    // '<S19>:1:73'
    cumRevIndex = fabs(csum - imperix_vf_kf_ctrl_P.KF.we_list
                       [static_cast<int32_T>(z) - 1]) / rtb_im_idx_1;

    // '<S19>:1:74'
    csum = fabs(csum - imperix_vf_kf_ctrl_P.KF.we_list[idx_1]) / rtb_im_idx_1;

    // '<S19>:1:76'
    // '<S19>:1:40'
    rtb_im_idx_1 = imperix_vf_kf_ctrl_DW.xt_est_apriori[1];
    rtb_DiscreteTimeIntegrator3 = imperix_vf_kf_ctrl_DW.xt_est_apriori[0];
    rtb_Te = imperix_vf_kf_ctrl_DW.xt_est_apriori[2];
    xt_est_apriori = imperix_vf_kf_ctrl_DW.xt_est_apriori[3];
    for (k = 0; k < 2; k++) {
      iindx = k << 2;
      b_a_tmp = ((static_cast<int32_T>(z) - 1) << 3) + iindx;
      b_a_tmp_0 = (idx_1 << 3) + iindx;
      b_a[iindx] = imperix_vf_kf_ctrl_P.KF.gain_schedule[b_a_tmp] * csum +
        imperix_vf_kf_ctrl_P.KF.gain_schedule[b_a_tmp_0] * cumRevIndex;
      b_a[iindx + 1] = imperix_vf_kf_ctrl_P.KF.gain_schedule[b_a_tmp + 1] * csum
        + imperix_vf_kf_ctrl_P.KF.gain_schedule[b_a_tmp_0 + 1] * cumRevIndex;
      b_a[iindx + 2] = imperix_vf_kf_ctrl_P.KF.gain_schedule[b_a_tmp + 2] * csum
        + imperix_vf_kf_ctrl_P.KF.gain_schedule[b_a_tmp_0 + 2] * cumRevIndex;
      b_a[iindx + 3] = imperix_vf_kf_ctrl_P.KF.gain_schedule[b_a_tmp + 3] * csum
        + imperix_vf_kf_ctrl_P.KF.gain_schedule[b_a_tmp_0 + 3] * cumRevIndex;
      rtb_Gain1_0[k] = rtb_Gain1[k] - (((imperix_vf_kf_ctrl_P.KF.C[k + 2] *
        rtb_im_idx_1 + imperix_vf_kf_ctrl_P.KF.C[k] *
        rtb_DiscreteTimeIntegrator3) + imperix_vf_kf_ctrl_P.KF.C[k + 4] * rtb_Te)
        + imperix_vf_kf_ctrl_P.KF.C[k + 6] * xt_est_apriori);
    }

    // '<S19>:1:43'
    // '<S19>:1:44'
    z = rtb_Gain1_0[1];
    csum = rtb_Gain1_0[0];
    for (k = 0; k < 4; k++) {
      xt_est[k] = (b_a[k + 4] * z + b_a[k] * csum) +
        imperix_vf_kf_ctrl_DW.xt_est_apriori[k];
    }

    for (idx_1 = 0; idx_1 < 4; idx_1++) {
      iindx = idx_1 << 2;
      rtb_DiscreteTimeIntegrator3 = M[iindx + 1];
      rtb_Te = M[iindx];
      xt_est_apriori = M[iindx + 2];
      M_1 = M[iindx + 3];
      for (k = 0; k < 4; k++) {
        b_a_tmp = iindx + k;
        tmp[b_a_tmp] = (((A[k + 4] * imperix_vf_kf_ctrl_P.KF.Ts *
                          rtb_DiscreteTimeIntegrator3 +
                          imperix_vf_kf_ctrl_P.KF.Ts * A[k] * rtb_Te) + A[k + 8]
                         * imperix_vf_kf_ctrl_P.KF.Ts * xt_est_apriori) + A[k +
                        12] * imperix_vf_kf_ctrl_P.KF.Ts * M_1) +
          imperix_vf_kf_ctrl_DW.Inx[b_a_tmp];
      }
    }

    for (k = 0; k < 2; k++) {
      rtb_DiscreteTimeIntegrator3 = 0.0;
      rtb_Te = 0.0;
      xt_est_apriori = 0.0;
      M_1 = 0.0;
      for (idx_1 = 0; idx_1 < 4; idx_1++) {
        z = imperix_vf_kf_ctrl_P.KF.B[(k << 2) + idx_1];
        iindx = idx_1 << 2;
        rtb_DiscreteTimeIntegrator3 += M[iindx] * z;
        rtb_Te += M[iindx + 1] * z;
        xt_est_apriori += M[iindx + 2] * z;
        M_1 += M[iindx + 3] * z;
      }

      iindx = k << 2;
      b_a[iindx + 3] = M_1;
      b_a[iindx + 2] = xt_est_apriori;
      b_a[iindx + 1] = rtb_Te;
      b_a[iindx] = rtb_DiscreteTimeIntegrator3;
    }

    // Gain: '<S56>/Gain3'
    z = 0.0;
    csum = 0.0;
    cumRevIndex = 0.0;
    for (k = 0; k < 3; k++) {
      rtb_im_idx_1 = rtb_Product2[k];
      z += imperix_vf_kf_ctrl_P.Gain3_Gain_a[3 * k] * rtb_im_idx_1;
      csum += imperix_vf_kf_ctrl_P.Gain3_Gain_a[3 * k + 1] * rtb_im_idx_1;
      cumRevIndex += imperix_vf_kf_ctrl_P.Gain3_Gain_a[3 * k + 2] * rtb_im_idx_1;
    }

    rtb_Product2[2] = cumRevIndex;
    rtb_Product2[1] = csum;
    rtb_Product2[0] = z;

    // End of Gain: '<S56>/Gain3'
    for (k = 0; k < 8; k++) {
      M_0[k] = b_a[k] * imperix_vf_kf_ctrl_P.KF.Ts;
    }

    csum = 0.0;
    cumRevIndex = 0.0;
    rtb_im_idx_1 = 0.0;
    tmp_0 = 0.0;
    for (k = 0; k < 4; k++) {
      z = xt_est[k];
      idx_1 = k << 2;
      csum += tmp[idx_1] * z;
      cumRevIndex += tmp[idx_1 + 1] * z;
      rtb_im_idx_1 += tmp[idx_1 + 2] * z;
      tmp_0 += tmp[idx_1 + 3] * z;
    }

    rtb_DiscreteTimeIntegrator3 = 0.0;
    rtb_Te = 0.0;
    xt_est_apriori = 0.0;
    M_1 = 0.0;
    for (k = 0; k < 2; k++) {
      z = imperix_vf_kf_ctrl_P.Gain1_Gain_m * rtb_Product2[k];
      iindx = k << 2;
      rtb_DiscreteTimeIntegrator3 += M_0[iindx] * z;
      rtb_Te += M_0[iindx + 1] * z;
      xt_est_apriori += M_0[iindx + 2] * z;
      M_1 += M_0[iindx + 3] * z;
    }

    imperix_vf_kf_ctrl_DW.xt_est_apriori[0] = csum + rtb_DiscreteTimeIntegrator3;
    imperix_vf_kf_ctrl_DW.xt_est_apriori[1] = cumRevIndex + rtb_Te;
    imperix_vf_kf_ctrl_DW.xt_est_apriori[2] = rtb_im_idx_1 + xt_est_apriori;
    imperix_vf_kf_ctrl_DW.xt_est_apriori[3] = tmp_0 + M_1;

    // '<S19>:1:45'
    // '<S19>:1:48'
    // '<S19>:1:49'
    z = xt_est[0];
    cumRevIndex = xt_est[2];
    rtb_im_idx_1 = xt_est[1];
    rtb_DiscreteTimeIntegrator3 = xt_est[3];

    // '<S19>:1:50'
    rtb_Te = (xt_est[0] * xt_est[3] - xt_est[1] * xt_est[2]) *
      -imperix_vf_kf_ctrl_P.IM.kT;
  } else {
    // '<S19>:1:16'
  }

  // End of MATLAB Function: '<S1>/Kalman Filter'

  // DataTypeConversion: '<S101>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain18'

  imperix_vf_kf_ctrl_B.DataTypeConversion_b = static_cast<real32_T>(rtb_Bias1 *
    rtb_im_idx_1);

  // S-Function (PROBE): '<S101>/S-Function'
  im_bet_KF = imperix_vf_kf_ctrl_B.DataTypeConversion_b;

  // DataTypeConversion: '<S103>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain18'

  imperix_vf_kf_ctrl_B.DataTypeConversion_ir = static_cast<real32_T>(rtb_Bias1 *
    z);

  // S-Function (PROBE): '<S103>/S-Function'
  im_alp_KF = imperix_vf_kf_ctrl_B.DataTypeConversion_ir;

  // Gain: '<S1>/Gain19'
  rtb_Bias1 = 1.0 / imperix_vf_kf_ctrl_P.IM.FrN;

  // DataTypeConversion: '<S105>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain19'

  imperix_vf_kf_ctrl_B.DataTypeConversion_d = static_cast<real32_T>(rtb_Bias1 *
    rtb_DiscreteTimeIntegrator3);

  // S-Function (PROBE): '<S105>/S-Function'
  Fr_bet = imperix_vf_kf_ctrl_B.DataTypeConversion_d;

  // DataTypeConversion: '<S107>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain19'

  imperix_vf_kf_ctrl_B.DataTypeConversion_c = static_cast<real32_T>(rtb_Bias1 *
    cumRevIndex);

  // S-Function (PROBE): '<S107>/S-Function'
  Fr_alp = imperix_vf_kf_ctrl_B.DataTypeConversion_c;

  // DataTypeConversion: '<S109>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain23'

  imperix_vf_kf_ctrl_B.DataTypeConversion_fy = static_cast<real32_T>(1.0 /
    imperix_vf_kf_ctrl_P.IM.TN * rtb_Te);

  // S-Function (PROBE): '<S109>/S-Function'
  Te_KF = imperix_vf_kf_ctrl_B.DataTypeConversion_fy;

  // DataTypeConversion: '<S111>/Data Type Conversion'
  imperix_vf_kf_ctrl_B.DataTypeConversion_g = static_cast<real32_T>
    (rtb_VectorConcatenate2[4]);

  // S-Function (PROBE): '<S111>/S-Function'
  D5 = imperix_vf_kf_ctrl_B.DataTypeConversion_g;

  // DataTypeConversion: '<S113>/Data Type Conversion'
  imperix_vf_kf_ctrl_B.DataTypeConversion_fo = static_cast<real32_T>
    (rtb_Gain1_mw[2]);

  // S-Function (PROBE): '<S113>/S-Function'
  is3 = imperix_vf_kf_ctrl_B.DataTypeConversion_fo;

  // DataTypeConversion: '<S115>/Data Type Conversion'
  imperix_vf_kf_ctrl_B.DataTypeConversion_bk = static_cast<real32_T>
    (rtb_VectorConcatenate2[5]);

  // S-Function (PROBE): '<S115>/S-Function'
  D6 = imperix_vf_kf_ctrl_B.DataTypeConversion_bk;

  // DataTypeConversion: '<S117>/Data Type Conversion'
  imperix_vf_kf_ctrl_B.DataTypeConversion_gl = static_cast<real32_T>
    (rtb_VectorConcatenate2[0]);

  // S-Function (PROBE): '<S117>/S-Function'
  D1 = imperix_vf_kf_ctrl_B.DataTypeConversion_gl;

  // DataTypeConversion: '<S119>/Data Type Conversion'
  imperix_vf_kf_ctrl_B.DataTypeConversion_f2 = static_cast<real32_T>
    (rtb_VectorConcatenate2[1]);

  // S-Function (PROBE): '<S119>/S-Function'
  D2 = imperix_vf_kf_ctrl_B.DataTypeConversion_f2;

  // DataTypeConversion: '<S121>/Data Type Conversion'
  imperix_vf_kf_ctrl_B.DataTypeConversion_h = static_cast<real32_T>
    (rtb_VectorConcatenate2[2]);

  // S-Function (PROBE): '<S121>/S-Function'
  D3 = imperix_vf_kf_ctrl_B.DataTypeConversion_h;

  // DataTypeConversion: '<S123>/Data Type Conversion'
  imperix_vf_kf_ctrl_B.DataTypeConversion_gx = static_cast<real32_T>
    (rtb_VectorConcatenate2[3]);

  // S-Function (PROBE): '<S123>/S-Function'
  D4 = imperix_vf_kf_ctrl_B.DataTypeConversion_gx;

  // DataTypeConversion: '<S125>/Data Type Conversion'
  imperix_vf_kf_ctrl_B.DataTypeConversion_fs = static_cast<real32_T>
    (rtb_Gain1_mw[3]);

  // S-Function (PROBE): '<S125>/S-Function'
  is4 = imperix_vf_kf_ctrl_B.DataTypeConversion_fs;

  // DataTypeConversion: '<S127>/Data Type Conversion'
  imperix_vf_kf_ctrl_B.DataTypeConversion_ba = static_cast<real32_T>
    (rtb_Gain1_mw[4]);

  // S-Function (PROBE): '<S127>/S-Function'
  is5 = imperix_vf_kf_ctrl_B.DataTypeConversion_ba;

  // DataTypeConversion: '<S129>/Data Type Conversion'
  imperix_vf_kf_ctrl_B.DataTypeConversion_fz = static_cast<real32_T>
    (rtb_Gain1_mw[5]);

  // S-Function (PROBE): '<S129>/S-Function'
  is6 = imperix_vf_kf_ctrl_B.DataTypeConversion_fz;

  // DataTypeConversion: '<S131>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain6'

  imperix_vf_kf_ctrl_B.DataTypeConversion_pq = static_cast<real32_T>(1.0 /
    imperix_vf_kf_ctrl_P.M2C.ix_max * rtb_Gain1_e[0]);

  // S-Function (PROBE): '<S131>/S-Function'
  iP = imperix_vf_kf_ctrl_B.DataTypeConversion_pq;

  // Saturate: '<S72>/Saturation'
  if (imperix_vf_kf_ctrl_P.Saturation_UpperSat < 0.0F) {
    // Saturate: '<S72>/Saturation'
    imperix_vf_kf_ctrl_B.Saturation = imperix_vf_kf_ctrl_P.Saturation_UpperSat;
  } else if (imperix_vf_kf_ctrl_P.Saturation_LowerSat > 0.0F) {
    // Saturate: '<S72>/Saturation'
    imperix_vf_kf_ctrl_B.Saturation = imperix_vf_kf_ctrl_P.Saturation_LowerSat;
  } else {
    // Saturate: '<S72>/Saturation'
    imperix_vf_kf_ctrl_B.Saturation = 0.0F;
  }

  // End of Saturate: '<S72>/Saturation'
  // S-Function (TUNABLE_PARAM): '<S211>/S-Function'
  imperix_vf_kf_ctrl_B.SFunction_a = Vf_slope;

  // DiscreteIntegrator: '<S1>/Discrete-Time Integrator3'
  if ((imperix_vf_kf_ctrl_B.SFunction != 0.0F) ||
      (imperix_vf_kf_ctrl_DW.DiscreteTimeIntegrator3_PrevRes != 0)) {
    imperix_vf_kf_ctrl_DW.DiscreteTimeIntegrator3_DSTATE =
      imperix_vf_kf_ctrl_P.DiscreteTimeIntegrator3_IC;
  }

  // DataTypeConversion: '<S132>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S119>/Data Type Conversion'

  imperix_vf_kf_ctrl_B.DataTypeConversion1_le = static_cast<real32_T>
    (rtb_VectorConcatenate2[1]);

  // DataTypeConversion: '<S132>/Data Type Conversion2' incorporates:
  //   Constant: '<S132>/phase'

  imperix_vf_kf_ctrl_B.DataTypeConversion2 = static_cast<real32_T>
    (imperix_vf_kf_ctrl_P.phase_Value);

  // S-Function (TUNABLE_PARAM): '<S213>/S-Function'
  imperix_vf_kf_ctrl_B.SFunction_c = enable_FP;

  // Outputs for Atomic SubSystem: '<S136>/generation'
  // S-Function (CB_PWM): '<S137>/PWM' incorporates:
  //   Constant: '<S72>/clk_id'

  if (imperix_vf_kf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 2, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 2, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 2, imperix_vf_kf_ctrl_B.DataTypeConversion1_le,
                     1);

  // End of Outputs for SubSystem: '<S136>/generation'

  // DataTypeConversion: '<S133>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S119>/Data Type Conversion'

  imperix_vf_kf_ctrl_B.DataTypeConversion1_pv = static_cast<real32_T>
    (rtb_VectorConcatenate2[1]);

  // DataTypeConversion: '<S133>/Data Type Conversion2' incorporates:
  //   Constant: '<S133>/phase'

  imperix_vf_kf_ctrl_B.DataTypeConversion2_i = static_cast<real32_T>
    (imperix_vf_kf_ctrl_P.phase_Value_o);

  // Outputs for Atomic SubSystem: '<S138>/generation'
  // S-Function (CB_PWM): '<S139>/PWM' incorporates:
  //   Constant: '<S72>/clk_id'

  if (imperix_vf_kf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 6, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 6, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 6, imperix_vf_kf_ctrl_B.DataTypeConversion1_pv,
                     1);

  // End of Outputs for SubSystem: '<S138>/generation'

  // DataTypeConversion: '<S134>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S119>/Data Type Conversion'

  imperix_vf_kf_ctrl_B.DataTypeConversion1_h = static_cast<real32_T>
    (rtb_VectorConcatenate2[1]);

  // DataTypeConversion: '<S134>/Data Type Conversion2' incorporates:
  //   Constant: '<S134>/phase'

  imperix_vf_kf_ctrl_B.DataTypeConversion2_b = static_cast<real32_T>
    (imperix_vf_kf_ctrl_P.phase_Value_l);

  // Outputs for Atomic SubSystem: '<S140>/generation'
  // S-Function (CB_PWM): '<S141>/PWM' incorporates:
  //   Constant: '<S72>/clk_id'

  if (imperix_vf_kf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 3, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 3, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 3, imperix_vf_kf_ctrl_B.DataTypeConversion1_h,
                     1);

  // End of Outputs for SubSystem: '<S140>/generation'

  // DataTypeConversion: '<S135>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S119>/Data Type Conversion'

  imperix_vf_kf_ctrl_B.DataTypeConversion1_f = static_cast<real32_T>
    (rtb_VectorConcatenate2[1]);

  // DataTypeConversion: '<S135>/Data Type Conversion2' incorporates:
  //   Constant: '<S135>/phase'

  imperix_vf_kf_ctrl_B.DataTypeConversion2_p = static_cast<real32_T>
    (imperix_vf_kf_ctrl_P.phase_Value_oo);

  // Outputs for Atomic SubSystem: '<S142>/generation'
  // S-Function (CB_PWM): '<S143>/PWM' incorporates:
  //   Constant: '<S72>/clk_id'

  if (imperix_vf_kf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 7, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 7, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 7, imperix_vf_kf_ctrl_B.DataTypeConversion1_f,
                     1);

  // End of Outputs for SubSystem: '<S142>/generation'

  // DataTypeConversion: '<S144>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S121>/Data Type Conversion'

  imperix_vf_kf_ctrl_B.DataTypeConversion1_b = static_cast<real32_T>
    (rtb_VectorConcatenate2[2]);

  // DataTypeConversion: '<S144>/Data Type Conversion2' incorporates:
  //   Constant: '<S144>/phase'

  imperix_vf_kf_ctrl_B.DataTypeConversion2_d = static_cast<real32_T>
    (imperix_vf_kf_ctrl_P.phase_Value_p);

  // Outputs for Atomic SubSystem: '<S148>/generation'
  // S-Function (CB_PWM): '<S149>/PWM' incorporates:
  //   Constant: '<S72>/clk_id'

  if (imperix_vf_kf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 0, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 0, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 0, imperix_vf_kf_ctrl_B.DataTypeConversion1_b,
                     0);

  // End of Outputs for SubSystem: '<S148>/generation'

  // DataTypeConversion: '<S145>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S121>/Data Type Conversion'

  imperix_vf_kf_ctrl_B.DataTypeConversion1_eo = static_cast<real32_T>
    (rtb_VectorConcatenate2[2]);

  // DataTypeConversion: '<S145>/Data Type Conversion2' incorporates:
  //   Constant: '<S145>/phase'

  imperix_vf_kf_ctrl_B.DataTypeConversion2_o = static_cast<real32_T>
    (imperix_vf_kf_ctrl_P.phase_Value_pr);

  // Outputs for Atomic SubSystem: '<S150>/generation'
  // S-Function (CB_PWM): '<S151>/PWM' incorporates:
  //   Constant: '<S72>/clk_id'

  if (imperix_vf_kf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 4, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 4, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 4, imperix_vf_kf_ctrl_B.DataTypeConversion1_eo,
                     0);

  // End of Outputs for SubSystem: '<S150>/generation'

  // DataTypeConversion: '<S146>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S121>/Data Type Conversion'

  imperix_vf_kf_ctrl_B.DataTypeConversion1_po = static_cast<real32_T>
    (rtb_VectorConcatenate2[2]);

  // DataTypeConversion: '<S146>/Data Type Conversion2' incorporates:
  //   Constant: '<S146>/phase'

  imperix_vf_kf_ctrl_B.DataTypeConversion2_g = static_cast<real32_T>
    (imperix_vf_kf_ctrl_P.phase_Value_c);

  // Outputs for Atomic SubSystem: '<S152>/generation'
  // S-Function (CB_PWM): '<S153>/PWM' incorporates:
  //   Constant: '<S72>/clk_id'

  if (imperix_vf_kf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 1, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 1, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 1, imperix_vf_kf_ctrl_B.DataTypeConversion1_po,
                     0);

  // End of Outputs for SubSystem: '<S152>/generation'

  // DataTypeConversion: '<S147>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S121>/Data Type Conversion'

  imperix_vf_kf_ctrl_B.DataTypeConversion1_c = static_cast<real32_T>
    (rtb_VectorConcatenate2[2]);

  // DataTypeConversion: '<S147>/Data Type Conversion2' incorporates:
  //   Constant: '<S147>/phase'

  imperix_vf_kf_ctrl_B.DataTypeConversion2_k = static_cast<real32_T>
    (imperix_vf_kf_ctrl_P.phase_Value_ll);

  // Outputs for Atomic SubSystem: '<S154>/generation'
  // S-Function (CB_PWM): '<S155>/PWM' incorporates:
  //   Constant: '<S72>/clk_id'

  if (imperix_vf_kf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 5, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 5, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 5, imperix_vf_kf_ctrl_B.DataTypeConversion1_c,
                     0);

  // End of Outputs for SubSystem: '<S154>/generation'

  // DataTypeConversion: '<S157>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S123>/Data Type Conversion'

  imperix_vf_kf_ctrl_B.DataTypeConversion1_h3 = static_cast<real32_T>
    (rtb_VectorConcatenate2[3]);

  // DataTypeConversion: '<S157>/Data Type Conversion2' incorporates:
  //   Constant: '<S157>/phase'

  imperix_vf_kf_ctrl_B.DataTypeConversion2_bv = static_cast<real32_T>
    (imperix_vf_kf_ctrl_P.phase_Value_n);

  // Outputs for Atomic SubSystem: '<S161>/generation'
  // S-Function (CB_PWM): '<S162>/PWM' incorporates:
  //   Constant: '<S72>/clk_id'

  if (imperix_vf_kf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 2, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 2, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 2, imperix_vf_kf_ctrl_B.DataTypeConversion1_h3,
                     0);

  // End of Outputs for SubSystem: '<S161>/generation'

  // DataTypeConversion: '<S158>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S123>/Data Type Conversion'

  imperix_vf_kf_ctrl_B.DataTypeConversion1_m = static_cast<real32_T>
    (rtb_VectorConcatenate2[3]);

  // DataTypeConversion: '<S158>/Data Type Conversion2' incorporates:
  //   Constant: '<S158>/phase'

  imperix_vf_kf_ctrl_B.DataTypeConversion2_j = static_cast<real32_T>
    (imperix_vf_kf_ctrl_P.phase_Value_k);

  // Outputs for Atomic SubSystem: '<S163>/generation'
  // S-Function (CB_PWM): '<S164>/PWM' incorporates:
  //   Constant: '<S72>/clk_id'

  if (imperix_vf_kf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 6, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 6, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 6, imperix_vf_kf_ctrl_B.DataTypeConversion1_m,
                     0);

  // End of Outputs for SubSystem: '<S163>/generation'

  // DataTypeConversion: '<S159>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S123>/Data Type Conversion'

  imperix_vf_kf_ctrl_B.DataTypeConversion1_fz = static_cast<real32_T>
    (rtb_VectorConcatenate2[3]);

  // DataTypeConversion: '<S159>/Data Type Conversion2' incorporates:
  //   Constant: '<S159>/phase'

  imperix_vf_kf_ctrl_B.DataTypeConversion2_a = static_cast<real32_T>
    (imperix_vf_kf_ctrl_P.phase_Value_py);

  // Outputs for Atomic SubSystem: '<S165>/generation'
  // S-Function (CB_PWM): '<S166>/PWM' incorporates:
  //   Constant: '<S72>/clk_id'

  if (imperix_vf_kf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 3, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 3, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 3, imperix_vf_kf_ctrl_B.DataTypeConversion1_fz,
                     0);

  // End of Outputs for SubSystem: '<S165>/generation'

  // DataTypeConversion: '<S160>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S123>/Data Type Conversion'

  imperix_vf_kf_ctrl_B.DataTypeConversion1_i = static_cast<real32_T>
    (rtb_VectorConcatenate2[3]);

  // DataTypeConversion: '<S160>/Data Type Conversion2' incorporates:
  //   Constant: '<S160>/phase'

  imperix_vf_kf_ctrl_B.DataTypeConversion2_f = static_cast<real32_T>
    (imperix_vf_kf_ctrl_P.phase_Value_ng);

  // Outputs for Atomic SubSystem: '<S167>/generation'
  // S-Function (CB_PWM): '<S168>/PWM' incorporates:
  //   Constant: '<S72>/clk_id'

  if (imperix_vf_kf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 7, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 7, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 7, imperix_vf_kf_ctrl_B.DataTypeConversion1_i,
                     0);

  // End of Outputs for SubSystem: '<S167>/generation'

  // DataTypeConversion: '<S169>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S111>/Data Type Conversion'

  imperix_vf_kf_ctrl_B.DataTypeConversion1_al = static_cast<real32_T>
    (rtb_VectorConcatenate2[4]);

  // DataTypeConversion: '<S169>/Data Type Conversion2' incorporates:
  //   Constant: '<S169>/phase'

  imperix_vf_kf_ctrl_B.DataTypeConversion2_dx = static_cast<real32_T>
    (imperix_vf_kf_ctrl_P.phase_Value_j);

  // Outputs for Atomic SubSystem: '<S173>/generation'
  // S-Function (CB_PWM): '<S174>/PWM' incorporates:
  //   Constant: '<S72>/clk_id'

  if (imperix_vf_kf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 8, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 8, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 8, imperix_vf_kf_ctrl_B.DataTypeConversion1_al,
                     0);

  // End of Outputs for SubSystem: '<S173>/generation'

  // DataTypeConversion: '<S170>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S111>/Data Type Conversion'

  imperix_vf_kf_ctrl_B.DataTypeConversion1_k = static_cast<real32_T>
    (rtb_VectorConcatenate2[4]);

  // DataTypeConversion: '<S170>/Data Type Conversion2' incorporates:
  //   Constant: '<S170>/phase'

  imperix_vf_kf_ctrl_B.DataTypeConversion2_dm = static_cast<real32_T>
    (imperix_vf_kf_ctrl_P.phase_Value_of);

  // Outputs for Atomic SubSystem: '<S175>/generation'
  // S-Function (CB_PWM): '<S176>/PWM' incorporates:
  //   Constant: '<S72>/clk_id'

  if (imperix_vf_kf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 12, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 12, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 12, imperix_vf_kf_ctrl_B.DataTypeConversion1_k,
                     0);

  // End of Outputs for SubSystem: '<S175>/generation'

  // DataTypeConversion: '<S171>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S111>/Data Type Conversion'

  imperix_vf_kf_ctrl_B.DataTypeConversion1_l4 = static_cast<real32_T>
    (rtb_VectorConcatenate2[4]);

  // DataTypeConversion: '<S171>/Data Type Conversion2' incorporates:
  //   Constant: '<S171>/phase'

  imperix_vf_kf_ctrl_B.DataTypeConversion2_n = static_cast<real32_T>
    (imperix_vf_kf_ctrl_P.phase_Value_h);

  // Outputs for Atomic SubSystem: '<S177>/generation'
  // S-Function (CB_PWM): '<S178>/PWM' incorporates:
  //   Constant: '<S72>/clk_id'

  if (imperix_vf_kf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 9, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 9, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 9, imperix_vf_kf_ctrl_B.DataTypeConversion1_l4,
                     0);

  // End of Outputs for SubSystem: '<S177>/generation'

  // DataTypeConversion: '<S172>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S111>/Data Type Conversion'

  imperix_vf_kf_ctrl_B.DataTypeConversion1_bg = static_cast<real32_T>
    (rtb_VectorConcatenate2[4]);

  // DataTypeConversion: '<S172>/Data Type Conversion2' incorporates:
  //   Constant: '<S172>/phase'

  imperix_vf_kf_ctrl_B.DataTypeConversion2_nx = static_cast<real32_T>
    (imperix_vf_kf_ctrl_P.phase_Value_nc);

  // Outputs for Atomic SubSystem: '<S179>/generation'
  // S-Function (CB_PWM): '<S180>/PWM' incorporates:
  //   Constant: '<S72>/clk_id'

  if (imperix_vf_kf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 13, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 13, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 13,
                     imperix_vf_kf_ctrl_B.DataTypeConversion1_bg, 0);

  // End of Outputs for SubSystem: '<S179>/generation'

  // DataTypeConversion: '<S181>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S115>/Data Type Conversion'

  imperix_vf_kf_ctrl_B.DataTypeConversion1_d = static_cast<real32_T>
    (rtb_VectorConcatenate2[5]);

  // DataTypeConversion: '<S181>/Data Type Conversion2' incorporates:
  //   Constant: '<S181>/phase'

  imperix_vf_kf_ctrl_B.DataTypeConversion2_pe = static_cast<real32_T>
    (imperix_vf_kf_ctrl_P.phase_Value_f);

  // Outputs for Atomic SubSystem: '<S185>/generation'
  // S-Function (CB_PWM): '<S186>/PWM' incorporates:
  //   Constant: '<S72>/clk_id'

  if (imperix_vf_kf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 10, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 10, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 10, imperix_vf_kf_ctrl_B.DataTypeConversion1_d,
                     0);

  // End of Outputs for SubSystem: '<S185>/generation'

  // DataTypeConversion: '<S182>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S115>/Data Type Conversion'

  imperix_vf_kf_ctrl_B.DataTypeConversion1_o = static_cast<real32_T>
    (rtb_VectorConcatenate2[5]);

  // DataTypeConversion: '<S182>/Data Type Conversion2' incorporates:
  //   Constant: '<S182>/phase'

  imperix_vf_kf_ctrl_B.DataTypeConversion2_n0 = static_cast<real32_T>
    (imperix_vf_kf_ctrl_P.phase_Value_i);

  // Outputs for Atomic SubSystem: '<S187>/generation'
  // S-Function (CB_PWM): '<S188>/PWM' incorporates:
  //   Constant: '<S72>/clk_id'

  if (imperix_vf_kf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 14, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 14, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 14, imperix_vf_kf_ctrl_B.DataTypeConversion1_o,
                     0);

  // End of Outputs for SubSystem: '<S187>/generation'

  // DataTypeConversion: '<S183>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S115>/Data Type Conversion'

  imperix_vf_kf_ctrl_B.DataTypeConversion1_ay = static_cast<real32_T>
    (rtb_VectorConcatenate2[5]);

  // DataTypeConversion: '<S183>/Data Type Conversion2' incorporates:
  //   Constant: '<S183>/phase'

  imperix_vf_kf_ctrl_B.DataTypeConversion2_gl = static_cast<real32_T>
    (imperix_vf_kf_ctrl_P.phase_Value_a);

  // Outputs for Atomic SubSystem: '<S189>/generation'
  // S-Function (CB_PWM): '<S190>/PWM' incorporates:
  //   Constant: '<S72>/clk_id'

  if (imperix_vf_kf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 11, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 11, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 11,
                     imperix_vf_kf_ctrl_B.DataTypeConversion1_ay, 0);

  // End of Outputs for SubSystem: '<S189>/generation'

  // DataTypeConversion: '<S184>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S115>/Data Type Conversion'

  imperix_vf_kf_ctrl_B.DataTypeConversion1_pf = static_cast<real32_T>
    (rtb_VectorConcatenate2[5]);

  // DataTypeConversion: '<S184>/Data Type Conversion2' incorporates:
  //   Constant: '<S184>/phase'

  imperix_vf_kf_ctrl_B.DataTypeConversion2_by = static_cast<real32_T>
    (imperix_vf_kf_ctrl_P.phase_Value_ns);

  // Outputs for Atomic SubSystem: '<S191>/generation'
  // S-Function (CB_PWM): '<S192>/PWM' incorporates:
  //   Constant: '<S72>/clk_id'

  if (imperix_vf_kf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 15, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 15, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 15,
                     imperix_vf_kf_ctrl_B.DataTypeConversion1_pf, 0);

  // End of Outputs for SubSystem: '<S191>/generation'

  // DataTypeConversion: '<S194>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S117>/Data Type Conversion'

  imperix_vf_kf_ctrl_B.DataTypeConversion1_als = static_cast<real32_T>
    (rtb_VectorConcatenate2[0]);

  // DataTypeConversion: '<S194>/Data Type Conversion2' incorporates:
  //   Constant: '<S194>/phase'

  imperix_vf_kf_ctrl_B.DataTypeConversion2_jw = static_cast<real32_T>
    (imperix_vf_kf_ctrl_P.phase_Value_fa);

  // Outputs for Atomic SubSystem: '<S198>/generation'
  // S-Function (CB_PWM): '<S199>/PWM' incorporates:
  //   Constant: '<S72>/clk_id'

  if (imperix_vf_kf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 0, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 0, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 0,
                     imperix_vf_kf_ctrl_B.DataTypeConversion1_als, 1);

  // End of Outputs for SubSystem: '<S198>/generation'

  // DataTypeConversion: '<S195>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S117>/Data Type Conversion'

  imperix_vf_kf_ctrl_B.DataTypeConversion1_ig = static_cast<real32_T>
    (rtb_VectorConcatenate2[0]);

  // DataTypeConversion: '<S195>/Data Type Conversion2' incorporates:
  //   Constant: '<S195>/phase'

  imperix_vf_kf_ctrl_B.DataTypeConversion2_ij = static_cast<real32_T>
    (imperix_vf_kf_ctrl_P.phase_Value_hr);

  // Outputs for Atomic SubSystem: '<S200>/generation'
  // S-Function (CB_PWM): '<S201>/PWM' incorporates:
  //   Constant: '<S72>/clk_id'

  if (imperix_vf_kf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 4, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 4, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 4, imperix_vf_kf_ctrl_B.DataTypeConversion1_ig,
                     1);

  // End of Outputs for SubSystem: '<S200>/generation'

  // DataTypeConversion: '<S196>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S117>/Data Type Conversion'

  imperix_vf_kf_ctrl_B.DataTypeConversion1_g = static_cast<real32_T>
    (rtb_VectorConcatenate2[0]);

  // DataTypeConversion: '<S196>/Data Type Conversion2' incorporates:
  //   Constant: '<S196>/phase'

  imperix_vf_kf_ctrl_B.DataTypeConversion2_nm = static_cast<real32_T>
    (imperix_vf_kf_ctrl_P.phase_Value_at);

  // Outputs for Atomic SubSystem: '<S202>/generation'
  // S-Function (CB_PWM): '<S203>/PWM' incorporates:
  //   Constant: '<S72>/clk_id'

  if (imperix_vf_kf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 1, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 1, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 1, imperix_vf_kf_ctrl_B.DataTypeConversion1_g,
                     1);

  // End of Outputs for SubSystem: '<S202>/generation'

  // DataTypeConversion: '<S197>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S117>/Data Type Conversion'

  imperix_vf_kf_ctrl_B.DataTypeConversion1_gw = static_cast<real32_T>
    (rtb_VectorConcatenate2[0]);

  // DataTypeConversion: '<S197>/Data Type Conversion2' incorporates:
  //   Constant: '<S197>/phase'

  imperix_vf_kf_ctrl_B.DataTypeConversion2_a0 = static_cast<real32_T>
    (imperix_vf_kf_ctrl_P.phase_Value_cq);

  // Outputs for Atomic SubSystem: '<S204>/generation'
  // S-Function (CB_PWM): '<S205>/PWM' incorporates:
  //   Constant: '<S72>/clk_id'

  if (imperix_vf_kf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 5, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 5, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 5, imperix_vf_kf_ctrl_B.DataTypeConversion1_gw,
                     1);

  // End of Outputs for SubSystem: '<S204>/generation'

  // Update for DiscreteIntegrator: '<S1>/Discrete-Time Integrator2' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  if (imperix_vf_kf_ctrl_B.SFunction == 0.0F) {
    imperix_vf_kf_ctrl_DW.DiscreteTimeIntegrator2_DSTATE +=
      imperix_vf_kf_ctrl_P.DiscreteTimeIntegrator2_gainval *
      imperix_vf_kf_ctrl_B.SFunction_a;
    if (imperix_vf_kf_ctrl_DW.DiscreteTimeIntegrator2_DSTATE >
        imperix_vf_kf_ctrl_P.DiscreteTimeIntegrator2_UpperSa) {
      imperix_vf_kf_ctrl_DW.DiscreteTimeIntegrator2_DSTATE =
        imperix_vf_kf_ctrl_P.DiscreteTimeIntegrator2_UpperSa;
    } else if (imperix_vf_kf_ctrl_DW.DiscreteTimeIntegrator2_DSTATE <
               imperix_vf_kf_ctrl_P.DiscreteTimeIntegrator2_LowerSa) {
      imperix_vf_kf_ctrl_DW.DiscreteTimeIntegrator2_DSTATE =
        imperix_vf_kf_ctrl_P.DiscreteTimeIntegrator2_LowerSa;
    }
  }

  if (imperix_vf_kf_ctrl_B.SFunction > 0.0F) {
    imperix_vf_kf_ctrl_DW.DiscreteTimeIntegrator2_PrevRes = 1;
  } else if (imperix_vf_kf_ctrl_B.SFunction < 0.0F) {
    imperix_vf_kf_ctrl_DW.DiscreteTimeIntegrator2_PrevRes = -1;
  } else if (imperix_vf_kf_ctrl_B.SFunction == 0.0F) {
    imperix_vf_kf_ctrl_DW.DiscreteTimeIntegrator2_PrevRes = 0;
  } else {
    imperix_vf_kf_ctrl_DW.DiscreteTimeIntegrator2_PrevRes = 2;
  }

  // End of Update for DiscreteIntegrator: '<S1>/Discrete-Time Integrator2'

  // Update for DiscreteIntegrator: '<S1>/Discrete-Time Integrator1' incorporates:
  //   DiscreteIntegrator: '<S1>/Discrete-Time Integrator3'
  //   Gain: '<S1>/Gain7'

  imperix_vf_kf_ctrl_DW.DiscreteTimeIntegrator1_DSTATE += 6.2831853071795862 *
    imperix_vf_kf_ctrl_P.IM.fN *
    imperix_vf_kf_ctrl_DW.DiscreteTimeIntegrator3_DSTATE *
    imperix_vf_kf_ctrl_P.DiscreteTimeIntegrator1_gainval;

  // Update for DiscreteIntegrator: '<S1>/Discrete-Time Integrator3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  if (imperix_vf_kf_ctrl_B.SFunction == 0.0F) {
    imperix_vf_kf_ctrl_DW.DiscreteTimeIntegrator3_DSTATE +=
      imperix_vf_kf_ctrl_P.DiscreteTimeIntegrator3_gainval *
      imperix_vf_kf_ctrl_B.SFunction_a;
    if (imperix_vf_kf_ctrl_DW.DiscreteTimeIntegrator3_DSTATE >
        imperix_vf_kf_ctrl_P.DiscreteTimeIntegrator3_UpperSa) {
      imperix_vf_kf_ctrl_DW.DiscreteTimeIntegrator3_DSTATE =
        imperix_vf_kf_ctrl_P.DiscreteTimeIntegrator3_UpperSa;
    } else if (imperix_vf_kf_ctrl_DW.DiscreteTimeIntegrator3_DSTATE <
               imperix_vf_kf_ctrl_P.DiscreteTimeIntegrator3_LowerSa) {
      imperix_vf_kf_ctrl_DW.DiscreteTimeIntegrator3_DSTATE =
        imperix_vf_kf_ctrl_P.DiscreteTimeIntegrator3_LowerSa;
    }
  }

  if (imperix_vf_kf_ctrl_B.SFunction > 0.0F) {
    imperix_vf_kf_ctrl_DW.DiscreteTimeIntegrator3_PrevRes = 1;
  } else if (imperix_vf_kf_ctrl_B.SFunction < 0.0F) {
    imperix_vf_kf_ctrl_DW.DiscreteTimeIntegrator3_PrevRes = -1;
  } else if (imperix_vf_kf_ctrl_B.SFunction == 0.0F) {
    imperix_vf_kf_ctrl_DW.DiscreteTimeIntegrator3_PrevRes = 0;
  } else {
    imperix_vf_kf_ctrl_DW.DiscreteTimeIntegrator3_PrevRes = 2;
  }

  // End of Update for DiscreteIntegrator: '<S1>/Discrete-Time Integrator3'
}

// Model initialize function
void imperix_vf_kf_ctrl_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  // Start for S-Function (TUNABLE_PARAM): '<S207>/S-Function'
  reset_I = 0.0F;                      // Tunable parameter initialization
  ConfigureTunable(&reset_I, 0, 0, 0.0F, 1.0F);

  // Start for S-Function (ADC): '<S64>/ADC'
  Adc_ConfigureInput(3, 0.0047937F, 0.0F, 0);
  Adc_GetPointer(3, 0, &ix_raw_adc_ptr_3_0);

  // Start for MATLABSystem: '<S48>/Moving Average'
  imperix_vf_kf_ctrl_DW.obj.isInitialized = 0;
  imperix_vf_kf_ctrl_DW.obj.NumChannels = -1;
  imperix_vf_kf_ctrl_DW.obj.FrameLength = -1;
  imperix_vf_kf_ctrl_DW.obj.matlabCodegenIsDeleted = false;
  imperix_vf_kf__SystemCore_setup(&imperix_vf_kf_ctrl_DW.obj);

  // Start for S-Function (TUNABLE_PARAM): '<S209>/S-Function'
  reset_mean = 0.0F;                   // Tunable parameter initialization
  ConfigureTunable(&reset_mean, 0, 0, 0.0F, 1.0F);

  // Start for S-Function (PROBE): '<S91>/S-Function'
  ConfigureProbe(&wm, 0);

  // Start for S-Function (ADC): '<S66>/ADC'
  Adc_ConfigureInput(7, 0.00030518F, 0.0F, 2);
  Adc_GetPointer(7, 2, &ix_raw_adc_ptr_7_2);

  // Start for S-Function (ADC): '<S68>/ADC'
  Adc_ConfigureInput(6, 0.00030518F, 0.0F, 2);
  Adc_GetPointer(6, 2, &ix_raw_adc_ptr_6_2);

  // Start for S-Function (ADC): '<S58>/ADC'
  Adc_ConfigureInput(5, 0.00030518F, 0.0F, 2);
  Adc_GetPointer(5, 2, &ix_raw_adc_ptr_5_2);

  // Start for S-Function (ADC): '<S70>/ADC'
  Adc_ConfigureInput(4, 0.00030518F, 0.0F, 2);
  Adc_GetPointer(4, 2, &ix_raw_adc_ptr_4_2);

  // Start for S-Function (ADC): '<S60>/ADC'
  Adc_ConfigureInput(3, 0.00030518F, 0.0F, 2);
  Adc_GetPointer(3, 2, &ix_raw_adc_ptr_3_2);

  // Start for S-Function (ADC): '<S62>/ADC'
  Adc_ConfigureInput(2, 0.00030518F, 0.0F, 2);
  Adc_GetPointer(2, 2, &ix_raw_adc_ptr_2_2);

  // Start for S-Function (PROBE): '<S93>/S-Function'
  ConfigureProbe(&im_alp, 0);

  // Start for S-Function (PROBE): '<S95>/S-Function'
  ConfigureProbe(&im_bet, 0);

  // Start for S-Function (PROBE): '<S97>/S-Function'
  ConfigureProbe(&is1, 0);

  // Start for S-Function (PROBE): '<S99>/S-Function'
  ConfigureProbe(&is2, 0);

  // Start for S-Function (TUNABLE_PARAM): '<S215>/S-Function'
  enable_KF = 0.0F;                    // Tunable parameter initialization
  ConfigureTunable(&enable_KF, 0, 0, 0.0F, 1.0F);

  // Start for S-Function (TUNABLE_PARAM): '<S217>/S-Function'
  reset_KF = 1.0F;                     // Tunable parameter initialization
  ConfigureTunable(&reset_KF, 0, 0, 0.0F, 1.0F);

  // Start for S-Function (PROBE): '<S101>/S-Function'
  ConfigureProbe(&im_bet_KF, 0);

  // Start for S-Function (PROBE): '<S103>/S-Function'
  ConfigureProbe(&im_alp_KF, 0);

  // Start for S-Function (PROBE): '<S105>/S-Function'
  ConfigureProbe(&Fr_bet, 0);

  // Start for S-Function (PROBE): '<S107>/S-Function'
  ConfigureProbe(&Fr_alp, 0);

  // Start for S-Function (PROBE): '<S109>/S-Function'
  ConfigureProbe(&Te_KF, 0);

  // Start for S-Function (PROBE): '<S111>/S-Function'
  ConfigureProbe(&D5, 0);

  // Start for S-Function (PROBE): '<S113>/S-Function'
  ConfigureProbe(&is3, 0);

  // Start for S-Function (PROBE): '<S115>/S-Function'
  ConfigureProbe(&D6, 0);

  // Start for S-Function (PROBE): '<S117>/S-Function'
  ConfigureProbe(&D1, 0);

  // Start for S-Function (PROBE): '<S119>/S-Function'
  ConfigureProbe(&D2, 0);

  // Start for S-Function (PROBE): '<S121>/S-Function'
  ConfigureProbe(&D3, 0);

  // Start for S-Function (PROBE): '<S123>/S-Function'
  ConfigureProbe(&D4, 0);

  // Start for S-Function (PROBE): '<S125>/S-Function'
  ConfigureProbe(&is4, 0);

  // Start for S-Function (PROBE): '<S127>/S-Function'
  ConfigureProbe(&is5, 0);

  // Start for S-Function (PROBE): '<S129>/S-Function'
  ConfigureProbe(&is6, 0);

  // Start for S-Function (PROBE): '<S131>/S-Function'
  ConfigureProbe(&iP, 0);

  // Start for S-Function (CLK): '<S72>/CLK1'
  Clock_SetFrequency((tClock) 1, 1500.0F);

  // Start for S-Function (TUNABLE_PARAM): '<S211>/S-Function'
  Vf_slope = 0.0F;                     // Tunable parameter initialization
  ConfigureTunable(&Vf_slope, 0, 0, 0.0F, 1.0F);

  // Start for S-Function (IRQ): '<S75>/S-Function' incorporates:
  //   Constant: '<S77>/clk_id'

  ConfigureMainInterrupt(SimulinkInterrupt, (tClock)
    imperix_vf_kf_ctrl_P.clk_id_Value_o, 0.5F, 0U);
  ConfigureReadTriggerDelayInNs(2000U);
  Adc_SetUserOversampling(0.0F);

  // Start for S-Function (CLK): '<S77>/CLK1'
  Clock_SetFrequency((tClock) 0, 6000.0F);

  // Start for S-Function (TUNABLE_PARAM): '<S213>/S-Function'
  enable_FP = 0.0F;                    // Tunable parameter initialization
  ConfigureTunable(&enable_FP, 0, 0, 0.0F, 1.0F);

  // Start for Atomic SubSystem: '<S136>/generation'

  // Start for S-Function (CB_PWM): '<S137>/PWM' incorporates:
  //   Constant: '<S72>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 2, (tClock)
                       imperix_vf_kf_ctrl_P.clk_id_Value, 1);
  CbPwm_ConfigureOutputMode((tPwmOutput) 2, (tPwmOutMode) 2, 1);
  CbPwm_ConfigureCarrier((tPwmOutput) 2, (tPwmCarrier) 0, 1);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 2, (tPwmRate) 1, 1);
  CbPwm_SetPhase((tPwmOutput) 2, 0.75F, 1);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 2, 1);
  CbPwm_SetDutyCycle((tPwmOutput) 2, 0.0F, 1);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 2, 1);
  CbPwm_Activate((tPwmOutput) 2, 1);

  // End of Start for SubSystem: '<S136>/generation'

  // Start for Atomic SubSystem: '<S138>/generation'

  // Start for S-Function (CB_PWM): '<S139>/PWM' incorporates:
  //   Constant: '<S72>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 6, (tClock)
                       imperix_vf_kf_ctrl_P.clk_id_Value, 1);
  CbPwm_ConfigureOutputMode((tPwmOutput) 6, (tPwmOutMode) 2, 1);
  CbPwm_ConfigureCarrier((tPwmOutput) 6, (tPwmCarrier) 0, 1);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 6, (tPwmRate) 1, 1);
  CbPwm_SetPhase((tPwmOutput) 6, 0.5F, 1);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 6, 1);
  CbPwm_SetDutyCycle((tPwmOutput) 6, 0.0F, 1);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 6, 1);
  CbPwm_Activate((tPwmOutput) 6, 1);

  // End of Start for SubSystem: '<S138>/generation'

  // Start for Atomic SubSystem: '<S140>/generation'

  // Start for S-Function (CB_PWM): '<S141>/PWM' incorporates:
  //   Constant: '<S72>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 3, (tClock)
                       imperix_vf_kf_ctrl_P.clk_id_Value, 1);
  CbPwm_ConfigureOutputMode((tPwmOutput) 3, (tPwmOutMode) 2, 1);
  CbPwm_ConfigureCarrier((tPwmOutput) 3, (tPwmCarrier) 0, 1);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 3, (tPwmRate) 1, 1);
  CbPwm_SetPhase((tPwmOutput) 3, 0.25F, 1);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 3, 1);
  CbPwm_SetDutyCycle((tPwmOutput) 3, 0.0F, 1);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 3, 1);
  CbPwm_Activate((tPwmOutput) 3, 1);

  // End of Start for SubSystem: '<S140>/generation'

  // Start for Atomic SubSystem: '<S142>/generation'

  // Start for S-Function (CB_PWM): '<S143>/PWM' incorporates:
  //   Constant: '<S72>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 7, (tClock)
                       imperix_vf_kf_ctrl_P.clk_id_Value, 1);
  CbPwm_ConfigureOutputMode((tPwmOutput) 7, (tPwmOutMode) 2, 1);
  CbPwm_ConfigureCarrier((tPwmOutput) 7, (tPwmCarrier) 0, 1);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 7, (tPwmRate) 1, 1);
  CbPwm_SetPhase((tPwmOutput) 7, 0.0F, 1);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 7, 1);
  CbPwm_SetDutyCycle((tPwmOutput) 7, 0.0F, 1);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 7, 1);
  CbPwm_Activate((tPwmOutput) 7, 1);

  // End of Start for SubSystem: '<S142>/generation'

  // Start for Atomic SubSystem: '<S148>/generation'

  // Start for S-Function (CB_PWM): '<S149>/PWM' incorporates:
  //   Constant: '<S72>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 0, (tClock)
                       imperix_vf_kf_ctrl_P.clk_id_Value, 0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 0, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 0, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 0, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 0, 0.75F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 0, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 0, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 0, 0);
  CbPwm_Activate((tPwmOutput) 0, 0);

  // End of Start for SubSystem: '<S148>/generation'

  // Start for Atomic SubSystem: '<S150>/generation'

  // Start for S-Function (CB_PWM): '<S151>/PWM' incorporates:
  //   Constant: '<S72>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 4, (tClock)
                       imperix_vf_kf_ctrl_P.clk_id_Value, 0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 4, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 4, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 4, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 4, 0.5F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 4, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 4, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 4, 0);
  CbPwm_Activate((tPwmOutput) 4, 0);

  // End of Start for SubSystem: '<S150>/generation'

  // Start for Atomic SubSystem: '<S152>/generation'

  // Start for S-Function (CB_PWM): '<S153>/PWM' incorporates:
  //   Constant: '<S72>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 1, (tClock)
                       imperix_vf_kf_ctrl_P.clk_id_Value, 0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 1, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 1, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 1, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 1, 0.25F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 1, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 1, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 1, 0);
  CbPwm_Activate((tPwmOutput) 1, 0);

  // End of Start for SubSystem: '<S152>/generation'

  // Start for Atomic SubSystem: '<S154>/generation'

  // Start for S-Function (CB_PWM): '<S155>/PWM' incorporates:
  //   Constant: '<S72>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 5, (tClock)
                       imperix_vf_kf_ctrl_P.clk_id_Value, 0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 5, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 5, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 5, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 5, 0.0F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 5, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 5, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 5, 0);
  CbPwm_Activate((tPwmOutput) 5, 0);

  // End of Start for SubSystem: '<S154>/generation'

  // Start for Atomic SubSystem: '<S161>/generation'

  // Start for S-Function (CB_PWM): '<S162>/PWM' incorporates:
  //   Constant: '<S72>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 2, (tClock)
                       imperix_vf_kf_ctrl_P.clk_id_Value, 0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 2, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 2, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 2, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 2, 0.75F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 2, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 2, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 2, 0);
  CbPwm_Activate((tPwmOutput) 2, 0);

  // End of Start for SubSystem: '<S161>/generation'

  // Start for Atomic SubSystem: '<S163>/generation'

  // Start for S-Function (CB_PWM): '<S164>/PWM' incorporates:
  //   Constant: '<S72>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 6, (tClock)
                       imperix_vf_kf_ctrl_P.clk_id_Value, 0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 6, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 6, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 6, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 6, 0.5F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 6, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 6, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 6, 0);
  CbPwm_Activate((tPwmOutput) 6, 0);

  // End of Start for SubSystem: '<S163>/generation'

  // Start for Atomic SubSystem: '<S165>/generation'

  // Start for S-Function (CB_PWM): '<S166>/PWM' incorporates:
  //   Constant: '<S72>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 3, (tClock)
                       imperix_vf_kf_ctrl_P.clk_id_Value, 0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 3, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 3, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 3, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 3, 0.25F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 3, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 3, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 3, 0);
  CbPwm_Activate((tPwmOutput) 3, 0);

  // End of Start for SubSystem: '<S165>/generation'

  // Start for Atomic SubSystem: '<S167>/generation'

  // Start for S-Function (CB_PWM): '<S168>/PWM' incorporates:
  //   Constant: '<S72>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 7, (tClock)
                       imperix_vf_kf_ctrl_P.clk_id_Value, 0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 7, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 7, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 7, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 7, 0.0F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 7, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 7, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 7, 0);
  CbPwm_Activate((tPwmOutput) 7, 0);

  // End of Start for SubSystem: '<S167>/generation'

  // Start for Atomic SubSystem: '<S173>/generation'

  // Start for S-Function (CB_PWM): '<S174>/PWM' incorporates:
  //   Constant: '<S72>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 8, (tClock)
                       imperix_vf_kf_ctrl_P.clk_id_Value, 0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 8, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 8, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 8, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 8, 0.75F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 8, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 8, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 8, 0);
  CbPwm_Activate((tPwmOutput) 8, 0);

  // End of Start for SubSystem: '<S173>/generation'

  // Start for Atomic SubSystem: '<S175>/generation'

  // Start for S-Function (CB_PWM): '<S176>/PWM' incorporates:
  //   Constant: '<S72>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 12, (tClock)
                       imperix_vf_kf_ctrl_P.clk_id_Value, 0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 12, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 12, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 12, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 12, 0.5F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 12, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 12, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 12, 0);
  CbPwm_Activate((tPwmOutput) 12, 0);

  // End of Start for SubSystem: '<S175>/generation'

  // Start for Atomic SubSystem: '<S177>/generation'

  // Start for S-Function (CB_PWM): '<S178>/PWM' incorporates:
  //   Constant: '<S72>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 9, (tClock)
                       imperix_vf_kf_ctrl_P.clk_id_Value, 0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 9, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 9, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 9, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 9, 0.25F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 9, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 9, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 9, 0);
  CbPwm_Activate((tPwmOutput) 9, 0);

  // End of Start for SubSystem: '<S177>/generation'

  // Start for Atomic SubSystem: '<S179>/generation'

  // Start for S-Function (CB_PWM): '<S180>/PWM' incorporates:
  //   Constant: '<S72>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 13, (tClock)
                       imperix_vf_kf_ctrl_P.clk_id_Value, 0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 13, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 13, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 13, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 13, 0.0F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 13, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 13, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 13, 0);
  CbPwm_Activate((tPwmOutput) 13, 0);

  // End of Start for SubSystem: '<S179>/generation'

  // Start for Atomic SubSystem: '<S185>/generation'

  // Start for S-Function (CB_PWM): '<S186>/PWM' incorporates:
  //   Constant: '<S72>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 10, (tClock)
                       imperix_vf_kf_ctrl_P.clk_id_Value, 0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 10, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 10, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 10, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 10, 0.75F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 10, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 10, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 10, 0);
  CbPwm_Activate((tPwmOutput) 10, 0);

  // End of Start for SubSystem: '<S185>/generation'

  // Start for Atomic SubSystem: '<S187>/generation'

  // Start for S-Function (CB_PWM): '<S188>/PWM' incorporates:
  //   Constant: '<S72>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 14, (tClock)
                       imperix_vf_kf_ctrl_P.clk_id_Value, 0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 14, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 14, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 14, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 14, 0.5F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 14, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 14, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 14, 0);
  CbPwm_Activate((tPwmOutput) 14, 0);

  // End of Start for SubSystem: '<S187>/generation'

  // Start for Atomic SubSystem: '<S189>/generation'

  // Start for S-Function (CB_PWM): '<S190>/PWM' incorporates:
  //   Constant: '<S72>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 11, (tClock)
                       imperix_vf_kf_ctrl_P.clk_id_Value, 0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 11, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 11, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 11, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 11, 0.25F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 11, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 11, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 11, 0);
  CbPwm_Activate((tPwmOutput) 11, 0);

  // End of Start for SubSystem: '<S189>/generation'

  // Start for Atomic SubSystem: '<S191>/generation'

  // Start for S-Function (CB_PWM): '<S192>/PWM' incorporates:
  //   Constant: '<S72>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 15, (tClock)
                       imperix_vf_kf_ctrl_P.clk_id_Value, 0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 15, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 15, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 15, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 15, 0.0F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 15, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 15, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 15, 0);
  CbPwm_Activate((tPwmOutput) 15, 0);

  // End of Start for SubSystem: '<S191>/generation'

  // Start for Atomic SubSystem: '<S198>/generation'

  // Start for S-Function (CB_PWM): '<S199>/PWM' incorporates:
  //   Constant: '<S72>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 0, (tClock)
                       imperix_vf_kf_ctrl_P.clk_id_Value, 1);
  CbPwm_ConfigureOutputMode((tPwmOutput) 0, (tPwmOutMode) 2, 1);
  CbPwm_ConfigureCarrier((tPwmOutput) 0, (tPwmCarrier) 0, 1);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 0, (tPwmRate) 1, 1);
  CbPwm_SetPhase((tPwmOutput) 0, 0.75F, 1);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 0, 1);
  CbPwm_SetDutyCycle((tPwmOutput) 0, 0.0F, 1);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 0, 1);
  CbPwm_Activate((tPwmOutput) 0, 1);

  // End of Start for SubSystem: '<S198>/generation'

  // Start for Atomic SubSystem: '<S200>/generation'

  // Start for S-Function (CB_PWM): '<S201>/PWM' incorporates:
  //   Constant: '<S72>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 4, (tClock)
                       imperix_vf_kf_ctrl_P.clk_id_Value, 1);
  CbPwm_ConfigureOutputMode((tPwmOutput) 4, (tPwmOutMode) 2, 1);
  CbPwm_ConfigureCarrier((tPwmOutput) 4, (tPwmCarrier) 0, 1);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 4, (tPwmRate) 1, 1);
  CbPwm_SetPhase((tPwmOutput) 4, 0.5F, 1);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 4, 1);
  CbPwm_SetDutyCycle((tPwmOutput) 4, 0.0F, 1);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 4, 1);
  CbPwm_Activate((tPwmOutput) 4, 1);

  // End of Start for SubSystem: '<S200>/generation'

  // Start for Atomic SubSystem: '<S202>/generation'

  // Start for S-Function (CB_PWM): '<S203>/PWM' incorporates:
  //   Constant: '<S72>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 1, (tClock)
                       imperix_vf_kf_ctrl_P.clk_id_Value, 1);
  CbPwm_ConfigureOutputMode((tPwmOutput) 1, (tPwmOutMode) 2, 1);
  CbPwm_ConfigureCarrier((tPwmOutput) 1, (tPwmCarrier) 0, 1);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 1, (tPwmRate) 1, 1);
  CbPwm_SetPhase((tPwmOutput) 1, 0.25F, 1);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 1, 1);
  CbPwm_SetDutyCycle((tPwmOutput) 1, 0.0F, 1);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 1, 1);
  CbPwm_Activate((tPwmOutput) 1, 1);

  // End of Start for SubSystem: '<S202>/generation'

  // Start for Atomic SubSystem: '<S204>/generation'

  // Start for S-Function (CB_PWM): '<S205>/PWM' incorporates:
  //   Constant: '<S72>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 5, (tClock)
                       imperix_vf_kf_ctrl_P.clk_id_Value, 1);
  CbPwm_ConfigureOutputMode((tPwmOutput) 5, (tPwmOutMode) 2, 1);
  CbPwm_ConfigureCarrier((tPwmOutput) 5, (tPwmCarrier) 0, 1);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 5, (tPwmRate) 1, 1);
  CbPwm_SetPhase((tPwmOutput) 5, 0.0F, 1);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 5, 1);
  CbPwm_SetDutyCycle((tPwmOutput) 5, 0.0F, 1);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 5, 1);
  CbPwm_Activate((tPwmOutput) 5, 1);

  // End of Start for SubSystem: '<S204>/generation'
  imperix_vf_kf_ctrl_PrevZCX.SampleandHold_Trig_ZCE = UNINITIALIZED_ZCSIG;

  // InitializeConditions for DiscreteIntegrator: '<S1>/Discrete-Time Integrator2' 
  imperix_vf_kf_ctrl_DW.DiscreteTimeIntegrator2_DSTATE =
    imperix_vf_kf_ctrl_P.DiscreteTimeIntegrator2_IC;

  // InitializeConditions for DiscreteIntegrator: '<S1>/Discrete-Time Integrator1' 
  imperix_vf_kf_ctrl_DW.DiscreteTimeIntegrator1_DSTATE =
    imperix_vf_kf_ctrl_P.DiscreteTimeIntegrator1_IC;

  // InitializeConditions for DiscreteIntegrator: '<S1>/Discrete-Time Integrator3' 
  imperix_vf_kf_ctrl_DW.DiscreteTimeIntegrator3_DSTATE =
    imperix_vf_kf_ctrl_P.DiscreteTimeIntegrator3_IC;

  // SystemInitialize for Triggered SubSystem: '<S48>/Sample and Hold'
  // SystemInitialize for SignalConversion generated from: '<S193>/In' incorporates:
  //   Outport: '<S193>/ '

  imperix_vf_kf_ctrl_B.In = imperix_vf_kf_ctrl_P._Y0;

  // End of SystemInitialize for SubSystem: '<S48>/Sample and Hold'

  // SystemInitialize for MATLAB Function: '<S1>/Kalman Filter'
  memset(&imperix_vf_kf_ctrl_DW.Inx[0], 0, sizeof(real_T) << 4U);
  imperix_vf_kf_ctrl_DW.Inx[0] = 1.0;
  imperix_vf_kf_ctrl_DW.Inx[5] = 1.0;
  imperix_vf_kf_ctrl_DW.Inx[10] = 1.0;
  imperix_vf_kf_ctrl_DW.Inx[15] = 1.0;

  // InitializeConditions for MATLABSystem: '<S48>/Moving Average'
  imperix_vf_kf_ctrl_DW.obj.pCumSum = 0.0;
  memset(&imperix_vf_kf_ctrl_DW.obj.pCumSumRev[0], 0, 99U * sizeof(real_T));
  imperix_vf_kf_ctrl_DW.obj.pCumRevIndex = 1.0;
  imperix_vf_kf_ctrl_DW.obj.pModValueRev = 0.0;
}

// Model terminate function
void imperix_vf_kf_ctrl_terminate(void)
{
  // Terminate for MATLABSystem: '<S48>/Moving Average'
  if (!imperix_vf_kf_ctrl_DW.obj.matlabCodegenIsDeleted) {
    imperix_vf_kf_ctrl_DW.obj.matlabCodegenIsDeleted = true;
    if ((imperix_vf_kf_ctrl_DW.obj.isInitialized == 1) &&
        imperix_vf_kf_ctrl_DW.obj.isSetupComplete) {
      imperix_vf_kf_ctrl_DW.obj.NumChannels = -1;
      imperix_vf_kf_ctrl_DW.obj.FrameLength = -1;
    }
  }

  // End of Terminate for MATLABSystem: '<S48>/Moving Average'
}

const char_T* RT_MODEL_imperix_vf_kf_ctrl_T::getErrorStatus() const
{
  return (errorStatus);
}

void RT_MODEL_imperix_vf_kf_ctrl_T::setErrorStatus(const char_T* const volatile
  aErrorStatus)
{
  (errorStatus = aErrorStatus);
}

//
// End of automatically generated code
// Copyright imperix ltd. Switzerland 2021
// [EOF]
//
