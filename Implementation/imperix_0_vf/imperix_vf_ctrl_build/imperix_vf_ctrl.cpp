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
// Model version                  : 19.98
// Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
// C/C++ source code generated on : Tue Feb  3 13:19:50 2026
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
real32_T im_alp;                       // Probe
real32_T im_bet;                       // Probe
real32_T iP;                           // Probe
unsigned char __attribute__ ((section ("devicescount"))) __attribute__((used))
  ____DEVICES_COUNT = (2U+1);
real32_T reset_I;                      // Tunable parameter
real32_T D5;                           // Probe
real32_T D6;                           // Probe
real32_T D1;                           // Probe
real32_T D2;                           // Probe
real32_T D3;                           // Probe
real32_T D4;                           // Probe
real32_T enable_FP;                    // Tunable parameter
real32_T Vf_slope;                     // Tunable parameter
real32_T is1;                          // Probe
real32_T is2;                          // Probe
real32_T is3;                          // Probe
real32_T is4;                          // Probe
real32_T is5;                          // Probe
real32_T is6;                          // Probe

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
  real_T rtb_Gain[6];
  real_T rtb_VectorConcatenate2[6];
  real_T rtb_VectorConcatenate2_0;
  int32_T i;
  int32_T k;
  real32_T rtb_Gain1[5];
  real32_T rtb_Bias1;
  real32_T rtb_Product2_idx_0;
  real32_T rtb_Product2_idx_1;

  // S-Function (ADC): '<S52>/ADC'
  imperix_vf_ctrl_B.ADC = (float)(*ix_raw_adc_ptr_3_0) * 0.0047937F + 0.0F;

  // Gain: '<S1>/Gain8'
  imperix_vf_ctrl_B.Gain8 = imperix_vf_ctrl_P.Gain8_Gain * imperix_vf_ctrl_B.ADC;

  // S-Function (PROBE): '<S79>/S-Function'
  wm = imperix_vf_ctrl_B.Gain8;

  // S-Function (ADC): '<S54>/ADC'
  imperix_vf_ctrl_B.ADC_f = (float)(*ix_raw_adc_ptr_7_2) * 0.00030518F + 0.0F;

  // S-Function (ADC): '<S56>/ADC'
  imperix_vf_ctrl_B.ADC_e = (float)(*ix_raw_adc_ptr_6_2) * 0.00030518F + 0.0F;

  // S-Function (ADC): '<S46>/ADC'
  imperix_vf_ctrl_B.ADC_i = (float)(*ix_raw_adc_ptr_5_2) * 0.00030518F + 0.0F;

  // S-Function (ADC): '<S58>/ADC'
  imperix_vf_ctrl_B.ADC_d = (float)(*ix_raw_adc_ptr_4_2) * 0.00030518F + 0.0F;

  // S-Function (ADC): '<S48>/ADC'
  imperix_vf_ctrl_B.ADC_ib = (float)(*ix_raw_adc_ptr_3_2) * 0.00030518F + 0.0F;

  // S-Function (ADC): '<S50>/ADC'
  imperix_vf_ctrl_B.ADC_p = (float)(*ix_raw_adc_ptr_2_2) * 0.00030518F + 0.0F;

  // SignalConversion generated from: '<S37>/Gain1'
  imperix_vf_ctrl_B.Gain1[0] = imperix_vf_ctrl_B.ADC_f;
  imperix_vf_ctrl_B.Gain1[1] = imperix_vf_ctrl_B.ADC_e;
  imperix_vf_ctrl_B.Gain1[2] = imperix_vf_ctrl_B.ADC_i;
  imperix_vf_ctrl_B.Gain1[3] = imperix_vf_ctrl_B.ADC_d;
  imperix_vf_ctrl_B.Gain1[4] = imperix_vf_ctrl_B.ADC_ib;
  imperix_vf_ctrl_B.Gain1[5] = imperix_vf_ctrl_B.ADC_p;

  // Gain: '<S37>/Gain1'
  for (k = 0; k < 5; k++) {
    rtb_Gain1[k] = 0.0F;
  }

  for (k = 0; k < 6; k++) {
    rtb_Product2_idx_0 = imperix_vf_ctrl_B.Gain1[k];
    for (i = 0; i < 5; i++) {
      rtb_Gain1[i] += imperix_vf_ctrl_P.Gain1_Gain[5 * k + i] *
        rtb_Product2_idx_0;
    }
  }

  // End of Gain: '<S37>/Gain1'

  // Gain: '<S134>/Gain3' incorporates:
  //   Gain: '<S37>/Gain2'

  rtb_Product2_idx_1 = 0.0F;
  rtb_Bias1 = 0.0F;
  for (k = 0; k < 3; k++) {
    rtb_Product2_idx_0 = rtb_Gain1[k + 2] * imperix_vf_ctrl_P.Gain2_Gain;
    rtb_Product2_idx_1 += imperix_vf_ctrl_P.Gain3_Gain[3 * k] *
      rtb_Product2_idx_0;
    rtb_Bias1 += imperix_vf_ctrl_P.Gain3_Gain[3 * k + 1] * rtb_Product2_idx_0;
  }

  // End of Gain: '<S134>/Gain3'

  // Gain: '<S1>/Gain9' incorporates:
  //   Gain: '<S134>/Gain1'

  imperix_vf_ctrl_B.Gain9[0] = imperix_vf_ctrl_P.Gain1_Gain_b *
    rtb_Product2_idx_1 * imperix_vf_ctrl_P.Gain9_Gain;
  imperix_vf_ctrl_B.Gain9[1] = imperix_vf_ctrl_P.Gain1_Gain_b * rtb_Bias1 *
    imperix_vf_ctrl_P.Gain9_Gain;

  // S-Function (PROBE): '<S81>/S-Function'
  im_alp = imperix_vf_ctrl_B.Gain9[0];

  // S-Function (PROBE): '<S83>/S-Function'
  im_bet = imperix_vf_ctrl_B.Gain9[1];

  // Gain: '<S1>/Gain6'
  imperix_vf_ctrl_B.Gain6 = imperix_vf_ctrl_P.Gain6_Gain * rtb_Gain1[0];

  // S-Function (PROBE): '<S109>/S-Function'
  iP = imperix_vf_ctrl_B.Gain6;

  // S-Function (TUNABLE_PARAM): '<S184>/S-Function'
  imperix_vf_ctrl_B.SFunction = reset_I;

  // DiscreteIntegrator: '<S1>/Discrete-Time Integrator2'
  if ((imperix_vf_ctrl_B.SFunction != 0.0F) ||
      (imperix_vf_ctrl_DW.DiscreteTimeIntegrator2_PrevRes != 0)) {
    imperix_vf_ctrl_DW.DiscreteTimeIntegrator2_DSTATE =
      imperix_vf_ctrl_P.DiscreteTimeIntegrator2_IC;
  }

  // Bias: '<S1>/Bias1' incorporates:
  //   DiscreteIntegrator: '<S1>/Discrete-Time Integrator2'
  //   Gain: '<S1>/Gain2'

  rtb_Bias1 = imperix_vf_ctrl_P.Gain2_Gain_d *
    imperix_vf_ctrl_DW.DiscreteTimeIntegrator2_DSTATE +
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

  // MATLAB Function 'Closed_loop_control/Modulation index': '<S18>:1'
  // '<S18>:1:4'
  rtb_VectorConcatenate2[0] = imperix_vf_ctrl_P.M2C.Ax_max - rtb_Product2_idx_0;

  // MATLAB Function: '<S1>/Modulation index' incorporates:
  //   Constant: '<S1>/Constant3'
  //   Sum: '<S1>/Sum1'
  //   Sum: '<S1>/Sum2'

  rtb_VectorConcatenate2[3] = -((0.0 - imperix_vf_ctrl_P.M2C.Ax_max) -
    rtb_Product2_idx_0);

  // Sum: '<S1>/Sum1' incorporates:
  //   Constant: '<S1>/Constant3'

  rtb_VectorConcatenate2[1] = imperix_vf_ctrl_P.M2C.Ax_max - rtb_Product2_idx_1;

  // MATLAB Function: '<S1>/Modulation index' incorporates:
  //   Constant: '<S1>/Constant3'
  //   Sum: '<S1>/Sum1'
  //   Sum: '<S1>/Sum2'

  rtb_VectorConcatenate2[4] = -((0.0 - imperix_vf_ctrl_P.M2C.Ax_max) -
    rtb_Product2_idx_1);

  // Sum: '<S1>/Sum1' incorporates:
  //   Constant: '<S1>/Constant3'

  rtb_VectorConcatenate2[2] = imperix_vf_ctrl_P.M2C.Ax_max - rtb_Bias1;

  // MATLAB Function: '<S1>/Modulation index' incorporates:
  //   Constant: '<S1>/Constant3'
  //   Sum: '<S1>/Sum1'
  //   Sum: '<S1>/Sum2'

  rtb_VectorConcatenate2[5] = -((0.0 - imperix_vf_ctrl_P.M2C.Ax_max) - rtb_Bias1);

  // '<S18>:1:8'
  for (k = 0; k < 6; k++) {
    rtb_VectorConcatenate2_0 = rtb_VectorConcatenate2[k] / 520.0;
    if (!(rtb_VectorConcatenate2_0 >= 0.0)) {
      rtb_VectorConcatenate2_0 = 0.0;
    }

    if (!(rtb_VectorConcatenate2_0 <= 1.0)) {
      rtb_VectorConcatenate2_0 = 1.0;
    }

    rtb_VectorConcatenate2[k] = rtb_VectorConcatenate2_0;

    // Gain: '<S1>/Gain'
    rtb_Gain[k] = imperix_vf_ctrl_P.Gain_Gain * rtb_VectorConcatenate2_0;
  }

  // DataTypeConversion: '<S67>/Data Type Conversion1'
  imperix_vf_ctrl_B.DataTypeConversion1 = static_cast<real32_T>(rtb_Gain[4]);

  // S-Function (DAC): '<S67>/DAC'
  Dac_SetVoltage(1, imperix_vf_ctrl_B.DataTypeConversion1, 0);

  // DataTypeConversion: '<S69>/Data Type Conversion1'
  imperix_vf_ctrl_B.DataTypeConversion1_l = static_cast<real32_T>(rtb_Gain[5]);

  // S-Function (DAC): '<S69>/DAC'
  Dac_SetVoltage(2, imperix_vf_ctrl_B.DataTypeConversion1_l, 0);

  // DataTypeConversion: '<S71>/Data Type Conversion1'
  imperix_vf_ctrl_B.DataTypeConversion1_la = static_cast<real32_T>(rtb_Gain[0]);

  // S-Function (DAC): '<S71>/DAC'
  Dac_SetVoltage(0, imperix_vf_ctrl_B.DataTypeConversion1_la, 1);

  // DataTypeConversion: '<S73>/Data Type Conversion1'
  imperix_vf_ctrl_B.DataTypeConversion1_p = static_cast<real32_T>(rtb_Gain[1]);

  // S-Function (DAC): '<S73>/DAC'
  Dac_SetVoltage(1, imperix_vf_ctrl_B.DataTypeConversion1_p, 1);

  // DataTypeConversion: '<S75>/Data Type Conversion1'
  imperix_vf_ctrl_B.DataTypeConversion1_a = static_cast<real32_T>(rtb_Gain[2]);

  // S-Function (DAC): '<S75>/DAC'
  Dac_SetVoltage(2, imperix_vf_ctrl_B.DataTypeConversion1_a, 1);

  // DataTypeConversion: '<S77>/Data Type Conversion1'
  imperix_vf_ctrl_B.DataTypeConversion1_e = static_cast<real32_T>(rtb_Gain[3]);

  // S-Function (DAC): '<S77>/DAC'
  Dac_SetVoltage(3, imperix_vf_ctrl_B.DataTypeConversion1_e, 1);

  // DataTypeConversion: '<S89>/Data Type Conversion'
  imperix_vf_ctrl_B.DataTypeConversion = static_cast<real32_T>
    (rtb_VectorConcatenate2[4]);

  // S-Function (PROBE): '<S89>/S-Function'
  D5 = imperix_vf_ctrl_B.DataTypeConversion;

  // DataTypeConversion: '<S93>/Data Type Conversion'
  imperix_vf_ctrl_B.DataTypeConversion_b = static_cast<real32_T>
    (rtb_VectorConcatenate2[5]);

  // S-Function (PROBE): '<S93>/S-Function'
  D6 = imperix_vf_ctrl_B.DataTypeConversion_b;

  // DataTypeConversion: '<S95>/Data Type Conversion'
  imperix_vf_ctrl_B.DataTypeConversion_g = static_cast<real32_T>
    (rtb_VectorConcatenate2[0]);

  // S-Function (PROBE): '<S95>/S-Function'
  D1 = imperix_vf_ctrl_B.DataTypeConversion_g;

  // DataTypeConversion: '<S97>/Data Type Conversion'
  imperix_vf_ctrl_B.DataTypeConversion_f = static_cast<real32_T>
    (rtb_VectorConcatenate2[1]);

  // S-Function (PROBE): '<S97>/S-Function'
  D2 = imperix_vf_ctrl_B.DataTypeConversion_f;

  // DataTypeConversion: '<S99>/Data Type Conversion'
  imperix_vf_ctrl_B.DataTypeConversion_h = static_cast<real32_T>
    (rtb_VectorConcatenate2[2]);

  // S-Function (PROBE): '<S99>/S-Function'
  D3 = imperix_vf_ctrl_B.DataTypeConversion_h;

  // DataTypeConversion: '<S101>/Data Type Conversion'
  imperix_vf_ctrl_B.DataTypeConversion_gx = static_cast<real32_T>
    (rtb_VectorConcatenate2[3]);

  // S-Function (PROBE): '<S101>/S-Function'
  D4 = imperix_vf_ctrl_B.DataTypeConversion_gx;

  // Saturate: '<S60>/Saturation'
  if (imperix_vf_ctrl_P.Saturation_UpperSat < 0.0F) {
    // Saturate: '<S60>/Saturation'
    imperix_vf_ctrl_B.Saturation = imperix_vf_ctrl_P.Saturation_UpperSat;
  } else if (imperix_vf_ctrl_P.Saturation_LowerSat > 0.0F) {
    // Saturate: '<S60>/Saturation'
    imperix_vf_ctrl_B.Saturation = imperix_vf_ctrl_P.Saturation_LowerSat;
  } else {
    // Saturate: '<S60>/Saturation'
    imperix_vf_ctrl_B.Saturation = 0.0F;
  }

  // End of Saturate: '<S60>/Saturation'
  // DiscreteIntegrator: '<S1>/Discrete-Time Integrator3'
  if ((imperix_vf_ctrl_B.SFunction != 0.0F) ||
      (imperix_vf_ctrl_DW.DiscreteTimeIntegrator3_PrevRes != 0)) {
    imperix_vf_ctrl_DW.DiscreteTimeIntegrator3_DSTATE =
      imperix_vf_ctrl_P.DiscreteTimeIntegrator3_IC;
  }

  // DataTypeConversion: '<S110>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S97>/Data Type Conversion'

  imperix_vf_ctrl_B.DataTypeConversion1_le = static_cast<real32_T>
    (rtb_VectorConcatenate2[1]);

  // DataTypeConversion: '<S110>/Data Type Conversion2' incorporates:
  //   Constant: '<S110>/phase'

  imperix_vf_ctrl_B.DataTypeConversion2 = static_cast<real32_T>
    (imperix_vf_ctrl_P.phase_Value);

  // S-Function (TUNABLE_PARAM): '<S188>/S-Function'
  imperix_vf_ctrl_B.SFunction_c = enable_FP;

  // Outputs for Atomic SubSystem: '<S114>/generation'
  // S-Function (CB_PWM): '<S115>/PWM' incorporates:
  //   Constant: '<S60>/clk_id'

  if (imperix_vf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 2, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 2, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 2, imperix_vf_ctrl_B.DataTypeConversion1_le, 1);

  // End of Outputs for SubSystem: '<S114>/generation'

  // DataTypeConversion: '<S111>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S97>/Data Type Conversion'

  imperix_vf_ctrl_B.DataTypeConversion1_pv = static_cast<real32_T>
    (rtb_VectorConcatenate2[1]);

  // DataTypeConversion: '<S111>/Data Type Conversion2' incorporates:
  //   Constant: '<S111>/phase'

  imperix_vf_ctrl_B.DataTypeConversion2_i = static_cast<real32_T>
    (imperix_vf_ctrl_P.phase_Value_o);

  // Outputs for Atomic SubSystem: '<S116>/generation'
  // S-Function (CB_PWM): '<S117>/PWM' incorporates:
  //   Constant: '<S60>/clk_id'

  if (imperix_vf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 6, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 6, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 6, imperix_vf_ctrl_B.DataTypeConversion1_pv, 1);

  // End of Outputs for SubSystem: '<S116>/generation'

  // DataTypeConversion: '<S112>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S97>/Data Type Conversion'

  imperix_vf_ctrl_B.DataTypeConversion1_h = static_cast<real32_T>
    (rtb_VectorConcatenate2[1]);

  // DataTypeConversion: '<S112>/Data Type Conversion2' incorporates:
  //   Constant: '<S112>/phase'

  imperix_vf_ctrl_B.DataTypeConversion2_b = static_cast<real32_T>
    (imperix_vf_ctrl_P.phase_Value_l);

  // Outputs for Atomic SubSystem: '<S118>/generation'
  // S-Function (CB_PWM): '<S119>/PWM' incorporates:
  //   Constant: '<S60>/clk_id'

  if (imperix_vf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 3, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 3, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 3, imperix_vf_ctrl_B.DataTypeConversion1_h, 1);

  // End of Outputs for SubSystem: '<S118>/generation'

  // DataTypeConversion: '<S113>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S97>/Data Type Conversion'

  imperix_vf_ctrl_B.DataTypeConversion1_f = static_cast<real32_T>
    (rtb_VectorConcatenate2[1]);

  // DataTypeConversion: '<S113>/Data Type Conversion2' incorporates:
  //   Constant: '<S113>/phase'

  imperix_vf_ctrl_B.DataTypeConversion2_p = static_cast<real32_T>
    (imperix_vf_ctrl_P.phase_Value_oo);

  // Outputs for Atomic SubSystem: '<S120>/generation'
  // S-Function (CB_PWM): '<S121>/PWM' incorporates:
  //   Constant: '<S60>/clk_id'

  if (imperix_vf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 7, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 7, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 7, imperix_vf_ctrl_B.DataTypeConversion1_f, 1);

  // End of Outputs for SubSystem: '<S120>/generation'

  // DataTypeConversion: '<S122>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S99>/Data Type Conversion'

  imperix_vf_ctrl_B.DataTypeConversion1_b = static_cast<real32_T>
    (rtb_VectorConcatenate2[2]);

  // DataTypeConversion: '<S122>/Data Type Conversion2' incorporates:
  //   Constant: '<S122>/phase'

  imperix_vf_ctrl_B.DataTypeConversion2_d = static_cast<real32_T>
    (imperix_vf_ctrl_P.phase_Value_p);

  // Outputs for Atomic SubSystem: '<S126>/generation'
  // S-Function (CB_PWM): '<S127>/PWM' incorporates:
  //   Constant: '<S60>/clk_id'

  if (imperix_vf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 0, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 0, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 0, imperix_vf_ctrl_B.DataTypeConversion1_b, 0);

  // End of Outputs for SubSystem: '<S126>/generation'

  // DataTypeConversion: '<S123>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S99>/Data Type Conversion'

  imperix_vf_ctrl_B.DataTypeConversion1_eo = static_cast<real32_T>
    (rtb_VectorConcatenate2[2]);

  // DataTypeConversion: '<S123>/Data Type Conversion2' incorporates:
  //   Constant: '<S123>/phase'

  imperix_vf_ctrl_B.DataTypeConversion2_o = static_cast<real32_T>
    (imperix_vf_ctrl_P.phase_Value_pr);

  // Outputs for Atomic SubSystem: '<S128>/generation'
  // S-Function (CB_PWM): '<S129>/PWM' incorporates:
  //   Constant: '<S60>/clk_id'

  if (imperix_vf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 4, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 4, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 4, imperix_vf_ctrl_B.DataTypeConversion1_eo, 0);

  // End of Outputs for SubSystem: '<S128>/generation'

  // DataTypeConversion: '<S124>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S99>/Data Type Conversion'

  imperix_vf_ctrl_B.DataTypeConversion1_po = static_cast<real32_T>
    (rtb_VectorConcatenate2[2]);

  // DataTypeConversion: '<S124>/Data Type Conversion2' incorporates:
  //   Constant: '<S124>/phase'

  imperix_vf_ctrl_B.DataTypeConversion2_g = static_cast<real32_T>
    (imperix_vf_ctrl_P.phase_Value_c);

  // Outputs for Atomic SubSystem: '<S130>/generation'
  // S-Function (CB_PWM): '<S131>/PWM' incorporates:
  //   Constant: '<S60>/clk_id'

  if (imperix_vf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 1, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 1, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 1, imperix_vf_ctrl_B.DataTypeConversion1_po, 0);

  // End of Outputs for SubSystem: '<S130>/generation'

  // DataTypeConversion: '<S125>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S99>/Data Type Conversion'

  imperix_vf_ctrl_B.DataTypeConversion1_c = static_cast<real32_T>
    (rtb_VectorConcatenate2[2]);

  // DataTypeConversion: '<S125>/Data Type Conversion2' incorporates:
  //   Constant: '<S125>/phase'

  imperix_vf_ctrl_B.DataTypeConversion2_k = static_cast<real32_T>
    (imperix_vf_ctrl_P.phase_Value_ll);

  // Outputs for Atomic SubSystem: '<S132>/generation'
  // S-Function (CB_PWM): '<S133>/PWM' incorporates:
  //   Constant: '<S60>/clk_id'

  if (imperix_vf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 5, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 5, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 5, imperix_vf_ctrl_B.DataTypeConversion1_c, 0);

  // End of Outputs for SubSystem: '<S132>/generation'

  // DataTypeConversion: '<S135>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S101>/Data Type Conversion'

  imperix_vf_ctrl_B.DataTypeConversion1_h3 = static_cast<real32_T>
    (rtb_VectorConcatenate2[3]);

  // DataTypeConversion: '<S135>/Data Type Conversion2' incorporates:
  //   Constant: '<S135>/phase'

  imperix_vf_ctrl_B.DataTypeConversion2_bv = static_cast<real32_T>
    (imperix_vf_ctrl_P.phase_Value_n);

  // Outputs for Atomic SubSystem: '<S139>/generation'
  // S-Function (CB_PWM): '<S140>/PWM' incorporates:
  //   Constant: '<S60>/clk_id'

  if (imperix_vf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 2, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 2, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 2, imperix_vf_ctrl_B.DataTypeConversion1_h3, 0);

  // End of Outputs for SubSystem: '<S139>/generation'

  // DataTypeConversion: '<S136>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S101>/Data Type Conversion'

  imperix_vf_ctrl_B.DataTypeConversion1_m = static_cast<real32_T>
    (rtb_VectorConcatenate2[3]);

  // DataTypeConversion: '<S136>/Data Type Conversion2' incorporates:
  //   Constant: '<S136>/phase'

  imperix_vf_ctrl_B.DataTypeConversion2_j = static_cast<real32_T>
    (imperix_vf_ctrl_P.phase_Value_k);

  // Outputs for Atomic SubSystem: '<S141>/generation'
  // S-Function (CB_PWM): '<S142>/PWM' incorporates:
  //   Constant: '<S60>/clk_id'

  if (imperix_vf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 6, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 6, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 6, imperix_vf_ctrl_B.DataTypeConversion1_m, 0);

  // End of Outputs for SubSystem: '<S141>/generation'

  // DataTypeConversion: '<S137>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S101>/Data Type Conversion'

  imperix_vf_ctrl_B.DataTypeConversion1_fz = static_cast<real32_T>
    (rtb_VectorConcatenate2[3]);

  // DataTypeConversion: '<S137>/Data Type Conversion2' incorporates:
  //   Constant: '<S137>/phase'

  imperix_vf_ctrl_B.DataTypeConversion2_a = static_cast<real32_T>
    (imperix_vf_ctrl_P.phase_Value_py);

  // Outputs for Atomic SubSystem: '<S143>/generation'
  // S-Function (CB_PWM): '<S144>/PWM' incorporates:
  //   Constant: '<S60>/clk_id'

  if (imperix_vf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 3, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 3, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 3, imperix_vf_ctrl_B.DataTypeConversion1_fz, 0);

  // End of Outputs for SubSystem: '<S143>/generation'

  // DataTypeConversion: '<S138>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S101>/Data Type Conversion'

  imperix_vf_ctrl_B.DataTypeConversion1_i = static_cast<real32_T>
    (rtb_VectorConcatenate2[3]);

  // DataTypeConversion: '<S138>/Data Type Conversion2' incorporates:
  //   Constant: '<S138>/phase'

  imperix_vf_ctrl_B.DataTypeConversion2_f = static_cast<real32_T>
    (imperix_vf_ctrl_P.phase_Value_ng);

  // Outputs for Atomic SubSystem: '<S145>/generation'
  // S-Function (CB_PWM): '<S146>/PWM' incorporates:
  //   Constant: '<S60>/clk_id'

  if (imperix_vf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 7, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 7, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 7, imperix_vf_ctrl_B.DataTypeConversion1_i, 0);

  // End of Outputs for SubSystem: '<S145>/generation'

  // DataTypeConversion: '<S147>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S89>/Data Type Conversion'

  imperix_vf_ctrl_B.DataTypeConversion1_al = static_cast<real32_T>
    (rtb_VectorConcatenate2[4]);

  // DataTypeConversion: '<S147>/Data Type Conversion2' incorporates:
  //   Constant: '<S147>/phase'

  imperix_vf_ctrl_B.DataTypeConversion2_dx = static_cast<real32_T>
    (imperix_vf_ctrl_P.phase_Value_j);

  // Outputs for Atomic SubSystem: '<S151>/generation'
  // S-Function (CB_PWM): '<S152>/PWM' incorporates:
  //   Constant: '<S60>/clk_id'

  if (imperix_vf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 8, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 8, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 8, imperix_vf_ctrl_B.DataTypeConversion1_al, 0);

  // End of Outputs for SubSystem: '<S151>/generation'

  // DataTypeConversion: '<S148>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S89>/Data Type Conversion'

  imperix_vf_ctrl_B.DataTypeConversion1_k = static_cast<real32_T>
    (rtb_VectorConcatenate2[4]);

  // DataTypeConversion: '<S148>/Data Type Conversion2' incorporates:
  //   Constant: '<S148>/phase'

  imperix_vf_ctrl_B.DataTypeConversion2_dm = static_cast<real32_T>
    (imperix_vf_ctrl_P.phase_Value_of);

  // Outputs for Atomic SubSystem: '<S153>/generation'
  // S-Function (CB_PWM): '<S154>/PWM' incorporates:
  //   Constant: '<S60>/clk_id'

  if (imperix_vf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 12, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 12, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 12, imperix_vf_ctrl_B.DataTypeConversion1_k, 0);

  // End of Outputs for SubSystem: '<S153>/generation'

  // DataTypeConversion: '<S149>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S89>/Data Type Conversion'

  imperix_vf_ctrl_B.DataTypeConversion1_l4 = static_cast<real32_T>
    (rtb_VectorConcatenate2[4]);

  // DataTypeConversion: '<S149>/Data Type Conversion2' incorporates:
  //   Constant: '<S149>/phase'

  imperix_vf_ctrl_B.DataTypeConversion2_n = static_cast<real32_T>
    (imperix_vf_ctrl_P.phase_Value_h);

  // Outputs for Atomic SubSystem: '<S155>/generation'
  // S-Function (CB_PWM): '<S156>/PWM' incorporates:
  //   Constant: '<S60>/clk_id'

  if (imperix_vf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 9, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 9, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 9, imperix_vf_ctrl_B.DataTypeConversion1_l4, 0);

  // End of Outputs for SubSystem: '<S155>/generation'

  // DataTypeConversion: '<S150>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S89>/Data Type Conversion'

  imperix_vf_ctrl_B.DataTypeConversion1_bg = static_cast<real32_T>
    (rtb_VectorConcatenate2[4]);

  // DataTypeConversion: '<S150>/Data Type Conversion2' incorporates:
  //   Constant: '<S150>/phase'

  imperix_vf_ctrl_B.DataTypeConversion2_nx = static_cast<real32_T>
    (imperix_vf_ctrl_P.phase_Value_nc);

  // Outputs for Atomic SubSystem: '<S157>/generation'
  // S-Function (CB_PWM): '<S158>/PWM' incorporates:
  //   Constant: '<S60>/clk_id'

  if (imperix_vf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 13, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 13, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 13, imperix_vf_ctrl_B.DataTypeConversion1_bg,
                     0);

  // End of Outputs for SubSystem: '<S157>/generation'

  // DataTypeConversion: '<S159>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S93>/Data Type Conversion'

  imperix_vf_ctrl_B.DataTypeConversion1_d = static_cast<real32_T>
    (rtb_VectorConcatenate2[5]);

  // DataTypeConversion: '<S159>/Data Type Conversion2' incorporates:
  //   Constant: '<S159>/phase'

  imperix_vf_ctrl_B.DataTypeConversion2_pe = static_cast<real32_T>
    (imperix_vf_ctrl_P.phase_Value_f);

  // Outputs for Atomic SubSystem: '<S163>/generation'
  // S-Function (CB_PWM): '<S164>/PWM' incorporates:
  //   Constant: '<S60>/clk_id'

  if (imperix_vf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 10, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 10, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 10, imperix_vf_ctrl_B.DataTypeConversion1_d, 0);

  // End of Outputs for SubSystem: '<S163>/generation'

  // DataTypeConversion: '<S160>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S93>/Data Type Conversion'

  imperix_vf_ctrl_B.DataTypeConversion1_o = static_cast<real32_T>
    (rtb_VectorConcatenate2[5]);

  // DataTypeConversion: '<S160>/Data Type Conversion2' incorporates:
  //   Constant: '<S160>/phase'

  imperix_vf_ctrl_B.DataTypeConversion2_n0 = static_cast<real32_T>
    (imperix_vf_ctrl_P.phase_Value_i);

  // Outputs for Atomic SubSystem: '<S165>/generation'
  // S-Function (CB_PWM): '<S166>/PWM' incorporates:
  //   Constant: '<S60>/clk_id'

  if (imperix_vf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 14, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 14, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 14, imperix_vf_ctrl_B.DataTypeConversion1_o, 0);

  // End of Outputs for SubSystem: '<S165>/generation'

  // DataTypeConversion: '<S161>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S93>/Data Type Conversion'

  imperix_vf_ctrl_B.DataTypeConversion1_ay = static_cast<real32_T>
    (rtb_VectorConcatenate2[5]);

  // DataTypeConversion: '<S161>/Data Type Conversion2' incorporates:
  //   Constant: '<S161>/phase'

  imperix_vf_ctrl_B.DataTypeConversion2_gl = static_cast<real32_T>
    (imperix_vf_ctrl_P.phase_Value_a);

  // Outputs for Atomic SubSystem: '<S167>/generation'
  // S-Function (CB_PWM): '<S168>/PWM' incorporates:
  //   Constant: '<S60>/clk_id'

  if (imperix_vf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 11, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 11, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 11, imperix_vf_ctrl_B.DataTypeConversion1_ay,
                     0);

  // End of Outputs for SubSystem: '<S167>/generation'

  // DataTypeConversion: '<S162>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S93>/Data Type Conversion'

  imperix_vf_ctrl_B.DataTypeConversion1_pf = static_cast<real32_T>
    (rtb_VectorConcatenate2[5]);

  // DataTypeConversion: '<S162>/Data Type Conversion2' incorporates:
  //   Constant: '<S162>/phase'

  imperix_vf_ctrl_B.DataTypeConversion2_by = static_cast<real32_T>
    (imperix_vf_ctrl_P.phase_Value_ns);

  // Outputs for Atomic SubSystem: '<S169>/generation'
  // S-Function (CB_PWM): '<S170>/PWM' incorporates:
  //   Constant: '<S60>/clk_id'

  if (imperix_vf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 15, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 15, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 15, imperix_vf_ctrl_B.DataTypeConversion1_pf,
                     0);

  // End of Outputs for SubSystem: '<S169>/generation'

  // DataTypeConversion: '<S171>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S95>/Data Type Conversion'

  imperix_vf_ctrl_B.DataTypeConversion1_als = static_cast<real32_T>
    (rtb_VectorConcatenate2[0]);

  // DataTypeConversion: '<S171>/Data Type Conversion2' incorporates:
  //   Constant: '<S171>/phase'

  imperix_vf_ctrl_B.DataTypeConversion2_jw = static_cast<real32_T>
    (imperix_vf_ctrl_P.phase_Value_fa);

  // Outputs for Atomic SubSystem: '<S175>/generation'
  // S-Function (CB_PWM): '<S176>/PWM' incorporates:
  //   Constant: '<S60>/clk_id'

  if (imperix_vf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 0, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 0, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 0, imperix_vf_ctrl_B.DataTypeConversion1_als,
                     1);

  // End of Outputs for SubSystem: '<S175>/generation'

  // DataTypeConversion: '<S172>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S95>/Data Type Conversion'

  imperix_vf_ctrl_B.DataTypeConversion1_ig = static_cast<real32_T>
    (rtb_VectorConcatenate2[0]);

  // DataTypeConversion: '<S172>/Data Type Conversion2' incorporates:
  //   Constant: '<S172>/phase'

  imperix_vf_ctrl_B.DataTypeConversion2_ij = static_cast<real32_T>
    (imperix_vf_ctrl_P.phase_Value_hr);

  // Outputs for Atomic SubSystem: '<S177>/generation'
  // S-Function (CB_PWM): '<S178>/PWM' incorporates:
  //   Constant: '<S60>/clk_id'

  if (imperix_vf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 4, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 4, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 4, imperix_vf_ctrl_B.DataTypeConversion1_ig, 1);

  // End of Outputs for SubSystem: '<S177>/generation'

  // DataTypeConversion: '<S173>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S95>/Data Type Conversion'

  imperix_vf_ctrl_B.DataTypeConversion1_g = static_cast<real32_T>
    (rtb_VectorConcatenate2[0]);

  // DataTypeConversion: '<S173>/Data Type Conversion2' incorporates:
  //   Constant: '<S173>/phase'

  imperix_vf_ctrl_B.DataTypeConversion2_nm = static_cast<real32_T>
    (imperix_vf_ctrl_P.phase_Value_at);

  // Outputs for Atomic SubSystem: '<S179>/generation'
  // S-Function (CB_PWM): '<S180>/PWM' incorporates:
  //   Constant: '<S60>/clk_id'

  if (imperix_vf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 1, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 1, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 1, imperix_vf_ctrl_B.DataTypeConversion1_g, 1);

  // End of Outputs for SubSystem: '<S179>/generation'

  // DataTypeConversion: '<S174>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S95>/Data Type Conversion'

  imperix_vf_ctrl_B.DataTypeConversion1_gw = static_cast<real32_T>
    (rtb_VectorConcatenate2[0]);

  // DataTypeConversion: '<S174>/Data Type Conversion2' incorporates:
  //   Constant: '<S174>/phase'

  imperix_vf_ctrl_B.DataTypeConversion2_a0 = static_cast<real32_T>
    (imperix_vf_ctrl_P.phase_Value_cq);

  // Outputs for Atomic SubSystem: '<S181>/generation'
  // S-Function (CB_PWM): '<S182>/PWM' incorporates:
  //   Constant: '<S60>/clk_id'

  if (imperix_vf_ctrl_B.SFunction_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 5, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 5, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 5, imperix_vf_ctrl_B.DataTypeConversion1_gw, 1);

  // End of Outputs for SubSystem: '<S181>/generation'

  // S-Function (TUNABLE_PARAM): '<S186>/S-Function'
  imperix_vf_ctrl_B.SFunction_a = Vf_slope;
  for (k = 0; k < 6; k++) {
    // Gain: '<S1>/Gain1' incorporates:
    //   SignalConversion generated from: '<S37>/Gain1'

    imperix_vf_ctrl_B.Gain1[k] *= imperix_vf_ctrl_P.Gain1_Gain_g;
  }

  // S-Function (PROBE): '<S85>/S-Function'
  is1 = imperix_vf_ctrl_B.Gain1[0];

  // S-Function (PROBE): '<S87>/S-Function'
  is2 = imperix_vf_ctrl_B.Gain1[1];

  // S-Function (PROBE): '<S91>/S-Function'
  is3 = imperix_vf_ctrl_B.Gain1[2];

  // S-Function (PROBE): '<S103>/S-Function'
  is4 = imperix_vf_ctrl_B.Gain1[3];

  // S-Function (PROBE): '<S105>/S-Function'
  is5 = imperix_vf_ctrl_B.Gain1[4];

  // S-Function (PROBE): '<S107>/S-Function'
  is6 = imperix_vf_ctrl_B.Gain1[5];

  // Update for DiscreteIntegrator: '<S1>/Discrete-Time Integrator2'
  if (imperix_vf_ctrl_B.SFunction == 0.0F) {
    imperix_vf_ctrl_DW.DiscreteTimeIntegrator2_DSTATE +=
      imperix_vf_ctrl_P.DiscreteTimeIntegrator2_gainval *
      imperix_vf_ctrl_B.SFunction_a;
    if (imperix_vf_ctrl_DW.DiscreteTimeIntegrator2_DSTATE >
        imperix_vf_ctrl_P.DiscreteTimeIntegrator2_UpperSa) {
      imperix_vf_ctrl_DW.DiscreteTimeIntegrator2_DSTATE =
        imperix_vf_ctrl_P.DiscreteTimeIntegrator2_UpperSa;
    } else if (imperix_vf_ctrl_DW.DiscreteTimeIntegrator2_DSTATE <
               imperix_vf_ctrl_P.DiscreteTimeIntegrator2_LowerSa) {
      imperix_vf_ctrl_DW.DiscreteTimeIntegrator2_DSTATE =
        imperix_vf_ctrl_P.DiscreteTimeIntegrator2_LowerSa;
    }
  }

  if (imperix_vf_ctrl_B.SFunction > 0.0F) {
    imperix_vf_ctrl_DW.DiscreteTimeIntegrator2_PrevRes = 1;
  } else if (imperix_vf_ctrl_B.SFunction < 0.0F) {
    imperix_vf_ctrl_DW.DiscreteTimeIntegrator2_PrevRes = -1;
  } else if (imperix_vf_ctrl_B.SFunction == 0.0F) {
    imperix_vf_ctrl_DW.DiscreteTimeIntegrator2_PrevRes = 0;
  } else {
    imperix_vf_ctrl_DW.DiscreteTimeIntegrator2_PrevRes = 2;
  }

  // End of Update for DiscreteIntegrator: '<S1>/Discrete-Time Integrator2'

  // Update for DiscreteIntegrator: '<S1>/Discrete-Time Integrator1' incorporates:
  //   DiscreteIntegrator: '<S1>/Discrete-Time Integrator3'
  //   Gain: '<S1>/Gain7'

  imperix_vf_ctrl_DW.DiscreteTimeIntegrator1_DSTATE +=
    imperix_vf_ctrl_P.Gain7_Gain *
    imperix_vf_ctrl_DW.DiscreteTimeIntegrator3_DSTATE *
    imperix_vf_ctrl_P.DiscreteTimeIntegrator1_gainval;

  // Update for DiscreteIntegrator: '<S1>/Discrete-Time Integrator3'
  if (imperix_vf_ctrl_B.SFunction == 0.0F) {
    imperix_vf_ctrl_DW.DiscreteTimeIntegrator3_DSTATE +=
      imperix_vf_ctrl_P.DiscreteTimeIntegrator3_gainval *
      imperix_vf_ctrl_B.SFunction_a;
    if (imperix_vf_ctrl_DW.DiscreteTimeIntegrator3_DSTATE >
        imperix_vf_ctrl_P.DiscreteTimeIntegrator3_UpperSa) {
      imperix_vf_ctrl_DW.DiscreteTimeIntegrator3_DSTATE =
        imperix_vf_ctrl_P.DiscreteTimeIntegrator3_UpperSa;
    } else if (imperix_vf_ctrl_DW.DiscreteTimeIntegrator3_DSTATE <
               imperix_vf_ctrl_P.DiscreteTimeIntegrator3_LowerSa) {
      imperix_vf_ctrl_DW.DiscreteTimeIntegrator3_DSTATE =
        imperix_vf_ctrl_P.DiscreteTimeIntegrator3_LowerSa;
    }
  }

  if (imperix_vf_ctrl_B.SFunction > 0.0F) {
    imperix_vf_ctrl_DW.DiscreteTimeIntegrator3_PrevRes = 1;
  } else if (imperix_vf_ctrl_B.SFunction < 0.0F) {
    imperix_vf_ctrl_DW.DiscreteTimeIntegrator3_PrevRes = -1;
  } else if (imperix_vf_ctrl_B.SFunction == 0.0F) {
    imperix_vf_ctrl_DW.DiscreteTimeIntegrator3_PrevRes = 0;
  } else {
    imperix_vf_ctrl_DW.DiscreteTimeIntegrator3_PrevRes = 2;
  }

  // End of Update for DiscreteIntegrator: '<S1>/Discrete-Time Integrator3'
}

// Model initialize function
void imperix_vf_ctrl_initialize(void)
{
  // Start for S-Function (ADC): '<S52>/ADC'
  Adc_ConfigureInput(3, 0.0047937F, 0.0F, 0);
  Adc_GetPointer(3, 0, &ix_raw_adc_ptr_3_0);

  // Start for S-Function (PROBE): '<S79>/S-Function'
  ConfigureProbe(&wm, 0);

  // Start for S-Function (ADC): '<S54>/ADC'
  Adc_ConfigureInput(7, 0.00030518F, 0.0F, 2);
  Adc_GetPointer(7, 2, &ix_raw_adc_ptr_7_2);

  // Start for S-Function (ADC): '<S56>/ADC'
  Adc_ConfigureInput(6, 0.00030518F, 0.0F, 2);
  Adc_GetPointer(6, 2, &ix_raw_adc_ptr_6_2);

  // Start for S-Function (ADC): '<S46>/ADC'
  Adc_ConfigureInput(5, 0.00030518F, 0.0F, 2);
  Adc_GetPointer(5, 2, &ix_raw_adc_ptr_5_2);

  // Start for S-Function (ADC): '<S58>/ADC'
  Adc_ConfigureInput(4, 0.00030518F, 0.0F, 2);
  Adc_GetPointer(4, 2, &ix_raw_adc_ptr_4_2);

  // Start for S-Function (ADC): '<S48>/ADC'
  Adc_ConfigureInput(3, 0.00030518F, 0.0F, 2);
  Adc_GetPointer(3, 2, &ix_raw_adc_ptr_3_2);

  // Start for S-Function (ADC): '<S50>/ADC'
  Adc_ConfigureInput(2, 0.00030518F, 0.0F, 2);
  Adc_GetPointer(2, 2, &ix_raw_adc_ptr_2_2);

  // Start for S-Function (PROBE): '<S81>/S-Function'
  ConfigureProbe(&im_alp, 0);

  // Start for S-Function (PROBE): '<S83>/S-Function'
  ConfigureProbe(&im_bet, 0);

  // Start for S-Function (PROBE): '<S109>/S-Function'
  ConfigureProbe(&iP, 0);

  // Start for S-Function (IRQ): '<S63>/S-Function' incorporates:
  //   Constant: '<S65>/clk_id'

  ConfigureMainInterrupt(SimulinkInterrupt, (tClock)
    imperix_vf_ctrl_P.clk_id_Value, 0.5F, 0U);
  ConfigureReadTriggerDelayInNs(2000U);
  Adc_SetUserOversampling(0.0F);

  // Start for S-Function (CLK): '<S65>/CLK1'
  Clock_SetFrequency((tClock) 0, 6000.0F);

  // Start for S-Function (TUNABLE_PARAM): '<S184>/S-Function'
  reset_I = 0.0F;                      // Tunable parameter initialization
  ConfigureTunable(&reset_I, 0, 0, 0.0F, 1.0F);

  // Start for S-Function (PROBE): '<S89>/S-Function'
  ConfigureProbe(&D5, 0);

  // Start for S-Function (PROBE): '<S93>/S-Function'
  ConfigureProbe(&D6, 0);

  // Start for S-Function (PROBE): '<S95>/S-Function'
  ConfigureProbe(&D1, 0);

  // Start for S-Function (PROBE): '<S97>/S-Function'
  ConfigureProbe(&D2, 0);

  // Start for S-Function (PROBE): '<S99>/S-Function'
  ConfigureProbe(&D3, 0);

  // Start for S-Function (PROBE): '<S101>/S-Function'
  ConfigureProbe(&D4, 0);

  // Start for S-Function (CLK): '<S60>/CLK1'
  Clock_SetFrequency((tClock) 1, 1500.0F);

  // Start for S-Function (TUNABLE_PARAM): '<S188>/S-Function'
  enable_FP = 0.0F;                    // Tunable parameter initialization
  ConfigureTunable(&enable_FP, 0, 0, 0.0F, 1.0F);

  // Start for Atomic SubSystem: '<S114>/generation'

  // Start for S-Function (CB_PWM): '<S115>/PWM' incorporates:
  //   Constant: '<S60>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 2, (tClock) imperix_vf_ctrl_P.clk_id_Value_g,
                       1);
  CbPwm_ConfigureOutputMode((tPwmOutput) 2, (tPwmOutMode) 2, 1);
  CbPwm_ConfigureCarrier((tPwmOutput) 2, (tPwmCarrier) 0, 1);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 2, (tPwmRate) 1, 1);
  CbPwm_SetPhase((tPwmOutput) 2, 0.75F, 1);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 2, 1);
  CbPwm_SetDutyCycle((tPwmOutput) 2, 0.0F, 1);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 2, 1);
  CbPwm_Activate((tPwmOutput) 2, 1);

  // End of Start for SubSystem: '<S114>/generation'

  // Start for Atomic SubSystem: '<S116>/generation'

  // Start for S-Function (CB_PWM): '<S117>/PWM' incorporates:
  //   Constant: '<S60>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 6, (tClock) imperix_vf_ctrl_P.clk_id_Value_g,
                       1);
  CbPwm_ConfigureOutputMode((tPwmOutput) 6, (tPwmOutMode) 2, 1);
  CbPwm_ConfigureCarrier((tPwmOutput) 6, (tPwmCarrier) 0, 1);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 6, (tPwmRate) 1, 1);
  CbPwm_SetPhase((tPwmOutput) 6, 0.5F, 1);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 6, 1);
  CbPwm_SetDutyCycle((tPwmOutput) 6, 0.0F, 1);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 6, 1);
  CbPwm_Activate((tPwmOutput) 6, 1);

  // End of Start for SubSystem: '<S116>/generation'

  // Start for Atomic SubSystem: '<S118>/generation'

  // Start for S-Function (CB_PWM): '<S119>/PWM' incorporates:
  //   Constant: '<S60>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 3, (tClock) imperix_vf_ctrl_P.clk_id_Value_g,
                       1);
  CbPwm_ConfigureOutputMode((tPwmOutput) 3, (tPwmOutMode) 2, 1);
  CbPwm_ConfigureCarrier((tPwmOutput) 3, (tPwmCarrier) 0, 1);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 3, (tPwmRate) 1, 1);
  CbPwm_SetPhase((tPwmOutput) 3, 0.25F, 1);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 3, 1);
  CbPwm_SetDutyCycle((tPwmOutput) 3, 0.0F, 1);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 3, 1);
  CbPwm_Activate((tPwmOutput) 3, 1);

  // End of Start for SubSystem: '<S118>/generation'

  // Start for Atomic SubSystem: '<S120>/generation'

  // Start for S-Function (CB_PWM): '<S121>/PWM' incorporates:
  //   Constant: '<S60>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 7, (tClock) imperix_vf_ctrl_P.clk_id_Value_g,
                       1);
  CbPwm_ConfigureOutputMode((tPwmOutput) 7, (tPwmOutMode) 2, 1);
  CbPwm_ConfigureCarrier((tPwmOutput) 7, (tPwmCarrier) 0, 1);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 7, (tPwmRate) 1, 1);
  CbPwm_SetPhase((tPwmOutput) 7, 0.0F, 1);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 7, 1);
  CbPwm_SetDutyCycle((tPwmOutput) 7, 0.0F, 1);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 7, 1);
  CbPwm_Activate((tPwmOutput) 7, 1);

  // End of Start for SubSystem: '<S120>/generation'

  // Start for Atomic SubSystem: '<S126>/generation'

  // Start for S-Function (CB_PWM): '<S127>/PWM' incorporates:
  //   Constant: '<S60>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 0, (tClock) imperix_vf_ctrl_P.clk_id_Value_g,
                       0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 0, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 0, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 0, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 0, 0.75F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 0, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 0, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 0, 0);
  CbPwm_Activate((tPwmOutput) 0, 0);

  // End of Start for SubSystem: '<S126>/generation'

  // Start for Atomic SubSystem: '<S128>/generation'

  // Start for S-Function (CB_PWM): '<S129>/PWM' incorporates:
  //   Constant: '<S60>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 4, (tClock) imperix_vf_ctrl_P.clk_id_Value_g,
                       0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 4, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 4, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 4, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 4, 0.5F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 4, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 4, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 4, 0);
  CbPwm_Activate((tPwmOutput) 4, 0);

  // End of Start for SubSystem: '<S128>/generation'

  // Start for Atomic SubSystem: '<S130>/generation'

  // Start for S-Function (CB_PWM): '<S131>/PWM' incorporates:
  //   Constant: '<S60>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 1, (tClock) imperix_vf_ctrl_P.clk_id_Value_g,
                       0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 1, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 1, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 1, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 1, 0.25F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 1, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 1, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 1, 0);
  CbPwm_Activate((tPwmOutput) 1, 0);

  // End of Start for SubSystem: '<S130>/generation'

  // Start for Atomic SubSystem: '<S132>/generation'

  // Start for S-Function (CB_PWM): '<S133>/PWM' incorporates:
  //   Constant: '<S60>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 5, (tClock) imperix_vf_ctrl_P.clk_id_Value_g,
                       0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 5, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 5, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 5, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 5, 0.0F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 5, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 5, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 5, 0);
  CbPwm_Activate((tPwmOutput) 5, 0);

  // End of Start for SubSystem: '<S132>/generation'

  // Start for Atomic SubSystem: '<S139>/generation'

  // Start for S-Function (CB_PWM): '<S140>/PWM' incorporates:
  //   Constant: '<S60>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 2, (tClock) imperix_vf_ctrl_P.clk_id_Value_g,
                       0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 2, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 2, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 2, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 2, 0.75F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 2, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 2, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 2, 0);
  CbPwm_Activate((tPwmOutput) 2, 0);

  // End of Start for SubSystem: '<S139>/generation'

  // Start for Atomic SubSystem: '<S141>/generation'

  // Start for S-Function (CB_PWM): '<S142>/PWM' incorporates:
  //   Constant: '<S60>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 6, (tClock) imperix_vf_ctrl_P.clk_id_Value_g,
                       0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 6, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 6, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 6, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 6, 0.5F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 6, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 6, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 6, 0);
  CbPwm_Activate((tPwmOutput) 6, 0);

  // End of Start for SubSystem: '<S141>/generation'

  // Start for Atomic SubSystem: '<S143>/generation'

  // Start for S-Function (CB_PWM): '<S144>/PWM' incorporates:
  //   Constant: '<S60>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 3, (tClock) imperix_vf_ctrl_P.clk_id_Value_g,
                       0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 3, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 3, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 3, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 3, 0.25F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 3, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 3, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 3, 0);
  CbPwm_Activate((tPwmOutput) 3, 0);

  // End of Start for SubSystem: '<S143>/generation'

  // Start for Atomic SubSystem: '<S145>/generation'

  // Start for S-Function (CB_PWM): '<S146>/PWM' incorporates:
  //   Constant: '<S60>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 7, (tClock) imperix_vf_ctrl_P.clk_id_Value_g,
                       0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 7, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 7, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 7, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 7, 0.0F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 7, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 7, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 7, 0);
  CbPwm_Activate((tPwmOutput) 7, 0);

  // End of Start for SubSystem: '<S145>/generation'

  // Start for Atomic SubSystem: '<S151>/generation'

  // Start for S-Function (CB_PWM): '<S152>/PWM' incorporates:
  //   Constant: '<S60>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 8, (tClock) imperix_vf_ctrl_P.clk_id_Value_g,
                       0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 8, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 8, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 8, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 8, 0.75F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 8, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 8, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 8, 0);
  CbPwm_Activate((tPwmOutput) 8, 0);

  // End of Start for SubSystem: '<S151>/generation'

  // Start for Atomic SubSystem: '<S153>/generation'

  // Start for S-Function (CB_PWM): '<S154>/PWM' incorporates:
  //   Constant: '<S60>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 12, (tClock)
                       imperix_vf_ctrl_P.clk_id_Value_g, 0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 12, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 12, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 12, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 12, 0.5F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 12, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 12, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 12, 0);
  CbPwm_Activate((tPwmOutput) 12, 0);

  // End of Start for SubSystem: '<S153>/generation'

  // Start for Atomic SubSystem: '<S155>/generation'

  // Start for S-Function (CB_PWM): '<S156>/PWM' incorporates:
  //   Constant: '<S60>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 9, (tClock) imperix_vf_ctrl_P.clk_id_Value_g,
                       0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 9, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 9, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 9, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 9, 0.25F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 9, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 9, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 9, 0);
  CbPwm_Activate((tPwmOutput) 9, 0);

  // End of Start for SubSystem: '<S155>/generation'

  // Start for Atomic SubSystem: '<S157>/generation'

  // Start for S-Function (CB_PWM): '<S158>/PWM' incorporates:
  //   Constant: '<S60>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 13, (tClock)
                       imperix_vf_ctrl_P.clk_id_Value_g, 0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 13, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 13, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 13, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 13, 0.0F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 13, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 13, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 13, 0);
  CbPwm_Activate((tPwmOutput) 13, 0);

  // End of Start for SubSystem: '<S157>/generation'

  // Start for Atomic SubSystem: '<S163>/generation'

  // Start for S-Function (CB_PWM): '<S164>/PWM' incorporates:
  //   Constant: '<S60>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 10, (tClock)
                       imperix_vf_ctrl_P.clk_id_Value_g, 0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 10, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 10, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 10, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 10, 0.75F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 10, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 10, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 10, 0);
  CbPwm_Activate((tPwmOutput) 10, 0);

  // End of Start for SubSystem: '<S163>/generation'

  // Start for Atomic SubSystem: '<S165>/generation'

  // Start for S-Function (CB_PWM): '<S166>/PWM' incorporates:
  //   Constant: '<S60>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 14, (tClock)
                       imperix_vf_ctrl_P.clk_id_Value_g, 0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 14, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 14, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 14, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 14, 0.5F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 14, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 14, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 14, 0);
  CbPwm_Activate((tPwmOutput) 14, 0);

  // End of Start for SubSystem: '<S165>/generation'

  // Start for Atomic SubSystem: '<S167>/generation'

  // Start for S-Function (CB_PWM): '<S168>/PWM' incorporates:
  //   Constant: '<S60>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 11, (tClock)
                       imperix_vf_ctrl_P.clk_id_Value_g, 0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 11, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 11, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 11, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 11, 0.25F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 11, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 11, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 11, 0);
  CbPwm_Activate((tPwmOutput) 11, 0);

  // End of Start for SubSystem: '<S167>/generation'

  // Start for Atomic SubSystem: '<S169>/generation'

  // Start for S-Function (CB_PWM): '<S170>/PWM' incorporates:
  //   Constant: '<S60>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 15, (tClock)
                       imperix_vf_ctrl_P.clk_id_Value_g, 0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 15, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 15, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 15, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 15, 0.0F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 15, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 15, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 15, 0);
  CbPwm_Activate((tPwmOutput) 15, 0);

  // End of Start for SubSystem: '<S169>/generation'

  // Start for Atomic SubSystem: '<S175>/generation'

  // Start for S-Function (CB_PWM): '<S176>/PWM' incorporates:
  //   Constant: '<S60>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 0, (tClock) imperix_vf_ctrl_P.clk_id_Value_g,
                       1);
  CbPwm_ConfigureOutputMode((tPwmOutput) 0, (tPwmOutMode) 2, 1);
  CbPwm_ConfigureCarrier((tPwmOutput) 0, (tPwmCarrier) 0, 1);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 0, (tPwmRate) 1, 1);
  CbPwm_SetPhase((tPwmOutput) 0, 0.75F, 1);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 0, 1);
  CbPwm_SetDutyCycle((tPwmOutput) 0, 0.0F, 1);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 0, 1);
  CbPwm_Activate((tPwmOutput) 0, 1);

  // End of Start for SubSystem: '<S175>/generation'

  // Start for Atomic SubSystem: '<S177>/generation'

  // Start for S-Function (CB_PWM): '<S178>/PWM' incorporates:
  //   Constant: '<S60>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 4, (tClock) imperix_vf_ctrl_P.clk_id_Value_g,
                       1);
  CbPwm_ConfigureOutputMode((tPwmOutput) 4, (tPwmOutMode) 2, 1);
  CbPwm_ConfigureCarrier((tPwmOutput) 4, (tPwmCarrier) 0, 1);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 4, (tPwmRate) 1, 1);
  CbPwm_SetPhase((tPwmOutput) 4, 0.5F, 1);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 4, 1);
  CbPwm_SetDutyCycle((tPwmOutput) 4, 0.0F, 1);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 4, 1);
  CbPwm_Activate((tPwmOutput) 4, 1);

  // End of Start for SubSystem: '<S177>/generation'

  // Start for Atomic SubSystem: '<S179>/generation'

  // Start for S-Function (CB_PWM): '<S180>/PWM' incorporates:
  //   Constant: '<S60>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 1, (tClock) imperix_vf_ctrl_P.clk_id_Value_g,
                       1);
  CbPwm_ConfigureOutputMode((tPwmOutput) 1, (tPwmOutMode) 2, 1);
  CbPwm_ConfigureCarrier((tPwmOutput) 1, (tPwmCarrier) 0, 1);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 1, (tPwmRate) 1, 1);
  CbPwm_SetPhase((tPwmOutput) 1, 0.25F, 1);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 1, 1);
  CbPwm_SetDutyCycle((tPwmOutput) 1, 0.0F, 1);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 1, 1);
  CbPwm_Activate((tPwmOutput) 1, 1);

  // End of Start for SubSystem: '<S179>/generation'

  // Start for Atomic SubSystem: '<S181>/generation'

  // Start for S-Function (CB_PWM): '<S182>/PWM' incorporates:
  //   Constant: '<S60>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 5, (tClock) imperix_vf_ctrl_P.clk_id_Value_g,
                       1);
  CbPwm_ConfigureOutputMode((tPwmOutput) 5, (tPwmOutMode) 2, 1);
  CbPwm_ConfigureCarrier((tPwmOutput) 5, (tPwmCarrier) 0, 1);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 5, (tPwmRate) 1, 1);
  CbPwm_SetPhase((tPwmOutput) 5, 0.0F, 1);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 5, 1);
  CbPwm_SetDutyCycle((tPwmOutput) 5, 0.0F, 1);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 5, 1);
  CbPwm_Activate((tPwmOutput) 5, 1);

  // End of Start for SubSystem: '<S181>/generation'

  // Start for S-Function (TUNABLE_PARAM): '<S186>/S-Function'
  Vf_slope = 0.0F;                     // Tunable parameter initialization
  ConfigureTunable(&Vf_slope, 0, 0, 0.0F, 1.0F);

  // Start for S-Function (PROBE): '<S85>/S-Function'
  ConfigureProbe(&is1, 0);

  // Start for S-Function (PROBE): '<S87>/S-Function'
  ConfigureProbe(&is2, 0);

  // Start for S-Function (PROBE): '<S91>/S-Function'
  ConfigureProbe(&is3, 0);

  // Start for S-Function (PROBE): '<S103>/S-Function'
  ConfigureProbe(&is4, 0);

  // Start for S-Function (PROBE): '<S105>/S-Function'
  ConfigureProbe(&is5, 0);

  // Start for S-Function (PROBE): '<S107>/S-Function'
  ConfigureProbe(&is6, 0);

  // InitializeConditions for DiscreteIntegrator: '<S1>/Discrete-Time Integrator2' 
  imperix_vf_ctrl_DW.DiscreteTimeIntegrator2_DSTATE =
    imperix_vf_ctrl_P.DiscreteTimeIntegrator2_IC;

  // InitializeConditions for DiscreteIntegrator: '<S1>/Discrete-Time Integrator1' 
  imperix_vf_ctrl_DW.DiscreteTimeIntegrator1_DSTATE =
    imperix_vf_ctrl_P.DiscreteTimeIntegrator1_IC;

  // InitializeConditions for DiscreteIntegrator: '<S1>/Discrete-Time Integrator3' 
  imperix_vf_ctrl_DW.DiscreteTimeIntegrator3_DSTATE =
    imperix_vf_ctrl_P.DiscreteTimeIntegrator3_IC;
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
