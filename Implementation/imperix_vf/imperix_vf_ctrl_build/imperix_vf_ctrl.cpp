//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: imperix_vf_ctrl.cpp
//
// Code generated for Simulink model 'imperix_vf_ctrl'.
// To be implemented on the B-Box RCP or the B-Board PRO.
//
// Model version                  : 19.85
// Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
// C/C++ source code generated on : Mon Feb  2 19:19:24 2026
//
#include "imperix_vf_ctrl.h"
#include <math.h>
#include "rtwtypes.h"
#include "imperix_vf_ctrl_private.h"

int16_T* ix_raw_adc_ptr_3_0;
real32_T wm;                           // Probe
int16_T* ix_raw_adc_ptr_7_2;
int16_T* ix_raw_adc_ptr_6_2;
int16_T* ix_raw_adc_ptr_5_2;
int16_T* ix_raw_adc_ptr_4_2;
int16_T* ix_raw_adc_ptr_3_2;
int16_T* ix_raw_adc_ptr_2_2;
real32_T is1;                          // Probe
real32_T is2;                          // Probe
real32_T is3;                          // Probe
real32_T is4;                          // Probe
real32_T is5;                          // Probe
real32_T is6;                          // Probe
unsigned char __attribute__ ((section ("devicescount"))) __attribute__((used))
  ____DEVICES_COUNT = (2U+1);
real32_T V_mag;                        // Tunable parameter
real32_T D5;                           // Probe
real32_T D6;                           // Probe
real32_T D1;                           // Probe
real32_T D2;                           // Probe
real32_T D3;                           // Probe
real32_T D4;                           // Probe
real32_T f_mag;                        // Tunable parameter
real32_T enable_FP;                    // Tunable parameter

// Block signals (default storage)
B_imperix_vf_ctrl_T imperix_vf_ctrl_B;

// Block states (default storage)
DW_imperix_vf_ctrl_T imperix_vf_ctrl_DW;

// Real-time model
RT_MODEL_imperix_vf_ctrl_T imperix_vf_ctrl_M_ = RT_MODEL_imperix_vf_ctrl_T();
RT_MODEL_imperix_vf_ctrl_T *const imperix_vf_ctrl_M = &imperix_vf_ctrl_M_;

// Model step function
void imperix_vf_ctrl_step(void)
{
  real_T rtb_Gain1[6];
  real_T rtb_Gain1_0;
  int32_T k;
  real32_T rtb_Bias1;
  real32_T rtb_Product2_idx_0;
  real32_T rtb_Product2_idx_1;

  // S-Function (ADC): '<S42>/ADC'
  imperix_vf_ctrl_B.ADC = (float)(*ix_raw_adc_ptr_3_0) * 0.0047937F + 0.0F;

  // DataTypeConversion: '<S57>/Data Type Conversion' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion36'
  //   Gain: '<S1>/Gain8'

  imperix_vf_ctrl_B.DataTypeConversion = static_cast<real32_T>(1.0 /
    imperix_vf_ctrl_P.IM.wN * imperix_vf_ctrl_B.ADC);

  // S-Function (PROBE): '<S57>/S-Function'
  wm = imperix_vf_ctrl_B.DataTypeConversion;

  // S-Function (ADC): '<S44>/ADC'
  imperix_vf_ctrl_B.ADC_f = (float)(*ix_raw_adc_ptr_7_2) * 0.00030518F + 0.0F;

  // S-Function (ADC): '<S46>/ADC'
  imperix_vf_ctrl_B.ADC_e = (float)(*ix_raw_adc_ptr_6_2) * 0.00030518F + 0.0F;

  // S-Function (ADC): '<S36>/ADC'
  imperix_vf_ctrl_B.ADC_i = (float)(*ix_raw_adc_ptr_5_2) * 0.00030518F + 0.0F;

  // S-Function (ADC): '<S48>/ADC'
  imperix_vf_ctrl_B.ADC_d = (float)(*ix_raw_adc_ptr_4_2) * 0.00030518F + 0.0F;

  // S-Function (ADC): '<S38>/ADC'
  imperix_vf_ctrl_B.ADC_ib = (float)(*ix_raw_adc_ptr_3_2) * 0.00030518F + 0.0F;

  // S-Function (ADC): '<S40>/ADC'
  imperix_vf_ctrl_B.ADC_p = (float)(*ix_raw_adc_ptr_2_2) * 0.00030518F + 0.0F;

  // Gain: '<S1>/Gain1'
  rtb_Gain1_0 = 1.0 / imperix_vf_ctrl_P.M2C.is_max;

  // DataTypeConversion: '<S59>/Data Type Conversion' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion2'
  //   Gain: '<S1>/Gain1'

  imperix_vf_ctrl_B.DataTypeConversion_i = static_cast<real32_T>(rtb_Gain1_0 *
    imperix_vf_ctrl_B.ADC_f);

  // S-Function (PROBE): '<S59>/S-Function'
  is1 = imperix_vf_ctrl_B.DataTypeConversion_i;

  // DataTypeConversion: '<S61>/Data Type Conversion' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion2'
  //   Gain: '<S1>/Gain1'

  imperix_vf_ctrl_B.DataTypeConversion_p = static_cast<real32_T>(rtb_Gain1_0 *
    imperix_vf_ctrl_B.ADC_e);

  // S-Function (PROBE): '<S61>/S-Function'
  is2 = imperix_vf_ctrl_B.DataTypeConversion_p;

  // DataTypeConversion: '<S65>/Data Type Conversion' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion2'
  //   Gain: '<S1>/Gain1'

  imperix_vf_ctrl_B.DataTypeConversion_f = static_cast<real32_T>(rtb_Gain1_0 *
    imperix_vf_ctrl_B.ADC_i);

  // S-Function (PROBE): '<S65>/S-Function'
  is3 = imperix_vf_ctrl_B.DataTypeConversion_f;

  // DataTypeConversion: '<S77>/Data Type Conversion' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion2'
  //   Gain: '<S1>/Gain1'

  imperix_vf_ctrl_B.DataTypeConversion_fs = static_cast<real32_T>(rtb_Gain1_0 *
    imperix_vf_ctrl_B.ADC_d);

  // S-Function (PROBE): '<S77>/S-Function'
  is4 = imperix_vf_ctrl_B.DataTypeConversion_fs;

  // DataTypeConversion: '<S79>/Data Type Conversion' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion2'
  //   Gain: '<S1>/Gain1'

  imperix_vf_ctrl_B.DataTypeConversion_b = static_cast<real32_T>(rtb_Gain1_0 *
    imperix_vf_ctrl_B.ADC_ib);

  // S-Function (PROBE): '<S79>/S-Function'
  is5 = imperix_vf_ctrl_B.DataTypeConversion_b;

  // DataTypeConversion: '<S81>/Data Type Conversion' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion2'
  //   Gain: '<S1>/Gain1'

  imperix_vf_ctrl_B.DataTypeConversion_fz = static_cast<real32_T>(rtb_Gain1_0 *
    imperix_vf_ctrl_B.ADC_p);

  // S-Function (PROBE): '<S81>/S-Function'
  is6 = imperix_vf_ctrl_B.DataTypeConversion_fz;

  // S-Function (TUNABLE_PARAM): '<S157>/S-Function'
  imperix_vf_ctrl_B.SFunction = V_mag;

  // Bias: '<S1>/Bias1' incorporates:
  //   Gain: '<S1>/Gain23'

  rtb_Bias1 = imperix_vf_ctrl_P.Gain23_Gain * imperix_vf_ctrl_B.SFunction +
    imperix_vf_ctrl_P.Bias1_Bias;

  // Product: '<S1>/Product2' incorporates:
  //   DiscreteIntegrator: '<S1>/Discrete-Time Integrator1'
  //   Fcn: '<S1>/Fcn3'
  //   Fcn: '<S1>/Fcn4'
  //   Fcn: '<S1>/Fcn5'

  rtb_Product2_idx_0 = rtb_Bias1 * static_cast<real32_T>(cos(static_cast<real_T>
    (imperix_vf_ctrl_DW.DiscreteTimeIntegrator1_DSTATE)));
  rtb_Product2_idx_1 = static_cast<real32_T>(cos(static_cast<real_T>
    (imperix_vf_ctrl_DW.DiscreteTimeIntegrator1_DSTATE - 2.09439516F))) *
    rtb_Bias1;
  rtb_Bias1 *= static_cast<real32_T>(cos(static_cast<real_T>
    (imperix_vf_ctrl_DW.DiscreteTimeIntegrator1_DSTATE + 2.09439516F)));

  // Sum: '<S1>/Sum1' incorporates:
  //   Constant: '<S1>/Constant3'

  // MATLAB Function 'Closed_loop_control/Modulation index': '<S12>:1'
  // '<S12>:1:4'
  rtb_Gain1[0] = imperix_vf_ctrl_P.Constant3_Value - rtb_Product2_idx_0;

  // MATLAB Function: '<S1>/Modulation index' incorporates:
  //   Constant: '<S1>/Constant3'
  //   Sum: '<S1>/Sum1'
  //   Sum: '<S1>/Sum2'

  rtb_Gain1[3] = -((0.0 - imperix_vf_ctrl_P.Constant3_Value) -
                   rtb_Product2_idx_0);

  // Sum: '<S1>/Sum1' incorporates:
  //   Constant: '<S1>/Constant3'

  rtb_Gain1[1] = imperix_vf_ctrl_P.Constant3_Value - rtb_Product2_idx_1;

  // MATLAB Function: '<S1>/Modulation index' incorporates:
  //   Constant: '<S1>/Constant3'
  //   Sum: '<S1>/Sum1'
  //   Sum: '<S1>/Sum2'

  rtb_Gain1[4] = -((0.0 - imperix_vf_ctrl_P.Constant3_Value) -
                   rtb_Product2_idx_1);

  // Sum: '<S1>/Sum1' incorporates:
  //   Constant: '<S1>/Constant3'

  rtb_Gain1[2] = imperix_vf_ctrl_P.Constant3_Value - rtb_Bias1;

  // MATLAB Function: '<S1>/Modulation index' incorporates:
  //   Constant: '<S1>/Constant3'
  //   Sum: '<S1>/Sum1'
  //   Sum: '<S1>/Sum2'

  rtb_Gain1[5] = -((0.0 - imperix_vf_ctrl_P.Constant3_Value) - rtb_Bias1);

  // '<S12>:1:8'
  for (k = 0; k < 6; k++) {
    rtb_Gain1_0 = rtb_Gain1[k] / 520.0;
    if (!(rtb_Gain1_0 >= 0.0)) {
      rtb_Gain1_0 = 0.0;
    }

    if (rtb_Gain1_0 <= 1.0) {
      rtb_Gain1[k] = rtb_Gain1_0;
    } else {
      rtb_Gain1[k] = 1.0;
    }
  }

  // DataTypeConversion: '<S63>/Data Type Conversion'
  imperix_vf_ctrl_B.DataTypeConversion_g = static_cast<real32_T>(rtb_Gain1[4]);

  // S-Function (PROBE): '<S63>/S-Function'
  D5 = imperix_vf_ctrl_B.DataTypeConversion_g;

  // DataTypeConversion: '<S67>/Data Type Conversion'
  imperix_vf_ctrl_B.DataTypeConversion_bk = static_cast<real32_T>(rtb_Gain1[5]);

  // S-Function (PROBE): '<S67>/S-Function'
  D6 = imperix_vf_ctrl_B.DataTypeConversion_bk;

  // DataTypeConversion: '<S69>/Data Type Conversion'
  imperix_vf_ctrl_B.DataTypeConversion_gl = static_cast<real32_T>(rtb_Gain1[0]);

  // S-Function (PROBE): '<S69>/S-Function'
  D1 = imperix_vf_ctrl_B.DataTypeConversion_gl;

  // DataTypeConversion: '<S71>/Data Type Conversion'
  imperix_vf_ctrl_B.DataTypeConversion_f2 = static_cast<real32_T>(rtb_Gain1[1]);

  // S-Function (PROBE): '<S71>/S-Function'
  D2 = imperix_vf_ctrl_B.DataTypeConversion_f2;

  // DataTypeConversion: '<S73>/Data Type Conversion'
  imperix_vf_ctrl_B.DataTypeConversion_h = static_cast<real32_T>(rtb_Gain1[2]);

  // S-Function (PROBE): '<S73>/S-Function'
  D3 = imperix_vf_ctrl_B.DataTypeConversion_h;

  // DataTypeConversion: '<S75>/Data Type Conversion'
  imperix_vf_ctrl_B.DataTypeConversion_gx = static_cast<real32_T>(rtb_Gain1[3]);

  // S-Function (PROBE): '<S75>/S-Function'
  D4 = imperix_vf_ctrl_B.DataTypeConversion_gx;

  // Saturate: '<S50>/Saturation'
  if (imperix_vf_ctrl_P.Saturation_UpperSat < 0.0F) {
    // Saturate: '<S50>/Saturation'
    imperix_vf_ctrl_B.Saturation = imperix_vf_ctrl_P.Saturation_UpperSat;
  } else if (imperix_vf_ctrl_P.Saturation_LowerSat > 0.0F) {
    // Saturate: '<S50>/Saturation'
    imperix_vf_ctrl_B.Saturation = imperix_vf_ctrl_P.Saturation_LowerSat;
  } else {
    // Saturate: '<S50>/Saturation'
    imperix_vf_ctrl_B.Saturation = 0.0F;
  }

  // End of Saturate: '<S50>/Saturation'
  // S-Function (TUNABLE_PARAM): '<S155>/S-Function'
  imperix_vf_ctrl_B.SFunction_e = f_mag;

  // DataTypeConversion: '<S82>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S71>/Data Type Conversion'

  imperix_vf_ctrl_B.DataTypeConversion1 = static_cast<real32_T>(rtb_Gain1[1]);

  // DataTypeConversion: '<S82>/Data Type Conversion2' incorporates:
  //   Constant: '<S82>/phase'

  imperix_vf_ctrl_B.DataTypeConversion2 = static_cast<real32_T>
    (imperix_vf_ctrl_P.phase_Value);

  // S-Function (TUNABLE_PARAM): '<S159>/S-Function'
  imperix_vf_ctrl_B.SFunction_c = enable_FP;

  // Outputs for Atomic SubSystem: '<S86>/generation'
  // S-Function (CB_PWM): '<S87>/PWM' incorporates:
  //   Constant: '<S50>/clk_id'

  if (imperix_vf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 2, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 2, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 2, imperix_vf_ctrl_B.DataTypeConversion1, 1);

  // End of Outputs for SubSystem: '<S86>/generation'

  // DataTypeConversion: '<S83>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S71>/Data Type Conversion'

  imperix_vf_ctrl_B.DataTypeConversion1_p = static_cast<real32_T>(rtb_Gain1[1]);

  // DataTypeConversion: '<S83>/Data Type Conversion2' incorporates:
  //   Constant: '<S83>/phase'

  imperix_vf_ctrl_B.DataTypeConversion2_i = static_cast<real32_T>
    (imperix_vf_ctrl_P.phase_Value_o);

  // Outputs for Atomic SubSystem: '<S88>/generation'
  // S-Function (CB_PWM): '<S89>/PWM' incorporates:
  //   Constant: '<S50>/clk_id'

  if (imperix_vf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 6, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 6, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 6, imperix_vf_ctrl_B.DataTypeConversion1_p, 1);

  // End of Outputs for SubSystem: '<S88>/generation'

  // DataTypeConversion: '<S84>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S71>/Data Type Conversion'

  imperix_vf_ctrl_B.DataTypeConversion1_h = static_cast<real32_T>(rtb_Gain1[1]);

  // DataTypeConversion: '<S84>/Data Type Conversion2' incorporates:
  //   Constant: '<S84>/phase'

  imperix_vf_ctrl_B.DataTypeConversion2_b = static_cast<real32_T>
    (imperix_vf_ctrl_P.phase_Value_l);

  // Outputs for Atomic SubSystem: '<S90>/generation'
  // S-Function (CB_PWM): '<S91>/PWM' incorporates:
  //   Constant: '<S50>/clk_id'

  if (imperix_vf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 3, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 3, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 3, imperix_vf_ctrl_B.DataTypeConversion1_h, 1);

  // End of Outputs for SubSystem: '<S90>/generation'

  // DataTypeConversion: '<S85>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S71>/Data Type Conversion'

  imperix_vf_ctrl_B.DataTypeConversion1_f = static_cast<real32_T>(rtb_Gain1[1]);

  // DataTypeConversion: '<S85>/Data Type Conversion2' incorporates:
  //   Constant: '<S85>/phase'

  imperix_vf_ctrl_B.DataTypeConversion2_p = static_cast<real32_T>
    (imperix_vf_ctrl_P.phase_Value_oo);

  // Outputs for Atomic SubSystem: '<S92>/generation'
  // S-Function (CB_PWM): '<S93>/PWM' incorporates:
  //   Constant: '<S50>/clk_id'

  if (imperix_vf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 7, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 7, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 7, imperix_vf_ctrl_B.DataTypeConversion1_f, 1);

  // End of Outputs for SubSystem: '<S92>/generation'

  // DataTypeConversion: '<S94>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S73>/Data Type Conversion'

  imperix_vf_ctrl_B.DataTypeConversion1_b = static_cast<real32_T>(rtb_Gain1[2]);

  // DataTypeConversion: '<S94>/Data Type Conversion2' incorporates:
  //   Constant: '<S94>/phase'

  imperix_vf_ctrl_B.DataTypeConversion2_d = static_cast<real32_T>
    (imperix_vf_ctrl_P.phase_Value_p);

  // Outputs for Atomic SubSystem: '<S98>/generation'
  // S-Function (CB_PWM): '<S99>/PWM' incorporates:
  //   Constant: '<S50>/clk_id'

  if (imperix_vf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 0, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 0, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 0, imperix_vf_ctrl_B.DataTypeConversion1_b, 0);

  // End of Outputs for SubSystem: '<S98>/generation'

  // DataTypeConversion: '<S95>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S73>/Data Type Conversion'

  imperix_vf_ctrl_B.DataTypeConversion1_e = static_cast<real32_T>(rtb_Gain1[2]);

  // DataTypeConversion: '<S95>/Data Type Conversion2' incorporates:
  //   Constant: '<S95>/phase'

  imperix_vf_ctrl_B.DataTypeConversion2_o = static_cast<real32_T>
    (imperix_vf_ctrl_P.phase_Value_pr);

  // Outputs for Atomic SubSystem: '<S100>/generation'
  // S-Function (CB_PWM): '<S101>/PWM' incorporates:
  //   Constant: '<S50>/clk_id'

  if (imperix_vf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 4, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 4, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 4, imperix_vf_ctrl_B.DataTypeConversion1_e, 0);

  // End of Outputs for SubSystem: '<S100>/generation'

  // DataTypeConversion: '<S96>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S73>/Data Type Conversion'

  imperix_vf_ctrl_B.DataTypeConversion1_po = static_cast<real32_T>(rtb_Gain1[2]);

  // DataTypeConversion: '<S96>/Data Type Conversion2' incorporates:
  //   Constant: '<S96>/phase'

  imperix_vf_ctrl_B.DataTypeConversion2_g = static_cast<real32_T>
    (imperix_vf_ctrl_P.phase_Value_c);

  // Outputs for Atomic SubSystem: '<S102>/generation'
  // S-Function (CB_PWM): '<S103>/PWM' incorporates:
  //   Constant: '<S50>/clk_id'

  if (imperix_vf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 1, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 1, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 1, imperix_vf_ctrl_B.DataTypeConversion1_po, 0);

  // End of Outputs for SubSystem: '<S102>/generation'

  // DataTypeConversion: '<S97>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S73>/Data Type Conversion'

  imperix_vf_ctrl_B.DataTypeConversion1_c = static_cast<real32_T>(rtb_Gain1[2]);

  // DataTypeConversion: '<S97>/Data Type Conversion2' incorporates:
  //   Constant: '<S97>/phase'

  imperix_vf_ctrl_B.DataTypeConversion2_k = static_cast<real32_T>
    (imperix_vf_ctrl_P.phase_Value_ll);

  // Outputs for Atomic SubSystem: '<S104>/generation'
  // S-Function (CB_PWM): '<S105>/PWM' incorporates:
  //   Constant: '<S50>/clk_id'

  if (imperix_vf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 5, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 5, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 5, imperix_vf_ctrl_B.DataTypeConversion1_c, 0);

  // End of Outputs for SubSystem: '<S104>/generation'

  // DataTypeConversion: '<S106>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S75>/Data Type Conversion'

  imperix_vf_ctrl_B.DataTypeConversion1_h3 = static_cast<real32_T>(rtb_Gain1[3]);

  // DataTypeConversion: '<S106>/Data Type Conversion2' incorporates:
  //   Constant: '<S106>/phase'

  imperix_vf_ctrl_B.DataTypeConversion2_bv = static_cast<real32_T>
    (imperix_vf_ctrl_P.phase_Value_n);

  // Outputs for Atomic SubSystem: '<S110>/generation'
  // S-Function (CB_PWM): '<S111>/PWM' incorporates:
  //   Constant: '<S50>/clk_id'

  if (imperix_vf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 2, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 2, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 2, imperix_vf_ctrl_B.DataTypeConversion1_h3, 0);

  // End of Outputs for SubSystem: '<S110>/generation'

  // DataTypeConversion: '<S107>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S75>/Data Type Conversion'

  imperix_vf_ctrl_B.DataTypeConversion1_m = static_cast<real32_T>(rtb_Gain1[3]);

  // DataTypeConversion: '<S107>/Data Type Conversion2' incorporates:
  //   Constant: '<S107>/phase'

  imperix_vf_ctrl_B.DataTypeConversion2_j = static_cast<real32_T>
    (imperix_vf_ctrl_P.phase_Value_k);

  // Outputs for Atomic SubSystem: '<S112>/generation'
  // S-Function (CB_PWM): '<S113>/PWM' incorporates:
  //   Constant: '<S50>/clk_id'

  if (imperix_vf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 6, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 6, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 6, imperix_vf_ctrl_B.DataTypeConversion1_m, 0);

  // End of Outputs for SubSystem: '<S112>/generation'

  // DataTypeConversion: '<S108>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S75>/Data Type Conversion'

  imperix_vf_ctrl_B.DataTypeConversion1_fz = static_cast<real32_T>(rtb_Gain1[3]);

  // DataTypeConversion: '<S108>/Data Type Conversion2' incorporates:
  //   Constant: '<S108>/phase'

  imperix_vf_ctrl_B.DataTypeConversion2_a = static_cast<real32_T>
    (imperix_vf_ctrl_P.phase_Value_py);

  // Outputs for Atomic SubSystem: '<S114>/generation'
  // S-Function (CB_PWM): '<S115>/PWM' incorporates:
  //   Constant: '<S50>/clk_id'

  if (imperix_vf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 3, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 3, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 3, imperix_vf_ctrl_B.DataTypeConversion1_fz, 0);

  // End of Outputs for SubSystem: '<S114>/generation'

  // DataTypeConversion: '<S109>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S75>/Data Type Conversion'

  imperix_vf_ctrl_B.DataTypeConversion1_i = static_cast<real32_T>(rtb_Gain1[3]);

  // DataTypeConversion: '<S109>/Data Type Conversion2' incorporates:
  //   Constant: '<S109>/phase'

  imperix_vf_ctrl_B.DataTypeConversion2_f = static_cast<real32_T>
    (imperix_vf_ctrl_P.phase_Value_ng);

  // Outputs for Atomic SubSystem: '<S116>/generation'
  // S-Function (CB_PWM): '<S117>/PWM' incorporates:
  //   Constant: '<S50>/clk_id'

  if (imperix_vf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 7, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 7, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 7, imperix_vf_ctrl_B.DataTypeConversion1_i, 0);

  // End of Outputs for SubSystem: '<S116>/generation'

  // DataTypeConversion: '<S118>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S63>/Data Type Conversion'

  imperix_vf_ctrl_B.DataTypeConversion1_a = static_cast<real32_T>(rtb_Gain1[4]);

  // DataTypeConversion: '<S118>/Data Type Conversion2' incorporates:
  //   Constant: '<S118>/phase'

  imperix_vf_ctrl_B.DataTypeConversion2_dx = static_cast<real32_T>
    (imperix_vf_ctrl_P.phase_Value_j);

  // Outputs for Atomic SubSystem: '<S122>/generation'
  // S-Function (CB_PWM): '<S123>/PWM' incorporates:
  //   Constant: '<S50>/clk_id'

  if (imperix_vf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 8, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 8, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 8, imperix_vf_ctrl_B.DataTypeConversion1_a, 0);

  // End of Outputs for SubSystem: '<S122>/generation'

  // DataTypeConversion: '<S119>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S63>/Data Type Conversion'

  imperix_vf_ctrl_B.DataTypeConversion1_k = static_cast<real32_T>(rtb_Gain1[4]);

  // DataTypeConversion: '<S119>/Data Type Conversion2' incorporates:
  //   Constant: '<S119>/phase'

  imperix_vf_ctrl_B.DataTypeConversion2_dm = static_cast<real32_T>
    (imperix_vf_ctrl_P.phase_Value_of);

  // Outputs for Atomic SubSystem: '<S124>/generation'
  // S-Function (CB_PWM): '<S125>/PWM' incorporates:
  //   Constant: '<S50>/clk_id'

  if (imperix_vf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 12, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 12, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 12, imperix_vf_ctrl_B.DataTypeConversion1_k, 0);

  // End of Outputs for SubSystem: '<S124>/generation'

  // DataTypeConversion: '<S120>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S63>/Data Type Conversion'

  imperix_vf_ctrl_B.DataTypeConversion1_l = static_cast<real32_T>(rtb_Gain1[4]);

  // DataTypeConversion: '<S120>/Data Type Conversion2' incorporates:
  //   Constant: '<S120>/phase'

  imperix_vf_ctrl_B.DataTypeConversion2_n = static_cast<real32_T>
    (imperix_vf_ctrl_P.phase_Value_h);

  // Outputs for Atomic SubSystem: '<S126>/generation'
  // S-Function (CB_PWM): '<S127>/PWM' incorporates:
  //   Constant: '<S50>/clk_id'

  if (imperix_vf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 9, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 9, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 9, imperix_vf_ctrl_B.DataTypeConversion1_l, 0);

  // End of Outputs for SubSystem: '<S126>/generation'

  // DataTypeConversion: '<S121>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S63>/Data Type Conversion'

  imperix_vf_ctrl_B.DataTypeConversion1_bg = static_cast<real32_T>(rtb_Gain1[4]);

  // DataTypeConversion: '<S121>/Data Type Conversion2' incorporates:
  //   Constant: '<S121>/phase'

  imperix_vf_ctrl_B.DataTypeConversion2_nx = static_cast<real32_T>
    (imperix_vf_ctrl_P.phase_Value_nc);

  // Outputs for Atomic SubSystem: '<S128>/generation'
  // S-Function (CB_PWM): '<S129>/PWM' incorporates:
  //   Constant: '<S50>/clk_id'

  if (imperix_vf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 13, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 13, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 13, imperix_vf_ctrl_B.DataTypeConversion1_bg,
                     0);

  // End of Outputs for SubSystem: '<S128>/generation'

  // DataTypeConversion: '<S130>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S67>/Data Type Conversion'

  imperix_vf_ctrl_B.DataTypeConversion1_d = static_cast<real32_T>(rtb_Gain1[5]);

  // DataTypeConversion: '<S130>/Data Type Conversion2' incorporates:
  //   Constant: '<S130>/phase'

  imperix_vf_ctrl_B.DataTypeConversion2_pe = static_cast<real32_T>
    (imperix_vf_ctrl_P.phase_Value_f);

  // Outputs for Atomic SubSystem: '<S134>/generation'
  // S-Function (CB_PWM): '<S135>/PWM' incorporates:
  //   Constant: '<S50>/clk_id'

  if (imperix_vf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 10, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 10, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 10, imperix_vf_ctrl_B.DataTypeConversion1_d, 0);

  // End of Outputs for SubSystem: '<S134>/generation'

  // DataTypeConversion: '<S131>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S67>/Data Type Conversion'

  imperix_vf_ctrl_B.DataTypeConversion1_o = static_cast<real32_T>(rtb_Gain1[5]);

  // DataTypeConversion: '<S131>/Data Type Conversion2' incorporates:
  //   Constant: '<S131>/phase'

  imperix_vf_ctrl_B.DataTypeConversion2_n0 = static_cast<real32_T>
    (imperix_vf_ctrl_P.phase_Value_i);

  // Outputs for Atomic SubSystem: '<S136>/generation'
  // S-Function (CB_PWM): '<S137>/PWM' incorporates:
  //   Constant: '<S50>/clk_id'

  if (imperix_vf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 14, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 14, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 14, imperix_vf_ctrl_B.DataTypeConversion1_o, 0);

  // End of Outputs for SubSystem: '<S136>/generation'

  // DataTypeConversion: '<S132>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S67>/Data Type Conversion'

  imperix_vf_ctrl_B.DataTypeConversion1_ay = static_cast<real32_T>(rtb_Gain1[5]);

  // DataTypeConversion: '<S132>/Data Type Conversion2' incorporates:
  //   Constant: '<S132>/phase'

  imperix_vf_ctrl_B.DataTypeConversion2_gl = static_cast<real32_T>
    (imperix_vf_ctrl_P.phase_Value_a);

  // Outputs for Atomic SubSystem: '<S138>/generation'
  // S-Function (CB_PWM): '<S139>/PWM' incorporates:
  //   Constant: '<S50>/clk_id'

  if (imperix_vf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 11, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 11, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 11, imperix_vf_ctrl_B.DataTypeConversion1_ay,
                     0);

  // End of Outputs for SubSystem: '<S138>/generation'

  // DataTypeConversion: '<S133>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S67>/Data Type Conversion'

  imperix_vf_ctrl_B.DataTypeConversion1_pf = static_cast<real32_T>(rtb_Gain1[5]);

  // DataTypeConversion: '<S133>/Data Type Conversion2' incorporates:
  //   Constant: '<S133>/phase'

  imperix_vf_ctrl_B.DataTypeConversion2_by = static_cast<real32_T>
    (imperix_vf_ctrl_P.phase_Value_ns);

  // Outputs for Atomic SubSystem: '<S140>/generation'
  // S-Function (CB_PWM): '<S141>/PWM' incorporates:
  //   Constant: '<S50>/clk_id'

  if (imperix_vf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 15, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 15, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 15, imperix_vf_ctrl_B.DataTypeConversion1_pf,
                     0);

  // End of Outputs for SubSystem: '<S140>/generation'

  // DataTypeConversion: '<S142>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S69>/Data Type Conversion'

  imperix_vf_ctrl_B.DataTypeConversion1_al = static_cast<real32_T>(rtb_Gain1[0]);

  // DataTypeConversion: '<S142>/Data Type Conversion2' incorporates:
  //   Constant: '<S142>/phase'

  imperix_vf_ctrl_B.DataTypeConversion2_jw = static_cast<real32_T>
    (imperix_vf_ctrl_P.phase_Value_fa);

  // Outputs for Atomic SubSystem: '<S146>/generation'
  // S-Function (CB_PWM): '<S147>/PWM' incorporates:
  //   Constant: '<S50>/clk_id'

  if (imperix_vf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 0, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 0, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 0, imperix_vf_ctrl_B.DataTypeConversion1_al, 1);

  // End of Outputs for SubSystem: '<S146>/generation'

  // DataTypeConversion: '<S143>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S69>/Data Type Conversion'

  imperix_vf_ctrl_B.DataTypeConversion1_ig = static_cast<real32_T>(rtb_Gain1[0]);

  // DataTypeConversion: '<S143>/Data Type Conversion2' incorporates:
  //   Constant: '<S143>/phase'

  imperix_vf_ctrl_B.DataTypeConversion2_ij = static_cast<real32_T>
    (imperix_vf_ctrl_P.phase_Value_hr);

  // Outputs for Atomic SubSystem: '<S148>/generation'
  // S-Function (CB_PWM): '<S149>/PWM' incorporates:
  //   Constant: '<S50>/clk_id'

  if (imperix_vf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 4, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 4, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 4, imperix_vf_ctrl_B.DataTypeConversion1_ig, 1);

  // End of Outputs for SubSystem: '<S148>/generation'

  // DataTypeConversion: '<S144>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S69>/Data Type Conversion'

  imperix_vf_ctrl_B.DataTypeConversion1_g = static_cast<real32_T>(rtb_Gain1[0]);

  // DataTypeConversion: '<S144>/Data Type Conversion2' incorporates:
  //   Constant: '<S144>/phase'

  imperix_vf_ctrl_B.DataTypeConversion2_nm = static_cast<real32_T>
    (imperix_vf_ctrl_P.phase_Value_at);

  // Outputs for Atomic SubSystem: '<S150>/generation'
  // S-Function (CB_PWM): '<S151>/PWM' incorporates:
  //   Constant: '<S50>/clk_id'

  if (imperix_vf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 1, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 1, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 1, imperix_vf_ctrl_B.DataTypeConversion1_g, 1);

  // End of Outputs for SubSystem: '<S150>/generation'

  // DataTypeConversion: '<S145>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S69>/Data Type Conversion'

  imperix_vf_ctrl_B.DataTypeConversion1_gw = static_cast<real32_T>(rtb_Gain1[0]);

  // DataTypeConversion: '<S145>/Data Type Conversion2' incorporates:
  //   Constant: '<S145>/phase'

  imperix_vf_ctrl_B.DataTypeConversion2_a0 = static_cast<real32_T>
    (imperix_vf_ctrl_P.phase_Value_cq);

  // Outputs for Atomic SubSystem: '<S152>/generation'
  // S-Function (CB_PWM): '<S153>/PWM' incorporates:
  //   Constant: '<S50>/clk_id'

  if (imperix_vf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 5, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 5, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 5, imperix_vf_ctrl_B.DataTypeConversion1_gw, 1);

  // End of Outputs for SubSystem: '<S152>/generation'

  // Update for DiscreteIntegrator: '<S1>/Discrete-Time Integrator1' incorporates:
  //   Gain: '<S1>/Gain22'

  imperix_vf_ctrl_DW.DiscreteTimeIntegrator1_DSTATE +=
    imperix_vf_ctrl_P.Gain22_Gain * imperix_vf_ctrl_B.SFunction_e *
    imperix_vf_ctrl_P.DiscreteTimeIntegrator1_gainval;
}

// Model initialize function
void imperix_vf_ctrl_initialize(void)
{
  // Start for S-Function (ADC): '<S42>/ADC'
  Adc_ConfigureInput(3, 0.0047937F, 0.0F, 0);
  Adc_GetPointer(3, 0, &ix_raw_adc_ptr_3_0);

  // Start for S-Function (PROBE): '<S57>/S-Function'
  ConfigureProbe(&wm, 0);

  // Start for S-Function (ADC): '<S44>/ADC'
  Adc_ConfigureInput(7, 0.00030518F, 0.0F, 2);
  Adc_GetPointer(7, 2, &ix_raw_adc_ptr_7_2);

  // Start for S-Function (ADC): '<S46>/ADC'
  Adc_ConfigureInput(6, 0.00030518F, 0.0F, 2);
  Adc_GetPointer(6, 2, &ix_raw_adc_ptr_6_2);

  // Start for S-Function (ADC): '<S36>/ADC'
  Adc_ConfigureInput(5, 0.00030518F, 0.0F, 2);
  Adc_GetPointer(5, 2, &ix_raw_adc_ptr_5_2);

  // Start for S-Function (ADC): '<S48>/ADC'
  Adc_ConfigureInput(4, 0.00030518F, 0.0F, 2);
  Adc_GetPointer(4, 2, &ix_raw_adc_ptr_4_2);

  // Start for S-Function (ADC): '<S38>/ADC'
  Adc_ConfigureInput(3, 0.00030518F, 0.0F, 2);
  Adc_GetPointer(3, 2, &ix_raw_adc_ptr_3_2);

  // Start for S-Function (ADC): '<S40>/ADC'
  Adc_ConfigureInput(2, 0.00030518F, 0.0F, 2);
  Adc_GetPointer(2, 2, &ix_raw_adc_ptr_2_2);

  // Start for S-Function (PROBE): '<S59>/S-Function'
  ConfigureProbe(&is1, 0);

  // Start for S-Function (PROBE): '<S61>/S-Function'
  ConfigureProbe(&is2, 0);

  // Start for S-Function (PROBE): '<S65>/S-Function'
  ConfigureProbe(&is3, 0);

  // Start for S-Function (PROBE): '<S77>/S-Function'
  ConfigureProbe(&is4, 0);

  // Start for S-Function (PROBE): '<S79>/S-Function'
  ConfigureProbe(&is5, 0);

  // Start for S-Function (PROBE): '<S81>/S-Function'
  ConfigureProbe(&is6, 0);

  // Start for S-Function (IRQ): '<S53>/S-Function' incorporates:
  //   Constant: '<S55>/clk_id'

  ConfigureMainInterrupt(SimulinkInterrupt, (tClock)
    imperix_vf_ctrl_P.clk_id_Value, 0.5F, 0U);
  ConfigureReadTriggerDelayInNs(2000U);
  Adc_SetUserOversampling(0.0F);

  // Start for S-Function (CLK): '<S55>/CLK1'
  Clock_SetFrequency((tClock) 0, 6000.0F);

  // Start for S-Function (TUNABLE_PARAM): '<S157>/S-Function'
  V_mag = 0.5F;                        // Tunable parameter initialization
  ConfigureTunable(&V_mag, 0, 0, 0.0F, 1.0F);

  // Start for S-Function (PROBE): '<S63>/S-Function'
  ConfigureProbe(&D5, 0);

  // Start for S-Function (PROBE): '<S67>/S-Function'
  ConfigureProbe(&D6, 0);

  // Start for S-Function (PROBE): '<S69>/S-Function'
  ConfigureProbe(&D1, 0);

  // Start for S-Function (PROBE): '<S71>/S-Function'
  ConfigureProbe(&D2, 0);

  // Start for S-Function (PROBE): '<S73>/S-Function'
  ConfigureProbe(&D3, 0);

  // Start for S-Function (PROBE): '<S75>/S-Function'
  ConfigureProbe(&D4, 0);

  // Start for S-Function (CLK): '<S50>/CLK1'
  Clock_SetFrequency((tClock) 1, 1500.0F);

  // Start for S-Function (TUNABLE_PARAM): '<S155>/S-Function'
  f_mag = 0.5F;                        // Tunable parameter initialization
  ConfigureTunable(&f_mag, 0, 0, 0.0F, 1.0F);

  // Start for S-Function (TUNABLE_PARAM): '<S159>/S-Function'
  enable_FP = 1.0F;                    // Tunable parameter initialization
  ConfigureTunable(&enable_FP, 0, 0, 0.0F, 1.0F);

  // Start for Atomic SubSystem: '<S86>/generation'

  // Start for S-Function (CB_PWM): '<S87>/PWM' incorporates:
  //   Constant: '<S50>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 2, (tClock) imperix_vf_ctrl_P.clk_id_Value_d,
                       1);
  CbPwm_ConfigureOutputMode((tPwmOutput) 2, (tPwmOutMode) 2, 1);
  CbPwm_ConfigureCarrier((tPwmOutput) 2, (tPwmCarrier) 0, 1);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 2, (tPwmRate) 1, 1);
  CbPwm_SetPhase((tPwmOutput) 2, 0.75F, 1);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 2, 1);
  CbPwm_SetDutyCycle((tPwmOutput) 2, 0.0F, 1);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 2, 1);
  CbPwm_Activate((tPwmOutput) 2, 1);

  // End of Start for SubSystem: '<S86>/generation'

  // Start for Atomic SubSystem: '<S88>/generation'

  // Start for S-Function (CB_PWM): '<S89>/PWM' incorporates:
  //   Constant: '<S50>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 6, (tClock) imperix_vf_ctrl_P.clk_id_Value_d,
                       1);
  CbPwm_ConfigureOutputMode((tPwmOutput) 6, (tPwmOutMode) 2, 1);
  CbPwm_ConfigureCarrier((tPwmOutput) 6, (tPwmCarrier) 0, 1);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 6, (tPwmRate) 1, 1);
  CbPwm_SetPhase((tPwmOutput) 6, 0.5F, 1);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 6, 1);
  CbPwm_SetDutyCycle((tPwmOutput) 6, 0.0F, 1);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 6, 1);
  CbPwm_Activate((tPwmOutput) 6, 1);

  // End of Start for SubSystem: '<S88>/generation'

  // Start for Atomic SubSystem: '<S90>/generation'

  // Start for S-Function (CB_PWM): '<S91>/PWM' incorporates:
  //   Constant: '<S50>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 3, (tClock) imperix_vf_ctrl_P.clk_id_Value_d,
                       1);
  CbPwm_ConfigureOutputMode((tPwmOutput) 3, (tPwmOutMode) 2, 1);
  CbPwm_ConfigureCarrier((tPwmOutput) 3, (tPwmCarrier) 0, 1);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 3, (tPwmRate) 1, 1);
  CbPwm_SetPhase((tPwmOutput) 3, 0.25F, 1);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 3, 1);
  CbPwm_SetDutyCycle((tPwmOutput) 3, 0.0F, 1);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 3, 1);
  CbPwm_Activate((tPwmOutput) 3, 1);

  // End of Start for SubSystem: '<S90>/generation'

  // Start for Atomic SubSystem: '<S92>/generation'

  // Start for S-Function (CB_PWM): '<S93>/PWM' incorporates:
  //   Constant: '<S50>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 7, (tClock) imperix_vf_ctrl_P.clk_id_Value_d,
                       1);
  CbPwm_ConfigureOutputMode((tPwmOutput) 7, (tPwmOutMode) 2, 1);
  CbPwm_ConfigureCarrier((tPwmOutput) 7, (tPwmCarrier) 0, 1);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 7, (tPwmRate) 1, 1);
  CbPwm_SetPhase((tPwmOutput) 7, 0.0F, 1);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 7, 1);
  CbPwm_SetDutyCycle((tPwmOutput) 7, 0.0F, 1);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 7, 1);
  CbPwm_Activate((tPwmOutput) 7, 1);

  // End of Start for SubSystem: '<S92>/generation'

  // Start for Atomic SubSystem: '<S98>/generation'

  // Start for S-Function (CB_PWM): '<S99>/PWM' incorporates:
  //   Constant: '<S50>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 0, (tClock) imperix_vf_ctrl_P.clk_id_Value_d,
                       0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 0, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 0, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 0, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 0, 0.75F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 0, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 0, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 0, 0);
  CbPwm_Activate((tPwmOutput) 0, 0);

  // End of Start for SubSystem: '<S98>/generation'

  // Start for Atomic SubSystem: '<S100>/generation'

  // Start for S-Function (CB_PWM): '<S101>/PWM' incorporates:
  //   Constant: '<S50>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 4, (tClock) imperix_vf_ctrl_P.clk_id_Value_d,
                       0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 4, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 4, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 4, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 4, 0.5F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 4, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 4, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 4, 0);
  CbPwm_Activate((tPwmOutput) 4, 0);

  // End of Start for SubSystem: '<S100>/generation'

  // Start for Atomic SubSystem: '<S102>/generation'

  // Start for S-Function (CB_PWM): '<S103>/PWM' incorporates:
  //   Constant: '<S50>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 1, (tClock) imperix_vf_ctrl_P.clk_id_Value_d,
                       0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 1, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 1, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 1, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 1, 0.25F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 1, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 1, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 1, 0);
  CbPwm_Activate((tPwmOutput) 1, 0);

  // End of Start for SubSystem: '<S102>/generation'

  // Start for Atomic SubSystem: '<S104>/generation'

  // Start for S-Function (CB_PWM): '<S105>/PWM' incorporates:
  //   Constant: '<S50>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 5, (tClock) imperix_vf_ctrl_P.clk_id_Value_d,
                       0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 5, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 5, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 5, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 5, 0.0F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 5, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 5, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 5, 0);
  CbPwm_Activate((tPwmOutput) 5, 0);

  // End of Start for SubSystem: '<S104>/generation'

  // Start for Atomic SubSystem: '<S110>/generation'

  // Start for S-Function (CB_PWM): '<S111>/PWM' incorporates:
  //   Constant: '<S50>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 2, (tClock) imperix_vf_ctrl_P.clk_id_Value_d,
                       0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 2, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 2, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 2, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 2, 0.75F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 2, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 2, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 2, 0);
  CbPwm_Activate((tPwmOutput) 2, 0);

  // End of Start for SubSystem: '<S110>/generation'

  // Start for Atomic SubSystem: '<S112>/generation'

  // Start for S-Function (CB_PWM): '<S113>/PWM' incorporates:
  //   Constant: '<S50>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 6, (tClock) imperix_vf_ctrl_P.clk_id_Value_d,
                       0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 6, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 6, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 6, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 6, 0.5F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 6, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 6, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 6, 0);
  CbPwm_Activate((tPwmOutput) 6, 0);

  // End of Start for SubSystem: '<S112>/generation'

  // Start for Atomic SubSystem: '<S114>/generation'

  // Start for S-Function (CB_PWM): '<S115>/PWM' incorporates:
  //   Constant: '<S50>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 3, (tClock) imperix_vf_ctrl_P.clk_id_Value_d,
                       0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 3, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 3, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 3, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 3, 0.25F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 3, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 3, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 3, 0);
  CbPwm_Activate((tPwmOutput) 3, 0);

  // End of Start for SubSystem: '<S114>/generation'

  // Start for Atomic SubSystem: '<S116>/generation'

  // Start for S-Function (CB_PWM): '<S117>/PWM' incorporates:
  //   Constant: '<S50>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 7, (tClock) imperix_vf_ctrl_P.clk_id_Value_d,
                       0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 7, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 7, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 7, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 7, 0.0F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 7, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 7, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 7, 0);
  CbPwm_Activate((tPwmOutput) 7, 0);

  // End of Start for SubSystem: '<S116>/generation'

  // Start for Atomic SubSystem: '<S122>/generation'

  // Start for S-Function (CB_PWM): '<S123>/PWM' incorporates:
  //   Constant: '<S50>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 8, (tClock) imperix_vf_ctrl_P.clk_id_Value_d,
                       0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 8, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 8, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 8, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 8, 0.75F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 8, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 8, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 8, 0);
  CbPwm_Activate((tPwmOutput) 8, 0);

  // End of Start for SubSystem: '<S122>/generation'

  // Start for Atomic SubSystem: '<S124>/generation'

  // Start for S-Function (CB_PWM): '<S125>/PWM' incorporates:
  //   Constant: '<S50>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 12, (tClock)
                       imperix_vf_ctrl_P.clk_id_Value_d, 0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 12, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 12, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 12, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 12, 0.5F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 12, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 12, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 12, 0);
  CbPwm_Activate((tPwmOutput) 12, 0);

  // End of Start for SubSystem: '<S124>/generation'

  // Start for Atomic SubSystem: '<S126>/generation'

  // Start for S-Function (CB_PWM): '<S127>/PWM' incorporates:
  //   Constant: '<S50>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 9, (tClock) imperix_vf_ctrl_P.clk_id_Value_d,
                       0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 9, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 9, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 9, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 9, 0.25F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 9, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 9, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 9, 0);
  CbPwm_Activate((tPwmOutput) 9, 0);

  // End of Start for SubSystem: '<S126>/generation'

  // Start for Atomic SubSystem: '<S128>/generation'

  // Start for S-Function (CB_PWM): '<S129>/PWM' incorporates:
  //   Constant: '<S50>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 13, (tClock)
                       imperix_vf_ctrl_P.clk_id_Value_d, 0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 13, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 13, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 13, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 13, 0.0F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 13, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 13, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 13, 0);
  CbPwm_Activate((tPwmOutput) 13, 0);

  // End of Start for SubSystem: '<S128>/generation'

  // Start for Atomic SubSystem: '<S134>/generation'

  // Start for S-Function (CB_PWM): '<S135>/PWM' incorporates:
  //   Constant: '<S50>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 10, (tClock)
                       imperix_vf_ctrl_P.clk_id_Value_d, 0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 10, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 10, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 10, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 10, 0.75F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 10, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 10, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 10, 0);
  CbPwm_Activate((tPwmOutput) 10, 0);

  // End of Start for SubSystem: '<S134>/generation'

  // Start for Atomic SubSystem: '<S136>/generation'

  // Start for S-Function (CB_PWM): '<S137>/PWM' incorporates:
  //   Constant: '<S50>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 14, (tClock)
                       imperix_vf_ctrl_P.clk_id_Value_d, 0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 14, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 14, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 14, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 14, 0.5F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 14, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 14, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 14, 0);
  CbPwm_Activate((tPwmOutput) 14, 0);

  // End of Start for SubSystem: '<S136>/generation'

  // Start for Atomic SubSystem: '<S138>/generation'

  // Start for S-Function (CB_PWM): '<S139>/PWM' incorporates:
  //   Constant: '<S50>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 11, (tClock)
                       imperix_vf_ctrl_P.clk_id_Value_d, 0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 11, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 11, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 11, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 11, 0.25F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 11, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 11, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 11, 0);
  CbPwm_Activate((tPwmOutput) 11, 0);

  // End of Start for SubSystem: '<S138>/generation'

  // Start for Atomic SubSystem: '<S140>/generation'

  // Start for S-Function (CB_PWM): '<S141>/PWM' incorporates:
  //   Constant: '<S50>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 15, (tClock)
                       imperix_vf_ctrl_P.clk_id_Value_d, 0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 15, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 15, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 15, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 15, 0.0F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 15, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 15, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 15, 0);
  CbPwm_Activate((tPwmOutput) 15, 0);

  // End of Start for SubSystem: '<S140>/generation'

  // Start for Atomic SubSystem: '<S146>/generation'

  // Start for S-Function (CB_PWM): '<S147>/PWM' incorporates:
  //   Constant: '<S50>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 0, (tClock) imperix_vf_ctrl_P.clk_id_Value_d,
                       1);
  CbPwm_ConfigureOutputMode((tPwmOutput) 0, (tPwmOutMode) 2, 1);
  CbPwm_ConfigureCarrier((tPwmOutput) 0, (tPwmCarrier) 0, 1);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 0, (tPwmRate) 1, 1);
  CbPwm_SetPhase((tPwmOutput) 0, 0.75F, 1);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 0, 1);
  CbPwm_SetDutyCycle((tPwmOutput) 0, 0.0F, 1);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 0, 1);
  CbPwm_Activate((tPwmOutput) 0, 1);

  // End of Start for SubSystem: '<S146>/generation'

  // Start for Atomic SubSystem: '<S148>/generation'

  // Start for S-Function (CB_PWM): '<S149>/PWM' incorporates:
  //   Constant: '<S50>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 4, (tClock) imperix_vf_ctrl_P.clk_id_Value_d,
                       1);
  CbPwm_ConfigureOutputMode((tPwmOutput) 4, (tPwmOutMode) 2, 1);
  CbPwm_ConfigureCarrier((tPwmOutput) 4, (tPwmCarrier) 0, 1);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 4, (tPwmRate) 1, 1);
  CbPwm_SetPhase((tPwmOutput) 4, 0.5F, 1);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 4, 1);
  CbPwm_SetDutyCycle((tPwmOutput) 4, 0.0F, 1);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 4, 1);
  CbPwm_Activate((tPwmOutput) 4, 1);

  // End of Start for SubSystem: '<S148>/generation'

  // Start for Atomic SubSystem: '<S150>/generation'

  // Start for S-Function (CB_PWM): '<S151>/PWM' incorporates:
  //   Constant: '<S50>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 1, (tClock) imperix_vf_ctrl_P.clk_id_Value_d,
                       1);
  CbPwm_ConfigureOutputMode((tPwmOutput) 1, (tPwmOutMode) 2, 1);
  CbPwm_ConfigureCarrier((tPwmOutput) 1, (tPwmCarrier) 0, 1);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 1, (tPwmRate) 1, 1);
  CbPwm_SetPhase((tPwmOutput) 1, 0.25F, 1);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 1, 1);
  CbPwm_SetDutyCycle((tPwmOutput) 1, 0.0F, 1);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 1, 1);
  CbPwm_Activate((tPwmOutput) 1, 1);

  // End of Start for SubSystem: '<S150>/generation'

  // Start for Atomic SubSystem: '<S152>/generation'

  // Start for S-Function (CB_PWM): '<S153>/PWM' incorporates:
  //   Constant: '<S50>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 5, (tClock) imperix_vf_ctrl_P.clk_id_Value_d,
                       1);
  CbPwm_ConfigureOutputMode((tPwmOutput) 5, (tPwmOutMode) 2, 1);
  CbPwm_ConfigureCarrier((tPwmOutput) 5, (tPwmCarrier) 0, 1);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 5, (tPwmRate) 1, 1);
  CbPwm_SetPhase((tPwmOutput) 5, 0.0F, 1);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 5, 1);
  CbPwm_SetDutyCycle((tPwmOutput) 5, 0.0F, 1);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 5, 1);
  CbPwm_Activate((tPwmOutput) 5, 1);

  // End of Start for SubSystem: '<S152>/generation'

  // InitializeConditions for DiscreteIntegrator: '<S1>/Discrete-Time Integrator1' 
  imperix_vf_ctrl_DW.DiscreteTimeIntegrator1_DSTATE =
    imperix_vf_ctrl_P.DiscreteTimeIntegrator1_IC;
}

// Model terminate function
void imperix_vf_ctrl_terminate(void)
{
  // (no terminate code required)
}

const char_T* RT_MODEL_imperix_vf_ctrl_T::getErrorStatus() const
{
  return (errorStatus);
}

void RT_MODEL_imperix_vf_ctrl_T::setErrorStatus(const char_T* const volatile
  aErrorStatus)
{
  (errorStatus = aErrorStatus);
}

//
// End of automatically generated code
// Copyright imperix ltd. Switzerland 2021
// [EOF]
//
