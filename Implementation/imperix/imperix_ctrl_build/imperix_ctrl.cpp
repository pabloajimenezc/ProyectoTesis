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
// Model version                  : 19.58
// Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
// C/C++ source code generated on : Wed Jan 14 17:58:57 2026
//
#include "imperix_ctrl.h"
#include <string.h>
#include "imperix_ctrl_private.h"

extern "C"
{

#include "rt_nonfinite.h"

}

#include <math.h>
#include "rtwtypes.h"
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
int16_T* ix_raw_adc_ptr_5_1;
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

// Real-time model
RT_MODEL_imperix_ctrl_T imperix_ctrl_M_ = RT_MODEL_imperix_ctrl_T();
RT_MODEL_imperix_ctrl_T *const imperix_ctrl_M = &imperix_ctrl_M_;
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

// Model step function for TID0
void imperix_ctrl_step0(void)          // Sample time: [0.000166667s, 0.0s]
{
  real_T varargin_1[200];
  real_T A[16];
  real_T M[16];
  real_T tmp[16];
  real_T M_0[8];
  real_T b_a[8];
  real_T rtb_DataTypeConversion1[6];
  real_T rtb_DataTypeConversion2[6];
  real_T rtb_Gain[6];
  real_T rtb_Gain1_e[6];
  real_T rtb_Gain1_o[5];
  real_T xt_est[4];
  real_T rtb_Gain1[3];
  real_T rtb_Gain1_0[2];
  real_T D;
  real_T DataTypeConversion_cf_tmp;
  real_T idx_2;
  real_T rtb_ComplextoMagnitudeAngle_o2;
  real_T rtb_DeadZone;
  real_T rtb_F;
  real_T rtb_Fr_idx_0;
  real_T rtb_Fr_idx_1;
  real_T rtb_Gain3;
  real_T rtb_IntegralGain_n;
  real_T rtb_Integrator_fi;
  real_T rtb_Saturation;
  real_T rtb_Saturation_f;
  real_T rtb_Saturation_h;
  real_T rtb_Saturation_i;
  real_T rtb_Sum1;
  real_T rtb_Sum1_f;
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

  // S-Function (ADC): '<S103>/ADC'
  imperix_ctrl_B.ADC = (float)(*ix_raw_adc_ptr_0_0) * 0.00045776F + 0.0F;

  // S-Function (ADC): '<S105>/ADC'
  imperix_ctrl_B.ADC_m = (float)(*ix_raw_adc_ptr_1_0) * 0.00045776F + 0.0F;

  // S-Function (ADC): '<S95>/ADC'
  imperix_ctrl_B.ADC_c = (float)(*ix_raw_adc_ptr_2_0) * 0.00045776F + 0.0F;

  // S-Function (ADC): '<S83>/ADC'
  imperix_ctrl_B.ADC_n = (float)(*ix_raw_adc_ptr_3_0) * 0.00045776F + 0.0F;

  // S-Function (ADC): '<S97>/ADC'
  imperix_ctrl_B.ADC_g = (float)(*ix_raw_adc_ptr_4_0) * 0.00045776F + 0.0F;

  // S-Function (ADC): '<S99>/ADC'
  imperix_ctrl_B.ADC_p = (float)(*ix_raw_adc_ptr_5_0) * 0.00045776F + 0.0F;

  // DataTypeConversion: '<S1>/Data Type Conversion2'
  rtb_DataTypeConversion2[0] = imperix_ctrl_B.ADC;
  rtb_DataTypeConversion2[1] = imperix_ctrl_B.ADC_m;
  rtb_DataTypeConversion2[2] = imperix_ctrl_B.ADC_c;
  rtb_DataTypeConversion2[3] = imperix_ctrl_B.ADC_n;
  rtb_DataTypeConversion2[4] = imperix_ctrl_B.ADC_g;
  rtb_DataTypeConversion2[5] = imperix_ctrl_B.ADC_p;

  // Gain: '<S1>/Gain'
  rtb_Integrator_fi = 1.0 / imperix_ctrl_P.M2C.is_max;
  for (i = 0; i < 6; i++) {
    rtb_Gain[i] = rtb_Integrator_fi * rtb_DataTypeConversion2[i];
  }

  // End of Gain: '<S1>/Gain'

  // DataTypeConversion: '<S183>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion = static_cast<real32_T>(rtb_Gain[0]);

  // S-Function (PROBE): '<S183>/S-Function'
  is1 = imperix_ctrl_B.DataTypeConversion;

  // DataTypeConversion: '<S185>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion_h = static_cast<real32_T>(rtb_Gain[1]);

  // S-Function (PROBE): '<S185>/S-Function'
  is2 = imperix_ctrl_B.DataTypeConversion_h;

  // S-Function (ADC): '<S91>/ADC'
  imperix_ctrl_B.ADC_o = (float)(*ix_raw_adc_ptr_6_0) * 0.030518F + 0.0F;

  // S-Function (ADC): '<S107>/ADC'
  imperix_ctrl_B.ADC_e = (float)(*ix_raw_adc_ptr_7_0) * 0.030518F + 0.0F;

  // S-Function (ADC): '<S85>/ADC'
  imperix_ctrl_B.ADC_l = (float)(*ix_raw_adc_ptr_0_1) * 0.030518F + 0.0F;

  // S-Function (ADC): '<S93>/ADC'
  imperix_ctrl_B.ADC_nj = (float)(*ix_raw_adc_ptr_1_1) * 0.030518F + 0.0F;

  // S-Function (ADC): '<S87>/ADC'
  imperix_ctrl_B.ADC_mz = (float)(*ix_raw_adc_ptr_2_1) * 0.030518F + 0.0F;

  // S-Function (ADC): '<S89>/ADC'
  imperix_ctrl_B.ADC_k = (float)(*ix_raw_adc_ptr_3_1) * 0.030518F + 0.0F;

  // DataTypeConversion: '<S1>/Data Type Conversion1'
  rtb_DataTypeConversion1[0] = imperix_ctrl_B.ADC_o;
  rtb_DataTypeConversion1[1] = imperix_ctrl_B.ADC_e;
  rtb_DataTypeConversion1[2] = imperix_ctrl_B.ADC_l;
  rtb_DataTypeConversion1[3] = imperix_ctrl_B.ADC_nj;
  rtb_DataTypeConversion1[4] = imperix_ctrl_B.ADC_mz;
  rtb_DataTypeConversion1[5] = imperix_ctrl_B.ADC_k;

  // Gain: '<S1>/Gain1'
  rtb_Integrator_fi = 1.0 / imperix_ctrl_P.M2C.Vc_ref;
  for (i = 0; i < 6; i++) {
    rtb_Gain1_e[i] = rtb_Integrator_fi * rtb_DataTypeConversion1[i];
  }

  // End of Gain: '<S1>/Gain1'

  // DataTypeConversion: '<S187>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion_c = static_cast<real32_T>(rtb_Gain1_e[4]);

  // S-Function (PROBE): '<S187>/S-Function'
  Vc5 = imperix_ctrl_B.DataTypeConversion_c;

  // DataTypeConversion: '<S189>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion_k = static_cast<real32_T>(rtb_Gain1_e[5]);

  // S-Function (PROBE): '<S189>/S-Function'
  Vc6 = imperix_ctrl_B.DataTypeConversion_k;

  // S-Function (ADC): '<S101>/ADC'
  imperix_ctrl_B.ADC_f = (float)(*ix_raw_adc_ptr_4_1) * 0.0061035F + 0.0F;

  // DataTypeConversion: '<S191>/Data Type Conversion' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion36'
  //   Gain: '<S1>/Gain8'

  imperix_ctrl_B.DataTypeConversion_a = static_cast<real32_T>
    (imperix_ctrl_P.Gain8_Gain * imperix_ctrl_B.ADC_f);

  // S-Function (PROBE): '<S191>/S-Function'
  wm = imperix_ctrl_B.DataTypeConversion_a;

  // Gain: '<S64>/Gain1'
  for (i = 0; i < 5; i++) {
    rtb_Gain1_o[i] = 0.0;
  }

  for (i = 0; i < 6; i++) {
    idx_2 = rtb_DataTypeConversion2[i];
    for (idx_1 = 0; idx_1 < 5; idx_1++) {
      rtb_Gain1_o[idx_1] += imperix_ctrl_P.M2C.A[5 * i + idx_1] * idx_2;
    }
  }

  // End of Gain: '<S64>/Gain1'

  // Gain: '<S550>/Gain3' incorporates:
  //   Gain: '<S68>/Gain2'

  rtb_ComplextoMagnitudeAngle_o2 = 0.0;
  D = 0.0;
  rtb_DeadZone = 0.0;
  for (i = 0; i < 3; i++) {
    idx_2 = rtb_Gain1_o[i + 2] * imperix_ctrl_P.Gain2_Gain;
    rtb_ComplextoMagnitudeAngle_o2 += imperix_ctrl_P.Gain3_Gain[3 * i] * idx_2;
    D += imperix_ctrl_P.Gain3_Gain[3 * i + 1] * idx_2;
    rtb_DeadZone += imperix_ctrl_P.Gain3_Gain[3 * i + 2] * idx_2;
  }

  // End of Gain: '<S550>/Gain3'

  // Gain: '<S550>/Gain1'
  rtb_Gain1[0] = imperix_ctrl_P.Gain1_Gain * rtb_ComplextoMagnitudeAngle_o2;
  rtb_Gain1[1] = imperix_ctrl_P.Gain1_Gain * D;
  rtb_Gain1[2] = imperix_ctrl_P.Gain1_Gain * rtb_DeadZone;

  // Gain: '<S1>/Gain3' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion36'

  rtb_Gain3 = imperix_ctrl_P.IM.np * imperix_ctrl_B.ADC_f;

  // S-Function (TUNABLE_PARAM): '<S616>/S-Function'
  imperix_ctrl_B.SFunction = enable_KF;

  // S-Function (TUNABLE_PARAM): '<S620>/S-Function'
  imperix_ctrl_B.SFunction_o = reset_KF;

  // MATLAB Function: '<S1>/Kalman Filter' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double3'
  //   DataTypeConversion: '<S1>/Cast To Double6'
  //   UnitDelay: '<S62>/Unit Delay'

  // MATLAB Function 'Closed_loop_control/Kalman Filter': '<S21>:1'
  // '<S21>:1:14'
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

  // '<S21>:1:14'
  // '<S21>:1:15'
  rtb_im_idx_0 = 0.0;
  rtb_Fr_idx_0 = 0.0;
  rtb_im_idx_1 = 0.0;
  rtb_Fr_idx_1 = 0.0;

  // '<S21>:1:16'
  if (imperix_ctrl_B.SFunction != 0.0F) {
    if (imperix_ctrl_B.SFunction_o != 0.0F) {
      // '<S21>:1:22'
      // '<S21>:1:23'
      imperix_ctrl_DW.xt_est_apriori[0] = imperix_ctrl_P.KF.x1_mu[0];
      imperix_ctrl_DW.xt_est_apriori[1] = imperix_ctrl_P.KF.x1_mu[1];
      imperix_ctrl_DW.xt_est_apriori[2] = imperix_ctrl_P.KF.x1_mu[2];
      imperix_ctrl_DW.xt_est_apriori[3] = imperix_ctrl_P.KF.x1_mu[3];
    }

    // '<S21>:1:29'
    memcpy(&A[0], &imperix_ctrl_P.KF.A[0], sizeof(real_T) << 4U);

    // '<S21>:1:30'
    A[12] = imperix_ctrl_P.KF.A[12] * rtb_Gain3;

    // '<S21>:1:31'
    A[9] = imperix_ctrl_P.KF.A[9] * rtb_Gain3;

    // '<S21>:1:32'
    A[14] = imperix_ctrl_P.KF.A[14] * rtb_Gain3;

    // '<S21>:1:33'
    A[11] = imperix_ctrl_P.KF.A[11] * rtb_Gain3;

    // '<S21>:1:34'
    idx_2 = 0.5 * imperix_ctrl_P.KF.Ts;
    rtb_ComplextoMagnitudeAngle_o2 = imperix_ctrl_DW.Inx[0];
    D = imperix_ctrl_DW.Inx[1];
    rtb_DeadZone = imperix_ctrl_DW.Inx[2];
    rtb_IntegralGain_n = imperix_ctrl_DW.Inx[3];
    for (i = 0; i < 4; i++) {
      M_tmp = i << 2;
      M[M_tmp] = A[M_tmp] * idx_2 + rtb_ComplextoMagnitudeAngle_o2;
      M[M_tmp + 1] = A[M_tmp + 1] * idx_2 + D;
      M[M_tmp + 2] = A[M_tmp + 2] * idx_2 + rtb_DeadZone;
      M[M_tmp + 3] = A[M_tmp + 3] * idx_2 + rtb_IntegralGain_n;
    }

    // '<S21>:1:35'
    // '<S21>:1:43'
    // '<S21>:1:74'
    // '<S21>:1:62'
    for (i = 0; i < 200; i++) {
      varargin_1[i] = fabs(imperix_ctrl_P.KF.we_list[i] - rtb_Gain3);
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
        rtb_ComplextoMagnitudeAngle_o2 = varargin_1[idx_1 - 1];
        if (idx_2 > rtb_ComplextoMagnitudeAngle_o2) {
          idx_2 = rtb_ComplextoMagnitudeAngle_o2;
          M_tmp = idx_1;
        }
      }
    }

    // '<S21>:1:62'
    idx_1 = M_tmp - 1;

    // '<S21>:1:63'
    rtb_Sum_p = rtb_Gain3 - imperix_ctrl_P.KF.we_list[M_tmp - 1];
    if (rtIsNaN(rtb_Sum_p)) {
      idx_2 = (rtNaN);
    } else if (rtb_Sum_p < 0.0) {
      idx_2 = -1.0;
    } else {
      idx_2 = (rtb_Sum_p > 0.0);
    }

    idx_2 += static_cast<real_T>(M_tmp);

    // '<S21>:1:65'
    tmp_5 = rtIsNaN(idx_2);
    if ((M_tmp <= idx_2) || tmp_5) {
      i = M_tmp;
    } else {
      i = static_cast<int32_T>(idx_2);
    }

    if (i == 0) {
      // '<S21>:1:66'
      // '<S21>:1:67'
      idx_1 = M_tmp;

      // '<S21>:1:68'
      idx_2++;
    } else {
      if ((M_tmp >= idx_2) || tmp_5) {
        i = M_tmp;
      } else {
        i = static_cast<int32_T>(idx_2);
      }

      if (i == 201) {
        // '<S21>:1:69'
        // '<S21>:1:70'
        idx_1 = M_tmp - 2;

        // '<S21>:1:71'
        idx_2--;
      }
    }

    // '<S21>:1:74'
    // '<S21>:1:75'
    // '<S21>:1:77'
    D = imperix_ctrl_P.KF.we_list[1] - imperix_ctrl_P.KF.we_list[0];

    // '<S21>:1:78'
    rtb_ComplextoMagnitudeAngle_o2 = fabs(rtb_Gain3 - imperix_ctrl_P.KF.we_list[
      static_cast<int32_T>(idx_2) - 1]) / D;

    // '<S21>:1:79'
    D = fabs(rtb_Gain3 - imperix_ctrl_P.KF.we_list[idx_1]) / D;

    // '<S21>:1:81'
    // '<S21>:1:44'
    rtb_DeadZone = imperix_ctrl_DW.xt_est_apriori[1];
    rtb_IntegralGain_n = imperix_ctrl_DW.xt_est_apriori[0];
    rtb_im_idx_0 = imperix_ctrl_DW.xt_est_apriori[2];
    rtb_Fr_idx_0 = imperix_ctrl_DW.xt_est_apriori[3];
    for (i = 0; i < 2; i++) {
      M_tmp = i << 2;
      b_a_tmp = ((static_cast<int32_T>(idx_2) - 1) << 3) + M_tmp;
      b_a_tmp_0 = (idx_1 << 3) + M_tmp;
      b_a[M_tmp] = imperix_ctrl_P.KF.gain_schedule[b_a_tmp] * D +
        imperix_ctrl_P.KF.gain_schedule[b_a_tmp_0] *
        rtb_ComplextoMagnitudeAngle_o2;
      b_a[M_tmp + 1] = imperix_ctrl_P.KF.gain_schedule[b_a_tmp + 1] * D +
        imperix_ctrl_P.KF.gain_schedule[b_a_tmp_0 + 1] *
        rtb_ComplextoMagnitudeAngle_o2;
      b_a[M_tmp + 2] = imperix_ctrl_P.KF.gain_schedule[b_a_tmp + 2] * D +
        imperix_ctrl_P.KF.gain_schedule[b_a_tmp_0 + 2] *
        rtb_ComplextoMagnitudeAngle_o2;
      b_a[M_tmp + 3] = imperix_ctrl_P.KF.gain_schedule[b_a_tmp + 3] * D +
        imperix_ctrl_P.KF.gain_schedule[b_a_tmp_0 + 3] *
        rtb_ComplextoMagnitudeAngle_o2;
      rtb_Gain1_0[i] = rtb_Gain1[i] - (((imperix_ctrl_DW.C[i + 2] * rtb_DeadZone
        + imperix_ctrl_DW.C[i] * rtb_IntegralGain_n) + imperix_ctrl_DW.C[i + 4] *
        rtb_im_idx_0) + imperix_ctrl_DW.C[i + 6] * rtb_Fr_idx_0);
    }

    // '<S21>:1:47'
    // '<S21>:1:48'
    for (i = 0; i < 4; i++) {
      xt_est[i] = (b_a[i + 4] * rtb_Gain1_0[1] + b_a[i] * rtb_Gain1_0[0]) +
        imperix_ctrl_DW.xt_est_apriori[i];
      idx_2 = 0.0;
      rtb_ComplextoMagnitudeAngle_o2 = 0.0;
      D = 0.0;
      rtb_DeadZone = 0.0;
      for (idx_1 = 0; idx_1 < 4; idx_1++) {
        rtb_IntegralGain_n = M[(i << 2) + idx_1];
        M_tmp = idx_1 << 2;
        idx_2 += A[M_tmp] * imperix_ctrl_P.KF.Ts * rtb_IntegralGain_n;
        rtb_ComplextoMagnitudeAngle_o2 += A[M_tmp + 1] * imperix_ctrl_P.KF.Ts *
          rtb_IntegralGain_n;
        D += A[M_tmp + 2] * imperix_ctrl_P.KF.Ts * rtb_IntegralGain_n;
        rtb_DeadZone += A[M_tmp + 3] * imperix_ctrl_P.KF.Ts * rtb_IntegralGain_n;
      }

      idx_1 = i << 2;
      tmp[idx_1] = idx_2 + imperix_ctrl_DW.Inx[0];
      tmp[idx_1 + 1] = rtb_ComplextoMagnitudeAngle_o2 + imperix_ctrl_DW.Inx[1];
      tmp[idx_1 + 2] = D + imperix_ctrl_DW.Inx[2];
      tmp[idx_1 + 3] = rtb_DeadZone + imperix_ctrl_DW.Inx[3];
    }

    for (i = 0; i < 2; i++) {
      rtb_IntegralGain_n = 0.0;
      rtb_im_idx_0 = 0.0;
      rtb_Fr_idx_0 = 0.0;
      rtb_im_idx_1 = 0.0;
      for (idx_1 = 0; idx_1 < 4; idx_1++) {
        idx_2 = imperix_ctrl_P.KF.B[(i << 2) + idx_1];
        M_tmp = idx_1 << 2;
        rtb_IntegralGain_n += M[M_tmp] * idx_2;
        rtb_im_idx_0 += M[M_tmp + 1] * idx_2;
        rtb_Fr_idx_0 += M[M_tmp + 2] * idx_2;
        rtb_im_idx_1 += M[M_tmp + 3] * idx_2;
      }

      M_tmp = i << 2;
      b_a[M_tmp + 3] = rtb_im_idx_1;
      b_a[M_tmp + 2] = rtb_Fr_idx_0;
      b_a[M_tmp + 1] = rtb_im_idx_0;
      b_a[M_tmp] = rtb_IntegralGain_n;
    }

    for (i = 0; i < 8; i++) {
      M_0[i] = b_a[i] * imperix_ctrl_P.KF.Ts;
    }

    rtb_ComplextoMagnitudeAngle_o2 = 0.0;
    D = 0.0;
    rtb_DeadZone = 0.0;
    rtb_Fr_idx_1 = 0.0;
    for (i = 0; i < 4; i++) {
      idx_2 = xt_est[i];
      idx_1 = i << 2;
      rtb_ComplextoMagnitudeAngle_o2 += tmp[idx_1] * idx_2;
      D += tmp[idx_1 + 1] * idx_2;
      rtb_DeadZone += tmp[idx_1 + 2] * idx_2;
      rtb_Fr_idx_1 += tmp[idx_1 + 3] * idx_2;
    }

    rtb_IntegralGain_n = 0.0;
    rtb_im_idx_0 = 0.0;
    rtb_Fr_idx_0 = 0.0;
    rtb_im_idx_1 = 0.0;
    for (i = 0; i < 2; i++) {
      idx_2 = imperix_ctrl_DW.UnitDelay_DSTATE[i];
      M_tmp = i << 2;
      rtb_IntegralGain_n += M_0[M_tmp] * idx_2;
      rtb_im_idx_0 += M_0[M_tmp + 1] * idx_2;
      rtb_Fr_idx_0 += M_0[M_tmp + 2] * idx_2;
      rtb_im_idx_1 += M_0[M_tmp + 3] * idx_2;
    }

    imperix_ctrl_DW.xt_est_apriori[0] = rtb_ComplextoMagnitudeAngle_o2 +
      rtb_IntegralGain_n;
    imperix_ctrl_DW.xt_est_apriori[1] = D + rtb_im_idx_0;
    imperix_ctrl_DW.xt_est_apriori[2] = rtb_DeadZone + rtb_Fr_idx_0;
    imperix_ctrl_DW.xt_est_apriori[3] = rtb_Fr_idx_1 + rtb_im_idx_1;

    // '<S21>:1:49'
    // '<S21>:1:52'
    // '<S21>:1:53'
    rtb_im_idx_0 = xt_est[0];
    rtb_Fr_idx_0 = xt_est[2];
    rtb_im_idx_1 = xt_est[1];
    rtb_Fr_idx_1 = xt_est[3];

    // '<S21>:1:54'
  } else {
    // '<S21>:1:18'
  }

  // End of MATLAB Function: '<S1>/Kalman Filter'

  // ComplexToMagnitudeAngle: '<S65>/Complex to Magnitude-Angle' incorporates:
  //   RealImagToComplex: '<S65>/Real-Imag to Complex'

  idx_2 = rt_hypotd_snf(rtb_Fr_idx_0, rtb_Fr_idx_1);
  rtb_ComplextoMagnitudeAngle_o2 = rt_atan2d_snf(rtb_Fr_idx_1, rtb_Fr_idx_0);

  // Gain: '<S1>/Gain14' incorporates:
  //   Gain: '<S1>/Gain15'
  //   Gain: '<S1>/Gain19'

  DataTypeConversion_cf_tmp = 1.0 / imperix_ctrl_P.IM.FrN;

  // DataTypeConversion: '<S193>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain14'

  imperix_ctrl_B.DataTypeConversion_cf = static_cast<real32_T>
    (DataTypeConversion_cf_tmp * idx_2);

  // S-Function (PROBE): '<S193>/S-Function'
  Frd = imperix_ctrl_B.DataTypeConversion_cf;

  // S-Function (sdspstatfcns): '<S67>/Mean' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion1'

  D = imperix_ctrl_B.ADC_o;
  for (i = 4; i >= 0; i--) {
    D += rtb_DataTypeConversion1[5 - i];
  }

  D /= 6.0;

  // End of S-Function (sdspstatfcns): '<S67>/Mean'

  // DataTypeConversion: '<S195>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain2'

  imperix_ctrl_B.DataTypeConversion_e = static_cast<real32_T>(rtb_Integrator_fi *
    D);

  // S-Function (PROBE): '<S195>/S-Function'
  Vc_m = imperix_ctrl_B.DataTypeConversion_e;

  // DataTypeConversion: '<S197>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion_p = static_cast<real32_T>(rtb_Gain[2]);

  // S-Function (PROBE): '<S197>/S-Function'
  is3 = imperix_ctrl_B.DataTypeConversion_p;

  // Sum: '<S22>/Sum' incorporates:
  //   Gain: '<S22>/Gain1'
  //   Gain: '<S22>/Gain2'
  //   UnitDelay: '<S22>/Unit Delay1'

  imperix_ctrl_DW.UnitDelay1_DSTATE = (1.0 - imperix_ctrl_P.TEB.alpha) * D +
    imperix_ctrl_P.TEB.alpha * imperix_ctrl_DW.UnitDelay1_DSTATE;

  // DataTypeConversion: '<S199>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain4'
  //   UnitDelay: '<S22>/Unit Delay1'

  imperix_ctrl_B.DataTypeConversion_o = static_cast<real32_T>(rtb_Integrator_fi *
    imperix_ctrl_DW.UnitDelay1_DSTATE);

  // S-Function (PROBE): '<S199>/S-Function'
  Vc_m_f = imperix_ctrl_B.DataTypeConversion_o;

  // RateTransition generated from: '<S1>/Sum6'
  if (imperix_ctrl_M->Timing.RateInteraction.TID0_1 == 1) {
    // RateTransition generated from: '<S1>/Sum6'
    imperix_ctrl_B.TmpRTBAtSum6Inport1 =
      imperix_ctrl_DW.TmpRTBAtSum6Inport1_Buffer0;
  }

  // End of RateTransition generated from: '<S1>/Sum6'

  // Sum: '<S1>/Sum6' incorporates:
  //   UnitDelay: '<S22>/Unit Delay1'

  D = imperix_ctrl_B.TmpRTBAtSum6Inport1 - imperix_ctrl_DW.UnitDelay1_DSTATE;

  // Sum: '<S173>/Sum' incorporates:
  //   DiscreteIntegrator: '<S164>/Integrator'
  //   Gain: '<S169>/Proportional Gain'

  rtb_DeadZone = imperix_ctrl_P.TEB.kp * D + imperix_ctrl_DW.Integrator_DSTATE;

  // Saturate: '<S171>/Saturation'
  if (rtb_DeadZone > imperix_ctrl_P.TEB.u_max) {
    rtb_IntegralGain_n = imperix_ctrl_P.TEB.u_max;
  } else if (rtb_DeadZone < -imperix_ctrl_P.TEB.u_max) {
    rtb_IntegralGain_n = -imperix_ctrl_P.TEB.u_max;
  } else {
    rtb_IntegralGain_n = rtb_DeadZone;
  }

  // End of Saturate: '<S171>/Saturation'

  // Gain: '<S1>/Gain7' incorporates:
  //   Gain: '<S1>/Gain6'

  rtb_Integrator_fi = 1.0 / imperix_ctrl_P.PCC.u_max;

  // DataTypeConversion: '<S201>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain7'

  imperix_ctrl_B.DataTypeConversion_k1 = static_cast<real32_T>(rtb_Integrator_fi
    * rtb_IntegralGain_n);

  // S-Function (PROBE): '<S201>/S-Function'
  iP_r = imperix_ctrl_B.DataTypeConversion_k1;

  // DataTypeConversion: '<S203>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain6'

  imperix_ctrl_B.DataTypeConversion_n = static_cast<real32_T>(rtb_Integrator_fi *
    rtb_Gain1_o[0]);

  // S-Function (PROBE): '<S203>/S-Function'
  iP = imperix_ctrl_B.DataTypeConversion_n;

  // S-Function (TUNABLE_PARAM): '<S610>/S-Function'
  imperix_ctrl_B.SFunction_i = F_ref;

  // S-Function (TUNABLE_PARAM): '<S614>/S-Function'
  imperix_ctrl_B.SFunction_p = w_ref;

  // MATLAB Function: '<S1>/IM references' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double'
  //   DataTypeConversion: '<S1>/Cast To Double1'

  rtb_Saturation = imperix_ctrl_B.SFunction_i;
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

  rtb_Sum_p = imperix_ctrl_B.SFunction_i - imperix_ctrl_DW.F_prev;
  if (fabs(rtb_Sum_p) > imperix_ctrl_DW.dF) {
    // '<S20>:1:21'
    // '<S20>:1:22'
    if (rtIsNaN(rtb_Sum_p)) {
      rtb_Integrator_fi = (rtNaN);
    } else if (rtb_Sum_p < 0.0) {
      rtb_Integrator_fi = -1.0;
    } else {
      rtb_Integrator_fi = (rtb_Sum_p > 0.0);
    }

    rtb_Saturation = rtb_Integrator_fi * imperix_ctrl_DW.dF +
      imperix_ctrl_DW.F_prev;
  }

  rtb_Sum_p = imperix_ctrl_B.SFunction_p - imperix_ctrl_DW.w_prev;
  if (fabs(rtb_Sum_p) > imperix_ctrl_DW.dw) {
    // '<S20>:1:25'
    // '<S20>:1:26'
    if (rtIsNaN(rtb_Sum_p)) {
      rtb_Integrator_fi = (rtNaN);
    } else if (rtb_Sum_p < 0.0) {
      rtb_Integrator_fi = -1.0;
    } else {
      rtb_Integrator_fi = (rtb_Sum_p > 0.0);
    }

    rtb_Sum1_f = rtb_Integrator_fi * imperix_ctrl_DW.dw + imperix_ctrl_DW.w_prev;
  }

  // '<S20>:1:29'
  imperix_ctrl_DW.F_prev = rtb_Saturation;

  // '<S20>:1:30'
  imperix_ctrl_DW.w_prev = rtb_Sum1_f;

  // '<S20>:1:32'
  rtb_F = imperix_ctrl_DW.F_max * rtb_Saturation;

  // '<S20>:1:33'
  rtb_w = imperix_ctrl_DW.w_max * rtb_Sum1_f;

  // End of MATLAB Function: '<S1>/IM references'

  // Sum: '<S60>/Sum1' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion36'

  rtb_Sum1_f = rtb_w - imperix_ctrl_B.ADC_f;

  // S-Function (TUNABLE_PARAM): '<S618>/S-Function'
  imperix_ctrl_B.SFunction_h = reset_PI;

  // DiscreteIntegrator: '<S340>/Integrator' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double5'

  if ((imperix_ctrl_B.SFunction_h != 0.0F) ||
      (imperix_ctrl_DW.Integrator_PrevResetState != 0)) {
    imperix_ctrl_DW.Integrator_DSTATE_d =
      imperix_ctrl_P.SpeedPI_InitialConditionForInte;
  }

  // Sum: '<S349>/Sum' incorporates:
  //   DiscreteIntegrator: '<S340>/Integrator'
  //   Gain: '<S345>/Proportional Gain'

  rtb_Sum_p = imperix_ctrl_P.FOC.kp_w * rtb_Sum1_f +
    imperix_ctrl_DW.Integrator_DSTATE_d;

  // Saturate: '<S347>/Saturation'
  if (rtb_Sum_p > imperix_ctrl_P.FOC.u_max) {
    rtb_Saturation = imperix_ctrl_P.FOC.u_max;
  } else if (rtb_Sum_p < -imperix_ctrl_P.FOC.u_max) {
    rtb_Saturation = -imperix_ctrl_P.FOC.u_max;
  } else {
    rtb_Saturation = rtb_Sum_p;
  }

  // End of Saturate: '<S347>/Saturation'

  // Sum: '<S1>/Sum' incorporates:
  //   Bias: '<S1>/Add Constant1'
  //   Gain: '<S1>/Gain5'
  //   Product: '<S1>/Divide'

  rtb_Gain3 += rtb_Saturation / (rtb_F + imperix_ctrl_P.AddConstant1_Bias) *
    (imperix_ctrl_P.IM.Lm / imperix_ctrl_P.IM.tau_r);

  // Gain: '<S62>/Gain'
  rtb_Integrator_fi = imperix_ctrl_P.IM.Lo * rtb_Gain3;

  // Sum: '<S60>/Sum2'
  idx_2 = rtb_F - idx_2;

  // DiscreteIntegrator: '<S288>/Integrator' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double5'

  if ((imperix_ctrl_B.SFunction_h != 0.0F) ||
      (imperix_ctrl_DW.Integrator_PrevResetState_b != 0)) {
    imperix_ctrl_DW.Integrator_DSTATE_i =
      imperix_ctrl_P.FluxPI_InitialConditionForInteg;
  }

  // Sum: '<S297>/Sum' incorporates:
  //   DiscreteIntegrator: '<S288>/Integrator'
  //   Gain: '<S293>/Proportional Gain'

  rtb_Sum_b = imperix_ctrl_P.FOC.kp_F * idx_2 +
    imperix_ctrl_DW.Integrator_DSTATE_i;

  // Saturate: '<S295>/Saturation'
  if (rtb_Sum_b > imperix_ctrl_P.FOC.u_max) {
    rtb_Saturation_i = imperix_ctrl_P.FOC.u_max;
  } else if (rtb_Sum_b < -imperix_ctrl_P.FOC.u_max) {
    rtb_Saturation_i = -imperix_ctrl_P.FOC.u_max;
  } else {
    rtb_Saturation_i = rtb_Sum_b;
  }

  // End of Saturate: '<S295>/Saturation'

  // RelationalOperator: '<S551>/Compare' incorporates:
  //   Constant: '<S549>/Constant'
  //   Constant: '<S551>/Constant'

  rtb_Compare = (imperix_ctrl_P.AlphaBetaZerotodq0_Alignment ==
                 imperix_ctrl_P.CompareToConstant_const);

  // Outputs for Enabled SubSystem: '<S549>/Subsystem1' incorporates:
  //   EnablePort: '<S554>/Enable'

  if (rtb_Compare > 0) {
    // Fcn: '<S554>/Fcn' incorporates:
    //   Fcn: '<S554>/Fcn1'

    rtb_Sum6 = sin(rtb_ComplextoMagnitudeAngle_o2);
    rtb_Sum_m = cos(rtb_ComplextoMagnitudeAngle_o2);

    // Fcn: '<S554>/Fcn'
    imperix_ctrl_B.Fcn = rtb_Gain1[0] * rtb_Sum_m + rtb_Gain1[1] * rtb_Sum6;

    // Fcn: '<S554>/Fcn1'
    imperix_ctrl_B.Fcn1 = -rtb_Gain1[0] * rtb_Sum6 + rtb_Gain1[1] * rtb_Sum_m;
  }

  // End of Outputs for SubSystem: '<S549>/Subsystem1'

  // Outputs for Enabled SubSystem: '<S549>/Subsystem - pi//2 delay' incorporates:
  //   EnablePort: '<S553>/Enable'

  // RelationalOperator: '<S552>/Compare' incorporates:
  //   Constant: '<S549>/Constant'
  //   Constant: '<S552>/Constant'

  if (imperix_ctrl_P.AlphaBetaZerotodq0_Alignment ==
      imperix_ctrl_P.CompareToConstant1_const) {
    // Fcn: '<S553>/Fcn' incorporates:
    //   Fcn: '<S553>/Fcn1'

    rtb_Sum6 = cos(rtb_ComplextoMagnitudeAngle_o2);
    rtb_Sum_m = sin(rtb_ComplextoMagnitudeAngle_o2);

    // Fcn: '<S553>/Fcn'
    imperix_ctrl_B.Fcn_c = rtb_Gain1[0] * rtb_Sum_m - rtb_Gain1[1] * rtb_Sum6;

    // Fcn: '<S553>/Fcn1'
    imperix_ctrl_B.Fcn1_p = rtb_Gain1[0] * rtb_Sum6 + rtb_Gain1[1] * rtb_Sum_m;
  }

  // End of RelationalOperator: '<S552>/Compare'
  // End of Outputs for SubSystem: '<S549>/Subsystem - pi//2 delay'

  // Switch: '<S549>/Switch'
  if (rtb_Compare != 0) {
    rtb_Switch_g_idx_0 = imperix_ctrl_B.Fcn;
    rtb_Switch_g_idx_1 = imperix_ctrl_B.Fcn1;
  } else {
    rtb_Switch_g_idx_0 = imperix_ctrl_B.Fcn_c;
    rtb_Switch_g_idx_1 = imperix_ctrl_B.Fcn1_p;
  }

  // End of Switch: '<S549>/Switch'

  // Sum: '<S62>/Sum6'
  rtb_Sum6 = rtb_Saturation_i - rtb_Switch_g_idx_0;

  // DiscreteIntegrator: '<S408>/Integrator' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double5'

  if ((imperix_ctrl_B.SFunction_h != 0.0F) ||
      (imperix_ctrl_DW.Integrator_PrevResetState_n != 0)) {
    imperix_ctrl_DW.Integrator_DSTATE_j =
      imperix_ctrl_P.MCCPId_InitialConditionForInteg;
  }

  // Sum: '<S417>/Sum' incorporates:
  //   DiscreteIntegrator: '<S408>/Integrator'
  //   Gain: '<S413>/Proportional Gain'

  rtb_Sum_m = imperix_ctrl_P.MCC.kp * rtb_Sum6 +
    imperix_ctrl_DW.Integrator_DSTATE_j;

  // Saturate: '<S415>/Saturation'
  if (rtb_Sum_m > imperix_ctrl_P.MCC.u_max) {
    rtb_Saturation_h = imperix_ctrl_P.MCC.u_max;
  } else if (rtb_Sum_m < -imperix_ctrl_P.MCC.u_max) {
    rtb_Saturation_h = -imperix_ctrl_P.MCC.u_max;
  } else {
    rtb_Saturation_h = rtb_Sum_m;
  }

  // End of Saturate: '<S415>/Saturation'

  // Sum: '<S62>/Sum' incorporates:
  //   Product: '<S62>/Product1'

  rtb_Sum_j = rtb_Saturation_h - rtb_Integrator_fi * rtb_Saturation;

  // Sum: '<S62>/Sum8'
  rtb_Sum8 = rtb_Saturation - rtb_Switch_g_idx_1;

  // DiscreteIntegrator: '<S460>/Integrator' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double5'

  if ((imperix_ctrl_B.SFunction_h != 0.0F) ||
      (imperix_ctrl_DW.Integrator_PrevResetState_i != 0)) {
    imperix_ctrl_DW.Integrator_DSTATE_e =
      imperix_ctrl_P.MCCPIq_InitialConditionForInteg;
  }

  // Sum: '<S469>/Sum' incorporates:
  //   DiscreteIntegrator: '<S460>/Integrator'
  //   Gain: '<S465>/Proportional Gain'

  rtb_Sum_h = imperix_ctrl_P.MCC.kp * rtb_Sum8 +
    imperix_ctrl_DW.Integrator_DSTATE_e;

  // Saturate: '<S467>/Saturation'
  if (rtb_Sum_h > imperix_ctrl_P.MCC.u_max) {
    rtb_Saturation_f = imperix_ctrl_P.MCC.u_max;
  } else if (rtb_Sum_h < -imperix_ctrl_P.MCC.u_max) {
    rtb_Saturation_f = -imperix_ctrl_P.MCC.u_max;
  } else {
    rtb_Saturation_f = rtb_Sum_h;
  }

  // End of Saturate: '<S467>/Saturation'

  // Sum: '<S62>/Sum1' incorporates:
  //   Product: '<S62>/Product'

  rtb_Sum1 = rtb_Saturation_i * rtb_Integrator_fi + rtb_Saturation_f;

  // Gain: '<S1>/Gain16'
  rtb_Integrator_fi = 1.0 / imperix_ctrl_P.MCC.u_max;

  // DataTypeConversion: '<S205>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain16'

  imperix_ctrl_B.DataTypeConversion_i = static_cast<real32_T>(rtb_Integrator_fi *
    rtb_Sum1);

  // S-Function (PROBE): '<S205>/S-Function'
  vm_q = imperix_ctrl_B.DataTypeConversion_i;

  // DataTypeConversion: '<S207>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain15'

  imperix_ctrl_B.DataTypeConversion_l = static_cast<real32_T>
    (DataTypeConversion_cf_tmp * rtb_F);

  // S-Function (PROBE): '<S207>/S-Function'
  Frd_r = imperix_ctrl_B.DataTypeConversion_l;

  // DataTypeConversion: '<S209>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain9'

  imperix_ctrl_B.DataTypeConversion_hg = static_cast<real32_T>
    (imperix_ctrl_P.Gain9_Gain * rtb_w);

  // S-Function (PROBE): '<S209>/S-Function'
  wm_r = imperix_ctrl_B.DataTypeConversion_hg;

  // Gain: '<S1>/Gain12' incorporates:
  //   Gain: '<S1>/Gain13'

  rtb_F = 1.0 / imperix_ctrl_P.IM.isdN;

  // DataTypeConversion: '<S211>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain12'

  imperix_ctrl_B.DataTypeConversion_as = static_cast<real32_T>(rtb_F *
    rtb_Switch_g_idx_0);

  // S-Function (PROBE): '<S211>/S-Function'
  im_d = imperix_ctrl_B.DataTypeConversion_as;

  // DataTypeConversion: '<S213>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain13'

  imperix_ctrl_B.DataTypeConversion_f = static_cast<real32_T>(rtb_F *
    rtb_Saturation_i);

  // S-Function (PROBE): '<S213>/S-Function'
  imd_r = imperix_ctrl_B.DataTypeConversion_f;

  // Gain: '<S1>/Gain10' incorporates:
  //   Gain: '<S1>/Gain11'

  rtb_F = 1.0 / imperix_ctrl_P.IM.isqN;

  // DataTypeConversion: '<S215>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain10'

  imperix_ctrl_B.DataTypeConversion_il = static_cast<real32_T>(rtb_F *
    rtb_Switch_g_idx_1);

  // S-Function (PROBE): '<S215>/S-Function'
  im_q = imperix_ctrl_B.DataTypeConversion_il;

  // DataTypeConversion: '<S217>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain11'

  imperix_ctrl_B.DataTypeConversion_ep = static_cast<real32_T>(rtb_F *
    rtb_Saturation);

  // S-Function (PROBE): '<S217>/S-Function'
  imq_r = imperix_ctrl_B.DataTypeConversion_ep;

  // DataTypeConversion: '<S219>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion_ly = static_cast<real32_T>(rtb_Gain[3]);

  // S-Function (PROBE): '<S219>/S-Function'
  is4 = imperix_ctrl_B.DataTypeConversion_ly;

  // DataTypeConversion: '<S221>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain16'

  imperix_ctrl_B.DataTypeConversion_hm = static_cast<real32_T>(rtb_Integrator_fi
    * rtb_Sum_j);

  // S-Function (PROBE): '<S221>/S-Function'
  vm_d = imperix_ctrl_B.DataTypeConversion_hm;

  // Gain: '<S1>/Gain17'
  rtb_Integrator_fi = 1.0 / (imperix_ctrl_P.IM.IN * 1.4142135623730951);

  // DataTypeConversion: '<S223>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain17'

  imperix_ctrl_B.DataTypeConversion_fv = static_cast<real32_T>(rtb_Integrator_fi
    * rtb_Gain1[1]);

  // S-Function (PROBE): '<S223>/S-Function'
  im_bet = imperix_ctrl_B.DataTypeConversion_fv;

  // DataTypeConversion: '<S225>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain17'

  imperix_ctrl_B.DataTypeConversion_nx = static_cast<real32_T>(rtb_Integrator_fi
    * rtb_Gain1[0]);

  // S-Function (PROBE): '<S225>/S-Function'
  im_alp = imperix_ctrl_B.DataTypeConversion_nx;

  // DataTypeConversion: '<S227>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain18'

  imperix_ctrl_B.DataTypeConversion_b = static_cast<real32_T>(rtb_Integrator_fi *
    rtb_im_idx_1);

  // S-Function (PROBE): '<S227>/S-Function'
  im_bet_KF = imperix_ctrl_B.DataTypeConversion_b;

  // DataTypeConversion: '<S229>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain18'

  imperix_ctrl_B.DataTypeConversion_of = static_cast<real32_T>(rtb_Integrator_fi
    * rtb_im_idx_0);

  // S-Function (PROBE): '<S229>/S-Function'
  im_alp_KF = imperix_ctrl_B.DataTypeConversion_of;

  // DataTypeConversion: '<S231>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain19'

  imperix_ctrl_B.DataTypeConversion_ch = static_cast<real32_T>
    (DataTypeConversion_cf_tmp * rtb_Fr_idx_1);

  // S-Function (PROBE): '<S231>/S-Function'
  Fr_bet = imperix_ctrl_B.DataTypeConversion_ch;

  // DataTypeConversion: '<S233>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain19'

  imperix_ctrl_B.DataTypeConversion_cz = static_cast<real32_T>
    (DataTypeConversion_cf_tmp * rtb_Fr_idx_0);

  // S-Function (PROBE): '<S233>/S-Function'
  Fr_alp = imperix_ctrl_B.DataTypeConversion_cz;

  // DataTypeConversion: '<S235>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain20'

  imperix_ctrl_B.DataTypeConversion_ci = static_cast<real32_T>
    (imperix_ctrl_P.Gain20_Gain * rtb_Gain3);

  // S-Function (PROBE): '<S235>/S-Function'
  ws = imperix_ctrl_B.DataTypeConversion_ci;

  // DataTypeConversion: '<S237>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain21'

  imperix_ctrl_B.DataTypeConversion_k2 = static_cast<real32_T>
    (imperix_ctrl_P.Gain21_Gain * rtb_ComplextoMagnitudeAngle_o2);

  // S-Function (PROBE): '<S237>/S-Function'
  gF = imperix_ctrl_B.DataTypeConversion_k2;

  // S-Function (ADC): '<S81>/ADC'
  imperix_ctrl_B.ADC_h = (float)(*ix_raw_adc_ptr_5_1) * 6.1035E-5F + 0.0F;

  // DataTypeConversion: '<S239>/Data Type Conversion' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion3'

  imperix_ctrl_B.DataTypeConversion_nc = imperix_ctrl_B.ADC_h;

  // S-Function (PROBE): '<S239>/S-Function'
  Te = imperix_ctrl_B.DataTypeConversion_nc;

  // DataTypeConversion: '<S241>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion_lx = static_cast<real32_T>(rtb_Gain[4]);

  // S-Function (PROBE): '<S241>/S-Function'
  is5 = imperix_ctrl_B.DataTypeConversion_lx;

  // DataTypeConversion: '<S243>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion_kf = static_cast<real32_T>(rtb_Gain[5]);

  // S-Function (PROBE): '<S243>/S-Function'
  is6 = imperix_ctrl_B.DataTypeConversion_kf;

  // DataTypeConversion: '<S245>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion_ex = static_cast<real32_T>(rtb_Gain1_e[0]);

  // S-Function (PROBE): '<S245>/S-Function'
  Vc1 = imperix_ctrl_B.DataTypeConversion_ex;

  // DataTypeConversion: '<S247>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion_p2 = static_cast<real32_T>(rtb_Gain1_e[1]);

  // S-Function (PROBE): '<S247>/S-Function'
  Vc2 = imperix_ctrl_B.DataTypeConversion_p2;

  // DataTypeConversion: '<S249>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion_ok = static_cast<real32_T>(rtb_Gain1_e[2]);

  // S-Function (PROBE): '<S249>/S-Function'
  Vc3 = imperix_ctrl_B.DataTypeConversion_ok;

  // DataTypeConversion: '<S251>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion_j = static_cast<real32_T>(rtb_Gain1_e[3]);

  // S-Function (PROBE): '<S251>/S-Function'
  Vc4 = imperix_ctrl_B.DataTypeConversion_j;

  // Saturate: '<S109>/Saturation'
  if (imperix_ctrl_P.Saturation_UpperSat < 0.0F) {
    // Saturate: '<S109>/Saturation'
    imperix_ctrl_B.Saturation = imperix_ctrl_P.Saturation_UpperSat;
  } else if (imperix_ctrl_P.Saturation_LowerSat > 0.0F) {
    // Saturate: '<S109>/Saturation'
    imperix_ctrl_B.Saturation = imperix_ctrl_P.Saturation_LowerSat;
  } else {
    // Saturate: '<S109>/Saturation'
    imperix_ctrl_B.Saturation = 0.0F;
  }

  // End of Saturate: '<S109>/Saturation'
  // S-Function (TUNABLE_PARAM): '<S612>/S-Function'
  imperix_ctrl_B.SFunction_c = enable_FP;

  // S-Function (TUNABLE_PARAM): '<S122>/S-Function'
  imperix_ctrl_B.SFunction_a = V_mag;

  // Bias: '<S18>/Bias1' incorporates:
  //   Gain: '<S18>/Gain23'

  rtb_Bias1 = imperix_ctrl_P.Gain23_Gain * imperix_ctrl_B.SFunction_a +
    imperix_ctrl_P.Bias1_Bias;

  // Product: '<S18>/Product2' incorporates:
  //   DiscreteIntegrator: '<S18>/Discrete-Time Integrator1'
  //   Fcn: '<S18>/Fcn3'
  //   Fcn: '<S18>/Fcn4'
  //   Fcn: '<S18>/Fcn5'

  rtb_Product2[0] = rtb_Bias1 * static_cast<real32_T>(cos(static_cast<real_T>
    (imperix_ctrl_DW.DiscreteTimeIntegrator1_DSTATE)));
  rtb_Product2[1] = static_cast<real32_T>(cos(static_cast<real_T>
    (imperix_ctrl_DW.DiscreteTimeIntegrator1_DSTATE - 2.09439516F))) * rtb_Bias1;
  rtb_Product2[2] = static_cast<real32_T>(cos(static_cast<real_T>
    (imperix_ctrl_DW.DiscreteTimeIntegrator1_DSTATE + 2.09439516F))) * rtb_Bias1;

  // Gain: '<S114>/Gain3'
  rtb_Bias1 = 0.0F;
  tmp_1 = 0.0F;
  tmp_2 = 0.0F;
  for (i = 0; i < 3; i++) {
    tmp_0 = rtb_Product2[i];
    rtb_Bias1 += imperix_ctrl_P.Gain3_Gain_p[3 * i] * tmp_0;
    tmp_1 += imperix_ctrl_P.Gain3_Gain_p[3 * i + 1] * tmp_0;
    tmp_2 += imperix_ctrl_P.Gain3_Gain_p[3 * i + 2] * tmp_0;
  }

  // End of Gain: '<S114>/Gain3'

  // Gain: '<S114>/Gain1'
  imperix_ctrl_B.Gain1[0] = imperix_ctrl_P.Gain1_Gain_k * rtb_Bias1;
  imperix_ctrl_B.Gain1[1] = imperix_ctrl_P.Gain1_Gain_k * tmp_1;
  imperix_ctrl_B.Gain1[2] = imperix_ctrl_P.Gain1_Gain_k * tmp_2;

  // S-Function (PROBE): '<S116>/S-Function'
  v_alp = imperix_ctrl_B.Gain1[0];

  // S-Function (PROBE): '<S118>/S-Function'
  v_bet = imperix_ctrl_B.Gain1[1];

  // S-Function (TUNABLE_PARAM): '<S120>/S-Function'
  imperix_ctrl_B.SFunction_e = f_mag;

  // Sum: '<S18>/Sum1' incorporates:
  //   Constant: '<S18>/Constant3'

  rtb_DataTypeConversion2[0] = imperix_ctrl_P.Constant3_Value - rtb_Product2[0];

  // Sum: '<S18>/Sum2' incorporates:
  //   Constant: '<S18>/Constant3'
  //   Sum: '<S18>/Sum1'

  rtb_DataTypeConversion2[3] = (0.0 - imperix_ctrl_P.Constant3_Value) -
    rtb_Product2[0];

  // Sum: '<S18>/Sum1' incorporates:
  //   Constant: '<S18>/Constant3'

  rtb_DataTypeConversion2[1] = imperix_ctrl_P.Constant3_Value - rtb_Product2[1];

  // Sum: '<S18>/Sum2' incorporates:
  //   Constant: '<S18>/Constant3'
  //   Sum: '<S18>/Sum1'

  rtb_DataTypeConversion2[4] = (0.0 - imperix_ctrl_P.Constant3_Value) -
    rtb_Product2[1];

  // Sum: '<S18>/Sum1' incorporates:
  //   Constant: '<S18>/Constant3'

  rtb_DataTypeConversion2[2] = imperix_ctrl_P.Constant3_Value - rtb_Product2[2];

  // Sum: '<S18>/Sum2' incorporates:
  //   Constant: '<S18>/Constant3'
  //   Sum: '<S18>/Sum1'

  rtb_DataTypeConversion2[5] = (0.0 - imperix_ctrl_P.Constant3_Value) -
    rtb_Product2[2];

  // Sum: '<S66>/Sum3'
  rtb_IntegralGain_n -= rtb_Gain1_o[0];

  // Sum: '<S540>/Sum' incorporates:
  //   DiscreteIntegrator: '<S531>/Integrator'
  //   Gain: '<S536>/Proportional Gain'

  rtb_Gain3 = imperix_ctrl_P.PCC.kp * rtb_IntegralGain_n +
    imperix_ctrl_DW.Integrator_DSTATE_p;

  // RelationalOperator: '<S478>/Compare' incorporates:
  //   Constant: '<S373>/Constant'
  //   Constant: '<S478>/Constant'

  rtb_Compare = (imperix_ctrl_P.dq0toAlphaBetaZero_Alignment ==
                 imperix_ctrl_P.CompareToConstant_const_l);

  // Outputs for Enabled SubSystem: '<S373>/Subsystem1' incorporates:
  //   EnablePort: '<S481>/Enable'

  if (rtb_Compare > 0) {
    // Fcn: '<S481>/Fcn' incorporates:
    //   Fcn: '<S481>/Fcn1'

    rtb_Integrator_fi = sin(rtb_ComplextoMagnitudeAngle_o2);
    rtb_im_idx_0 = cos(rtb_ComplextoMagnitudeAngle_o2);

    // Fcn: '<S481>/Fcn'
    imperix_ctrl_B.Fcn_b = rtb_Sum_j * rtb_im_idx_0 - rtb_Sum1 *
      rtb_Integrator_fi;

    // Fcn: '<S481>/Fcn1'
    imperix_ctrl_B.Fcn1_i = rtb_Sum_j * rtb_Integrator_fi + rtb_Sum1 *
      rtb_im_idx_0;
  }

  // End of Outputs for SubSystem: '<S373>/Subsystem1'

  // Outputs for Enabled SubSystem: '<S373>/Subsystem - pi//2 delay' incorporates:
  //   EnablePort: '<S480>/Enable'

  // RelationalOperator: '<S479>/Compare' incorporates:
  //   Constant: '<S373>/Constant'
  //   Constant: '<S479>/Constant'

  if (imperix_ctrl_P.dq0toAlphaBetaZero_Alignment ==
      imperix_ctrl_P.CompareToConstant1_const_l) {
    // Fcn: '<S480>/Fcn' incorporates:
    //   Fcn: '<S480>/Fcn1'

    rtb_Integrator_fi = cos(rtb_ComplextoMagnitudeAngle_o2);
    rtb_ComplextoMagnitudeAngle_o2 = sin(rtb_ComplextoMagnitudeAngle_o2);

    // Fcn: '<S480>/Fcn'
    imperix_ctrl_B.Fcn_d = rtb_Sum_j * rtb_ComplextoMagnitudeAngle_o2 + rtb_Sum1
      * rtb_Integrator_fi;

    // Fcn: '<S480>/Fcn1'
    imperix_ctrl_B.Fcn1_d = -rtb_Sum_j * rtb_Integrator_fi + rtb_Sum1 *
      rtb_ComplextoMagnitudeAngle_o2;
  }

  // End of RelationalOperator: '<S479>/Compare'
  // End of Outputs for SubSystem: '<S373>/Subsystem - pi//2 delay'

  // Switch: '<S373>/Switch' incorporates:
  //   UnitDelay: '<S62>/Unit Delay'

  if (rtb_Compare != 0) {
    imperix_ctrl_DW.UnitDelay_DSTATE[0] = imperix_ctrl_B.Fcn_b;
    imperix_ctrl_DW.UnitDelay_DSTATE[1] = imperix_ctrl_B.Fcn1_i;
  } else {
    imperix_ctrl_DW.UnitDelay_DSTATE[0] = imperix_ctrl_B.Fcn_d;
    imperix_ctrl_DW.UnitDelay_DSTATE[1] = imperix_ctrl_B.Fcn1_d;
  }

  // End of Switch: '<S373>/Switch'
  // MATLAB Function: '<S1>/Modulation index'
  // MATLAB Function 'Closed_loop_control/Modulation index': '<S23>:1'
  // '<S23>:1:10'
  // '<S23>:1:4'
  rtb_DataTypeConversion2[3] = -rtb_DataTypeConversion2[3];
  rtb_DataTypeConversion2[4] = -rtb_DataTypeConversion2[4];
  rtb_DataTypeConversion2[5] = -rtb_DataTypeConversion2[5];

  // '<S23>:1:10'
  for (i = 0; i < 6; i++) {
    rtb_Integrator_fi = rtb_DataTypeConversion2[i] / 520.0;
    if (!(rtb_Integrator_fi >= 0.0)) {
      rtb_Integrator_fi = 0.0;
    }

    if (rtb_Integrator_fi <= 1.0) {
      rtb_DataTypeConversion2[i] = rtb_Integrator_fi;
    } else {
      rtb_DataTypeConversion2[i] = 1.0;
    }
  }

  // End of MATLAB Function: '<S1>/Modulation index'

  // DeadZone: '<S156>/DeadZone'
  if (rtb_DeadZone > imperix_ctrl_P.TEB.u_max) {
    rtb_DeadZone -= imperix_ctrl_P.TEB.u_max;
  } else if (rtb_DeadZone >= -imperix_ctrl_P.TEB.u_max) {
    rtb_DeadZone = 0.0;
  } else {
    rtb_DeadZone -= -imperix_ctrl_P.TEB.u_max;
  }

  // End of DeadZone: '<S156>/DeadZone'

  // Gain: '<S161>/Integral Gain'
  D *= imperix_ctrl_P.TEB.ki;

  // DataTypeConversion: '<S358>/Data Type Conversion1'
  imperix_ctrl_B.DataTypeConversion1 = static_cast<real32_T>
    (rtb_DataTypeConversion2[1]);

  // DataTypeConversion: '<S358>/Data Type Conversion2' incorporates:
  //   Constant: '<S358>/phase'

  imperix_ctrl_B.DataTypeConversion2 = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value);

  // DataTypeConversion: '<S358>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'
  //   DataTypeConversion: '<S359>/Data Type Conversion3'
  //   DataTypeConversion: '<S360>/Data Type Conversion3'
  //   DataTypeConversion: '<S361>/Data Type Conversion3'
  //   DataTypeConversion: '<S482>/Data Type Conversion3'
  //   DataTypeConversion: '<S483>/Data Type Conversion3'
  //   DataTypeConversion: '<S484>/Data Type Conversion3'
  //   DataTypeConversion: '<S485>/Data Type Conversion3'
  //   DataTypeConversion: '<S555>/Data Type Conversion3'
  //   DataTypeConversion: '<S556>/Data Type Conversion3'
  //   DataTypeConversion: '<S557>/Data Type Conversion3'
  //   DataTypeConversion: '<S558>/Data Type Conversion3'
  //   DataTypeConversion: '<S567>/Data Type Conversion3'
  //   DataTypeConversion: '<S568>/Data Type Conversion3'
  //   DataTypeConversion: '<S569>/Data Type Conversion3'
  //   DataTypeConversion: '<S570>/Data Type Conversion3'
  //   DataTypeConversion: '<S579>/Data Type Conversion3'
  //   DataTypeConversion: '<S580>/Data Type Conversion3'
  //   DataTypeConversion: '<S581>/Data Type Conversion3'
  //   DataTypeConversion: '<S582>/Data Type Conversion3'
  //   DataTypeConversion: '<S597>/Data Type Conversion3'
  //   DataTypeConversion: '<S598>/Data Type Conversion3'
  //   DataTypeConversion: '<S599>/Data Type Conversion3'
  //   DataTypeConversion: '<S600>/Data Type Conversion3'

  imperix_ctrl_B.DataTypeConversion3_bm = (imperix_ctrl_B.SFunction_c != 0.0F);

  // DataTypeConversion: '<S358>/Data Type Conversion3'
  imperix_ctrl_B.DataTypeConversion3 = imperix_ctrl_B.DataTypeConversion3_bm;

  // Outputs for Atomic SubSystem: '<S362>/generation'
  // S-Function (CB_PWM): '<S363>/PWM' incorporates:
  //   Constant: '<S109>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3 > 0.0) {
    CbPwm_Activate((tPwmOutput) 4, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 4, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 4, imperix_ctrl_B.DataTypeConversion1, 0);

  // End of Outputs for SubSystem: '<S362>/generation'

  // DataTypeConversion: '<S359>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S358>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_p = static_cast<real32_T>
    (rtb_DataTypeConversion2[1]);

  // DataTypeConversion: '<S359>/Data Type Conversion2' incorporates:
  //   Constant: '<S359>/phase'

  imperix_ctrl_B.DataTypeConversion2_i = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_o);

  // DataTypeConversion: '<S359>/Data Type Conversion3'
  imperix_ctrl_B.DataTypeConversion3_g = imperix_ctrl_B.DataTypeConversion3_bm;

  // Outputs for Atomic SubSystem: '<S364>/generation'
  // S-Function (CB_PWM): '<S365>/PWM' incorporates:
  //   Constant: '<S109>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_g > 0.0) {
    CbPwm_Activate((tPwmOutput) 5, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 5, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 5, imperix_ctrl_B.DataTypeConversion1_p, 0);

  // End of Outputs for SubSystem: '<S364>/generation'

  // DataTypeConversion: '<S360>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S358>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_h = static_cast<real32_T>
    (rtb_DataTypeConversion2[1]);

  // DataTypeConversion: '<S360>/Data Type Conversion2' incorporates:
  //   Constant: '<S360>/phase'

  imperix_ctrl_B.DataTypeConversion2_b = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_l);

  // DataTypeConversion: '<S360>/Data Type Conversion3'
  imperix_ctrl_B.DataTypeConversion3_i = imperix_ctrl_B.DataTypeConversion3_bm;

  // Outputs for Atomic SubSystem: '<S366>/generation'
  // S-Function (CB_PWM): '<S367>/PWM' incorporates:
  //   Constant: '<S109>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_i > 0.0) {
    CbPwm_Activate((tPwmOutput) 6, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 6, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 6, imperix_ctrl_B.DataTypeConversion1_h, 0);

  // End of Outputs for SubSystem: '<S366>/generation'

  // DataTypeConversion: '<S361>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S358>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_f = static_cast<real32_T>
    (rtb_DataTypeConversion2[1]);

  // DataTypeConversion: '<S361>/Data Type Conversion2' incorporates:
  //   Constant: '<S361>/phase'

  imperix_ctrl_B.DataTypeConversion2_p = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_oo);

  // DataTypeConversion: '<S361>/Data Type Conversion3'
  imperix_ctrl_B.DataTypeConversion3_gf = imperix_ctrl_B.DataTypeConversion3_bm;

  // Outputs for Atomic SubSystem: '<S368>/generation'
  // S-Function (CB_PWM): '<S369>/PWM' incorporates:
  //   Constant: '<S109>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_gf > 0.0) {
    CbPwm_Activate((tPwmOutput) 7, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 7, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 7, imperix_ctrl_B.DataTypeConversion1_f, 0);

  // End of Outputs for SubSystem: '<S368>/generation'

  // DataTypeConversion: '<S482>/Data Type Conversion1'
  imperix_ctrl_B.DataTypeConversion1_b = static_cast<real32_T>
    (rtb_DataTypeConversion2[2]);

  // DataTypeConversion: '<S482>/Data Type Conversion2' incorporates:
  //   Constant: '<S482>/phase'

  imperix_ctrl_B.DataTypeConversion2_d = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_p);

  // DataTypeConversion: '<S482>/Data Type Conversion3'
  imperix_ctrl_B.DataTypeConversion3_gp = imperix_ctrl_B.DataTypeConversion3_bm;

  // Outputs for Atomic SubSystem: '<S486>/generation'
  // S-Function (CB_PWM): '<S487>/PWM' incorporates:
  //   Constant: '<S109>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_gp > 0.0) {
    CbPwm_Activate((tPwmOutput) 8, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 8, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 8, imperix_ctrl_B.DataTypeConversion1_b, 0);

  // End of Outputs for SubSystem: '<S486>/generation'

  // DataTypeConversion: '<S483>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S482>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_e = static_cast<real32_T>
    (rtb_DataTypeConversion2[2]);

  // DataTypeConversion: '<S483>/Data Type Conversion2' incorporates:
  //   Constant: '<S483>/phase'

  imperix_ctrl_B.DataTypeConversion2_o = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_pr);

  // DataTypeConversion: '<S483>/Data Type Conversion3'
  imperix_ctrl_B.DataTypeConversion3_gl = imperix_ctrl_B.DataTypeConversion3_bm;

  // Outputs for Atomic SubSystem: '<S488>/generation'
  // S-Function (CB_PWM): '<S489>/PWM' incorporates:
  //   Constant: '<S109>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_gl > 0.0) {
    CbPwm_Activate((tPwmOutput) 9, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 9, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 9, imperix_ctrl_B.DataTypeConversion1_e, 0);

  // End of Outputs for SubSystem: '<S488>/generation'

  // DataTypeConversion: '<S484>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S482>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_po = static_cast<real32_T>
    (rtb_DataTypeConversion2[2]);

  // DataTypeConversion: '<S484>/Data Type Conversion2' incorporates:
  //   Constant: '<S484>/phase'

  imperix_ctrl_B.DataTypeConversion2_g = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_c);

  // DataTypeConversion: '<S484>/Data Type Conversion3'
  imperix_ctrl_B.DataTypeConversion3_m = imperix_ctrl_B.DataTypeConversion3_bm;

  // Outputs for Atomic SubSystem: '<S490>/generation'
  // S-Function (CB_PWM): '<S491>/PWM' incorporates:
  //   Constant: '<S109>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_m > 0.0) {
    CbPwm_Activate((tPwmOutput) 10, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 10, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 10, imperix_ctrl_B.DataTypeConversion1_po, 0);

  // End of Outputs for SubSystem: '<S490>/generation'

  // DataTypeConversion: '<S485>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S482>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_c = static_cast<real32_T>
    (rtb_DataTypeConversion2[2]);

  // DataTypeConversion: '<S485>/Data Type Conversion2' incorporates:
  //   Constant: '<S485>/phase'

  imperix_ctrl_B.DataTypeConversion2_k = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_ll);

  // DataTypeConversion: '<S485>/Data Type Conversion3'
  imperix_ctrl_B.DataTypeConversion3_a = imperix_ctrl_B.DataTypeConversion3_bm;

  // Outputs for Atomic SubSystem: '<S492>/generation'
  // S-Function (CB_PWM): '<S493>/PWM' incorporates:
  //   Constant: '<S109>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_a > 0.0) {
    CbPwm_Activate((tPwmOutput) 11, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 11, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 11, imperix_ctrl_B.DataTypeConversion1_c, 0);

  // End of Outputs for SubSystem: '<S492>/generation'

  // DeadZone: '<S523>/DeadZone'
  if (rtb_Gain3 > imperix_ctrl_P.PCC.u_max) {
    rtb_Gain3 -= imperix_ctrl_P.PCC.u_max;
  } else if (rtb_Gain3 >= -imperix_ctrl_P.PCC.u_max) {
    rtb_Gain3 = 0.0;
  } else {
    rtb_Gain3 -= -imperix_ctrl_P.PCC.u_max;
  }

  // End of DeadZone: '<S523>/DeadZone'

  // Gain: '<S528>/Integral Gain'
  rtb_IntegralGain_n *= imperix_ctrl_P.PCC.ki;

  // DataTypeConversion: '<S555>/Data Type Conversion1'
  imperix_ctrl_B.DataTypeConversion1_h3 = static_cast<real32_T>
    (rtb_DataTypeConversion2[3]);

  // DataTypeConversion: '<S555>/Data Type Conversion2' incorporates:
  //   Constant: '<S555>/phase'

  imperix_ctrl_B.DataTypeConversion2_bv = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_n);

  // DataTypeConversion: '<S555>/Data Type Conversion3'
  imperix_ctrl_B.DataTypeConversion3_b = imperix_ctrl_B.DataTypeConversion3_bm;

  // Outputs for Atomic SubSystem: '<S559>/generation'
  // S-Function (CB_PWM): '<S560>/PWM' incorporates:
  //   Constant: '<S109>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_b > 0.0) {
    CbPwm_Activate((tPwmOutput) 12, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 12, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 12, imperix_ctrl_B.DataTypeConversion1_h3, 0);

  // End of Outputs for SubSystem: '<S559>/generation'

  // DataTypeConversion: '<S556>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S555>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_m = static_cast<real32_T>
    (rtb_DataTypeConversion2[3]);

  // DataTypeConversion: '<S556>/Data Type Conversion2' incorporates:
  //   Constant: '<S556>/phase'

  imperix_ctrl_B.DataTypeConversion2_j = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_k);

  // DataTypeConversion: '<S556>/Data Type Conversion3'
  imperix_ctrl_B.DataTypeConversion3_h = imperix_ctrl_B.DataTypeConversion3_bm;

  // Outputs for Atomic SubSystem: '<S561>/generation'
  // S-Function (CB_PWM): '<S562>/PWM' incorporates:
  //   Constant: '<S109>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_h > 0.0) {
    CbPwm_Activate((tPwmOutput) 13, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 13, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 13, imperix_ctrl_B.DataTypeConversion1_m, 0);

  // End of Outputs for SubSystem: '<S561>/generation'

  // DataTypeConversion: '<S557>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S555>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_fz = static_cast<real32_T>
    (rtb_DataTypeConversion2[3]);

  // DataTypeConversion: '<S557>/Data Type Conversion2' incorporates:
  //   Constant: '<S557>/phase'

  imperix_ctrl_B.DataTypeConversion2_a = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_py);

  // DataTypeConversion: '<S557>/Data Type Conversion3'
  imperix_ctrl_B.DataTypeConversion3_e = imperix_ctrl_B.DataTypeConversion3_bm;

  // Outputs for Atomic SubSystem: '<S563>/generation'
  // S-Function (CB_PWM): '<S564>/PWM' incorporates:
  //   Constant: '<S109>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_e > 0.0) {
    CbPwm_Activate((tPwmOutput) 14, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 14, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 14, imperix_ctrl_B.DataTypeConversion1_fz, 0);

  // End of Outputs for SubSystem: '<S563>/generation'

  // DataTypeConversion: '<S558>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S555>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_i = static_cast<real32_T>
    (rtb_DataTypeConversion2[3]);

  // DataTypeConversion: '<S558>/Data Type Conversion2' incorporates:
  //   Constant: '<S558>/phase'

  imperix_ctrl_B.DataTypeConversion2_f = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_ng);

  // DataTypeConversion: '<S558>/Data Type Conversion3'
  imperix_ctrl_B.DataTypeConversion3_k = imperix_ctrl_B.DataTypeConversion3_bm;

  // Outputs for Atomic SubSystem: '<S565>/generation'
  // S-Function (CB_PWM): '<S566>/PWM' incorporates:
  //   Constant: '<S109>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_k > 0.0) {
    CbPwm_Activate((tPwmOutput) 15, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 15, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 15, imperix_ctrl_B.DataTypeConversion1_i, 0);

  // End of Outputs for SubSystem: '<S565>/generation'

  // DataTypeConversion: '<S567>/Data Type Conversion1'
  imperix_ctrl_B.DataTypeConversion1_a = static_cast<real32_T>
    (rtb_DataTypeConversion2[4]);

  // DataTypeConversion: '<S567>/Data Type Conversion2' incorporates:
  //   Constant: '<S567>/phase'

  imperix_ctrl_B.DataTypeConversion2_dx = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_j);

  // DataTypeConversion: '<S567>/Data Type Conversion3'
  imperix_ctrl_B.DataTypeConversion3_l = imperix_ctrl_B.DataTypeConversion3_bm;

  // Outputs for Atomic SubSystem: '<S571>/generation'
  // S-Function (CB_PWM): '<S572>/PWM' incorporates:
  //   Constant: '<S109>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_l > 0.0) {
    CbPwm_Activate((tPwmOutput) 8, 2);
  } else {
    CbPwm_Deactivate((tPwmOutput) 8, 2);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 8, imperix_ctrl_B.DataTypeConversion1_a, 2);

  // End of Outputs for SubSystem: '<S571>/generation'

  // DataTypeConversion: '<S568>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S567>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_k = static_cast<real32_T>
    (rtb_DataTypeConversion2[4]);

  // DataTypeConversion: '<S568>/Data Type Conversion2' incorporates:
  //   Constant: '<S568>/phase'

  imperix_ctrl_B.DataTypeConversion2_dm = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_of);

  // DataTypeConversion: '<S568>/Data Type Conversion3'
  imperix_ctrl_B.DataTypeConversion3_n = imperix_ctrl_B.DataTypeConversion3_bm;

  // Outputs for Atomic SubSystem: '<S573>/generation'
  // S-Function (CB_PWM): '<S574>/PWM' incorporates:
  //   Constant: '<S109>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_n > 0.0) {
    CbPwm_Activate((tPwmOutput) 9, 2);
  } else {
    CbPwm_Deactivate((tPwmOutput) 9, 2);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 9, imperix_ctrl_B.DataTypeConversion1_k, 2);

  // End of Outputs for SubSystem: '<S573>/generation'

  // DataTypeConversion: '<S569>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S567>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_l = static_cast<real32_T>
    (rtb_DataTypeConversion2[4]);

  // DataTypeConversion: '<S569>/Data Type Conversion2' incorporates:
  //   Constant: '<S569>/phase'

  imperix_ctrl_B.DataTypeConversion2_n = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_h);

  // DataTypeConversion: '<S569>/Data Type Conversion3'
  imperix_ctrl_B.DataTypeConversion3_j = imperix_ctrl_B.DataTypeConversion3_bm;

  // Outputs for Atomic SubSystem: '<S575>/generation'
  // S-Function (CB_PWM): '<S576>/PWM' incorporates:
  //   Constant: '<S109>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_j > 0.0) {
    CbPwm_Activate((tPwmOutput) 10, 2);
  } else {
    CbPwm_Deactivate((tPwmOutput) 10, 2);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 10, imperix_ctrl_B.DataTypeConversion1_l, 2);

  // End of Outputs for SubSystem: '<S575>/generation'

  // DataTypeConversion: '<S570>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S567>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_bg = static_cast<real32_T>
    (rtb_DataTypeConversion2[4]);

  // DataTypeConversion: '<S570>/Data Type Conversion2' incorporates:
  //   Constant: '<S570>/phase'

  imperix_ctrl_B.DataTypeConversion2_nx = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_nc);

  // DataTypeConversion: '<S570>/Data Type Conversion3'
  imperix_ctrl_B.DataTypeConversion3_bs = imperix_ctrl_B.DataTypeConversion3_bm;

  // Outputs for Atomic SubSystem: '<S577>/generation'
  // S-Function (CB_PWM): '<S578>/PWM' incorporates:
  //   Constant: '<S109>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_bs > 0.0) {
    CbPwm_Activate((tPwmOutput) 11, 2);
  } else {
    CbPwm_Deactivate((tPwmOutput) 11, 2);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 11, imperix_ctrl_B.DataTypeConversion1_bg, 2);

  // End of Outputs for SubSystem: '<S577>/generation'

  // DataTypeConversion: '<S579>/Data Type Conversion1'
  imperix_ctrl_B.DataTypeConversion1_d = static_cast<real32_T>
    (rtb_DataTypeConversion2[5]);

  // DataTypeConversion: '<S579>/Data Type Conversion2' incorporates:
  //   Constant: '<S579>/phase'

  imperix_ctrl_B.DataTypeConversion2_pe = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_f);

  // DataTypeConversion: '<S579>/Data Type Conversion3'
  imperix_ctrl_B.DataTypeConversion3_bsx = imperix_ctrl_B.DataTypeConversion3_bm;

  // Outputs for Atomic SubSystem: '<S583>/generation'
  // S-Function (CB_PWM): '<S584>/PWM' incorporates:
  //   Constant: '<S109>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_bsx > 0.0) {
    CbPwm_Activate((tPwmOutput) 12, 2);
  } else {
    CbPwm_Deactivate((tPwmOutput) 12, 2);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 12, imperix_ctrl_B.DataTypeConversion1_d, 2);

  // End of Outputs for SubSystem: '<S583>/generation'

  // DataTypeConversion: '<S580>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S579>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_o = static_cast<real32_T>
    (rtb_DataTypeConversion2[5]);

  // DataTypeConversion: '<S580>/Data Type Conversion2' incorporates:
  //   Constant: '<S580>/phase'

  imperix_ctrl_B.DataTypeConversion2_n0 = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_i);

  // DataTypeConversion: '<S580>/Data Type Conversion3'
  imperix_ctrl_B.DataTypeConversion3_hm = imperix_ctrl_B.DataTypeConversion3_bm;

  // Outputs for Atomic SubSystem: '<S585>/generation'
  // S-Function (CB_PWM): '<S586>/PWM' incorporates:
  //   Constant: '<S109>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_hm > 0.0) {
    CbPwm_Activate((tPwmOutput) 13, 2);
  } else {
    CbPwm_Deactivate((tPwmOutput) 13, 2);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 13, imperix_ctrl_B.DataTypeConversion1_o, 2);

  // End of Outputs for SubSystem: '<S585>/generation'

  // DataTypeConversion: '<S581>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S579>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_ay = static_cast<real32_T>
    (rtb_DataTypeConversion2[5]);

  // DataTypeConversion: '<S581>/Data Type Conversion2' incorporates:
  //   Constant: '<S581>/phase'

  imperix_ctrl_B.DataTypeConversion2_gl = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_a);

  // DataTypeConversion: '<S581>/Data Type Conversion3'
  imperix_ctrl_B.DataTypeConversion3_ip = imperix_ctrl_B.DataTypeConversion3_bm;

  // Outputs for Atomic SubSystem: '<S587>/generation'
  // S-Function (CB_PWM): '<S588>/PWM' incorporates:
  //   Constant: '<S109>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_ip > 0.0) {
    CbPwm_Activate((tPwmOutput) 14, 2);
  } else {
    CbPwm_Deactivate((tPwmOutput) 14, 2);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 14, imperix_ctrl_B.DataTypeConversion1_ay, 2);

  // End of Outputs for SubSystem: '<S587>/generation'

  // DataTypeConversion: '<S582>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S579>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_pf = static_cast<real32_T>
    (rtb_DataTypeConversion2[5]);

  // DataTypeConversion: '<S582>/Data Type Conversion2' incorporates:
  //   Constant: '<S582>/phase'

  imperix_ctrl_B.DataTypeConversion2_by = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_ns);

  // DataTypeConversion: '<S582>/Data Type Conversion3'
  imperix_ctrl_B.DataTypeConversion3_o = imperix_ctrl_B.DataTypeConversion3_bm;

  // Outputs for Atomic SubSystem: '<S589>/generation'
  // S-Function (CB_PWM): '<S590>/PWM' incorporates:
  //   Constant: '<S109>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_o > 0.0) {
    CbPwm_Activate((tPwmOutput) 15, 2);
  } else {
    CbPwm_Deactivate((tPwmOutput) 15, 2);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 15, imperix_ctrl_B.DataTypeConversion1_pf, 2);

  // End of Outputs for SubSystem: '<S589>/generation'

  // DataTypeConversion: '<S597>/Data Type Conversion1'
  imperix_ctrl_B.DataTypeConversion1_al = static_cast<real32_T>
    (rtb_DataTypeConversion2[0]);

  // DataTypeConversion: '<S597>/Data Type Conversion2' incorporates:
  //   Constant: '<S597>/phase'

  imperix_ctrl_B.DataTypeConversion2_jw = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_fa);

  // DataTypeConversion: '<S597>/Data Type Conversion3'
  imperix_ctrl_B.DataTypeConversion3_d = imperix_ctrl_B.DataTypeConversion3_bm;

  // Outputs for Atomic SubSystem: '<S601>/generation'
  // S-Function (CB_PWM): '<S602>/PWM' incorporates:
  //   Constant: '<S109>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_d > 0.0) {
    CbPwm_Activate((tPwmOutput) 0, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 0, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 0, imperix_ctrl_B.DataTypeConversion1_al, 0);

  // End of Outputs for SubSystem: '<S601>/generation'

  // DataTypeConversion: '<S598>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S597>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_ig = static_cast<real32_T>
    (rtb_DataTypeConversion2[0]);

  // DataTypeConversion: '<S598>/Data Type Conversion2' incorporates:
  //   Constant: '<S598>/phase'

  imperix_ctrl_B.DataTypeConversion2_ij = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_hr);

  // DataTypeConversion: '<S598>/Data Type Conversion3'
  imperix_ctrl_B.DataTypeConversion3_bt = imperix_ctrl_B.DataTypeConversion3_bm;

  // Outputs for Atomic SubSystem: '<S603>/generation'
  // S-Function (CB_PWM): '<S604>/PWM' incorporates:
  //   Constant: '<S109>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_bt > 0.0) {
    CbPwm_Activate((tPwmOutput) 1, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 1, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 1, imperix_ctrl_B.DataTypeConversion1_ig, 0);

  // End of Outputs for SubSystem: '<S603>/generation'

  // DataTypeConversion: '<S599>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S597>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_g = static_cast<real32_T>
    (rtb_DataTypeConversion2[0]);

  // DataTypeConversion: '<S599>/Data Type Conversion2' incorporates:
  //   Constant: '<S599>/phase'

  imperix_ctrl_B.DataTypeConversion2_nm = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_at);

  // DataTypeConversion: '<S599>/Data Type Conversion3'
  imperix_ctrl_B.DataTypeConversion3_p = imperix_ctrl_B.DataTypeConversion3_bm;

  // Outputs for Atomic SubSystem: '<S605>/generation'
  // S-Function (CB_PWM): '<S606>/PWM' incorporates:
  //   Constant: '<S109>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_p > 0.0) {
    CbPwm_Activate((tPwmOutput) 2, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 2, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 2, imperix_ctrl_B.DataTypeConversion1_g, 0);

  // End of Outputs for SubSystem: '<S605>/generation'

  // DataTypeConversion: '<S600>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S597>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_gw = static_cast<real32_T>
    (rtb_DataTypeConversion2[0]);

  // DataTypeConversion: '<S600>/Data Type Conversion2' incorporates:
  //   Constant: '<S600>/phase'

  imperix_ctrl_B.DataTypeConversion2_a0 = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_cq);

  // Outputs for Atomic SubSystem: '<S607>/generation'
  // S-Function (CB_PWM): '<S608>/PWM' incorporates:
  //   Constant: '<S109>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_bm > 0.0) {
    CbPwm_Activate((tPwmOutput) 3, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 3, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 3, imperix_ctrl_B.DataTypeConversion1_gw, 0);

  // End of Outputs for SubSystem: '<S607>/generation'

  // Switch: '<S154>/Switch1' incorporates:
  //   Constant: '<S154>/Clamping_zero'
  //   Constant: '<S154>/Constant'
  //   Constant: '<S154>/Constant2'
  //   RelationalOperator: '<S154>/fix for DT propagation issue'

  if (rtb_DeadZone > imperix_ctrl_P.Clamping_zero_Value) {
    tmp_3 = imperix_ctrl_P.Constant_Value_e;
  } else {
    tmp_3 = imperix_ctrl_P.Constant2_Value;
  }

  // Switch: '<S154>/Switch2' incorporates:
  //   Constant: '<S154>/Clamping_zero'
  //   Constant: '<S154>/Constant3'
  //   Constant: '<S154>/Constant4'
  //   RelationalOperator: '<S154>/fix for DT propagation issue1'

  if (D > imperix_ctrl_P.Clamping_zero_Value) {
    tmp_4 = imperix_ctrl_P.Constant3_Value_h;
  } else {
    tmp_4 = imperix_ctrl_P.Constant4_Value;
  }

  // Switch: '<S154>/Switch' incorporates:
  //   Constant: '<S154>/Clamping_zero'
  //   Constant: '<S154>/Constant1'
  //   Logic: '<S154>/AND3'
  //   RelationalOperator: '<S154>/Equal1'
  //   RelationalOperator: '<S154>/Relational Operator'
  //   Switch: '<S154>/Switch1'
  //   Switch: '<S154>/Switch2'

  if ((imperix_ctrl_P.Clamping_zero_Value != rtb_DeadZone) && (tmp_3 == tmp_4))
  {
    D = imperix_ctrl_P.Constant1_Value;
  }

  // Update for DiscreteIntegrator: '<S164>/Integrator' incorporates:
  //   Switch: '<S154>/Switch'

  imperix_ctrl_DW.Integrator_DSTATE += imperix_ctrl_P.Integrator_gainval * D;

  // Update for DiscreteIntegrator: '<S340>/Integrator' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double5'
  //   Gain: '<S332>/Kb'
  //   Gain: '<S337>/Integral Gain'
  //   Sum: '<S332>/SumI2'
  //   Sum: '<S332>/SumI4'

  if (imperix_ctrl_B.SFunction_h == 0.0F) {
    imperix_ctrl_DW.Integrator_DSTATE_d += (2.0 * imperix_ctrl_P.FOC.kp_w *
      (rtb_Saturation - rtb_Sum_p) + imperix_ctrl_P.FOC.ki_w * rtb_Sum1_f) *
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

  // End of Update for DiscreteIntegrator: '<S340>/Integrator'

  // Update for DiscreteIntegrator: '<S288>/Integrator' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double5'
  //   Gain: '<S280>/Kb'
  //   Gain: '<S285>/Integral Gain'
  //   Sum: '<S280>/SumI2'
  //   Sum: '<S280>/SumI4'

  if (imperix_ctrl_B.SFunction_h == 0.0F) {
    imperix_ctrl_DW.Integrator_DSTATE_i += (2.0 * imperix_ctrl_P.FOC.kp_F *
      (rtb_Saturation_i - rtb_Sum_b) + imperix_ctrl_P.FOC.ki_F * idx_2) *
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

  // End of Update for DiscreteIntegrator: '<S288>/Integrator'

  // Update for DiscreteIntegrator: '<S408>/Integrator' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double5'
  //   Gain: '<S400>/Kb'
  //   Gain: '<S405>/Integral Gain'
  //   Sum: '<S400>/SumI2'
  //   Sum: '<S400>/SumI4'

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

  // End of Update for DiscreteIntegrator: '<S408>/Integrator'

  // Update for DiscreteIntegrator: '<S460>/Integrator' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double5'
  //   Gain: '<S452>/Kb'
  //   Gain: '<S457>/Integral Gain'
  //   Sum: '<S452>/SumI2'
  //   Sum: '<S452>/SumI4'

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

  // End of Update for DiscreteIntegrator: '<S460>/Integrator'

  // Update for DiscreteIntegrator: '<S18>/Discrete-Time Integrator1' incorporates:
  //   Gain: '<S18>/Gain22'

  imperix_ctrl_DW.DiscreteTimeIntegrator1_DSTATE += imperix_ctrl_P.Gain22_Gain *
    imperix_ctrl_B.SFunction_e * imperix_ctrl_P.DiscreteTimeIntegrator1_gainval;

  // Switch: '<S521>/Switch1' incorporates:
  //   Constant: '<S521>/Clamping_zero'
  //   Constant: '<S521>/Constant'
  //   Constant: '<S521>/Constant2'
  //   RelationalOperator: '<S521>/fix for DT propagation issue'

  if (rtb_Gain3 > imperix_ctrl_P.Clamping_zero_Value_a) {
    tmp_3 = imperix_ctrl_P.Constant_Value_h;
  } else {
    tmp_3 = imperix_ctrl_P.Constant2_Value_a;
  }

  // Switch: '<S521>/Switch2' incorporates:
  //   Constant: '<S521>/Clamping_zero'
  //   Constant: '<S521>/Constant3'
  //   Constant: '<S521>/Constant4'
  //   RelationalOperator: '<S521>/fix for DT propagation issue1'

  if (rtb_IntegralGain_n > imperix_ctrl_P.Clamping_zero_Value_a) {
    tmp_4 = imperix_ctrl_P.Constant3_Value_j;
  } else {
    tmp_4 = imperix_ctrl_P.Constant4_Value_a;
  }

  // Switch: '<S521>/Switch' incorporates:
  //   Constant: '<S521>/Clamping_zero'
  //   Constant: '<S521>/Constant1'
  //   Logic: '<S521>/AND3'
  //   RelationalOperator: '<S521>/Equal1'
  //   RelationalOperator: '<S521>/Relational Operator'
  //   Switch: '<S521>/Switch1'
  //   Switch: '<S521>/Switch2'

  if ((imperix_ctrl_P.Clamping_zero_Value_a != rtb_Gain3) && (tmp_3 == tmp_4)) {
    rtb_IntegralGain_n = imperix_ctrl_P.Constant1_Value_d;
  }

  // Update for DiscreteIntegrator: '<S531>/Integrator' incorporates:
  //   Switch: '<S521>/Switch'

  imperix_ctrl_DW.Integrator_DSTATE_p += imperix_ctrl_P.Integrator_gainval_a3 *
    rtb_IntegralGain_n;
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

  // Start for S-Function (ADC): '<S103>/ADC'
  Adc_ConfigureInput(0, 0.00045776F, 0.0F, 0);
  Adc_GetPointer(0, 0, &ix_raw_adc_ptr_0_0);

  // Start for S-Function (ADC): '<S105>/ADC'
  Adc_ConfigureInput(1, 0.00045776F, 0.0F, 0);
  Adc_GetPointer(1, 0, &ix_raw_adc_ptr_1_0);

  // Start for S-Function (ADC): '<S95>/ADC'
  Adc_ConfigureInput(2, 0.00045776F, 0.0F, 0);
  Adc_GetPointer(2, 0, &ix_raw_adc_ptr_2_0);

  // Start for S-Function (ADC): '<S83>/ADC'
  Adc_ConfigureInput(3, 0.00045776F, 0.0F, 0);
  Adc_GetPointer(3, 0, &ix_raw_adc_ptr_3_0);

  // Start for S-Function (ADC): '<S97>/ADC'
  Adc_ConfigureInput(4, 0.00045776F, 0.0F, 0);
  Adc_GetPointer(4, 0, &ix_raw_adc_ptr_4_0);

  // Start for S-Function (ADC): '<S99>/ADC'
  Adc_ConfigureInput(5, 0.00045776F, 0.0F, 0);
  Adc_GetPointer(5, 0, &ix_raw_adc_ptr_5_0);

  // Start for S-Function (PROBE): '<S183>/S-Function'
  ConfigureProbe(&is1, 0);

  // Start for S-Function (PROBE): '<S185>/S-Function'
  ConfigureProbe(&is2, 0);

  // Start for S-Function (ADC): '<S91>/ADC'
  Adc_ConfigureInput(6, 0.030518F, 0.0F, 0);
  Adc_GetPointer(6, 0, &ix_raw_adc_ptr_6_0);

  // Start for S-Function (ADC): '<S107>/ADC'
  Adc_ConfigureInput(7, 0.030518F, 0.0F, 0);
  Adc_GetPointer(7, 0, &ix_raw_adc_ptr_7_0);

  // Start for S-Function (ADC): '<S85>/ADC'
  Adc_ConfigureInput(0, 0.030518F, 0.0F, 1);
  Adc_GetPointer(0, 1, &ix_raw_adc_ptr_0_1);

  // Start for S-Function (ADC): '<S93>/ADC'
  Adc_ConfigureInput(1, 0.030518F, 0.0F, 1);
  Adc_GetPointer(1, 1, &ix_raw_adc_ptr_1_1);

  // Start for S-Function (ADC): '<S87>/ADC'
  Adc_ConfigureInput(2, 0.030518F, 0.0F, 1);
  Adc_GetPointer(2, 1, &ix_raw_adc_ptr_2_1);

  // Start for S-Function (ADC): '<S89>/ADC'
  Adc_ConfigureInput(3, 0.030518F, 0.0F, 1);
  Adc_GetPointer(3, 1, &ix_raw_adc_ptr_3_1);

  // Start for S-Function (PROBE): '<S187>/S-Function'
  ConfigureProbe(&Vc5, 0);

  // Start for S-Function (PROBE): '<S189>/S-Function'
  ConfigureProbe(&Vc6, 0);

  // Start for S-Function (ADC): '<S101>/ADC'
  Adc_ConfigureInput(4, 0.0061035F, 0.0F, 1);
  Adc_GetPointer(4, 1, &ix_raw_adc_ptr_4_1);

  // Start for S-Function (PROBE): '<S191>/S-Function'
  ConfigureProbe(&wm, 0);

  // Start for S-Function (TUNABLE_PARAM): '<S616>/S-Function'
  enable_KF = 0.0F;                    // Tunable parameter initialization
  ConfigureTunable(&enable_KF, 0, 0, 0.0F, 1.0F);

  // Start for S-Function (TUNABLE_PARAM): '<S620>/S-Function'
  reset_KF = 1.0F;                     // Tunable parameter initialization
  ConfigureTunable(&reset_KF, 0, 0, 0.0F, 1.0F);

  // Start for S-Function (PROBE): '<S193>/S-Function'
  ConfigureProbe(&Frd, 0);

  // Start for S-Function (PROBE): '<S195>/S-Function'
  ConfigureProbe(&Vc_m, 0);

  // Start for S-Function (PROBE): '<S197>/S-Function'
  ConfigureProbe(&is3, 0);

  // Start for S-Function (PROBE): '<S199>/S-Function'
  ConfigureProbe(&Vc_m_f, 0);

  // Start for RateTransition generated from: '<S1>/Sum6'
  imperix_ctrl_B.TmpRTBAtSum6Inport1 =
    imperix_ctrl_P.TmpRTBAtSum6Inport1_InitialCond;

  // Start for S-Function (PROBE): '<S201>/S-Function'
  ConfigureProbe(&iP_r, 0);

  // Start for S-Function (PROBE): '<S203>/S-Function'
  ConfigureProbe(&iP, 0);

  // Start for S-Function (TUNABLE_PARAM): '<S610>/S-Function'
  F_ref = 0.0F;                        // Tunable parameter initialization
  ConfigureTunable(&F_ref, 0, 0, 0.0F, 1.0F);

  // Start for S-Function (TUNABLE_PARAM): '<S614>/S-Function'
  w_ref = 0.0F;                        // Tunable parameter initialization
  ConfigureTunable(&w_ref, 0, 0, -1.0F, 1.0F);

  // Start for S-Function (TUNABLE_PARAM): '<S618>/S-Function'
  reset_PI = 0.0F;                     // Tunable parameter initialization
  ConfigureTunable(&reset_PI, 0, 0, 0.0F, 1.0F);

  // Start for S-Function (PROBE): '<S205>/S-Function'
  ConfigureProbe(&vm_q, 0);

  // Start for S-Function (PROBE): '<S207>/S-Function'
  ConfigureProbe(&Frd_r, 0);

  // Start for S-Function (PROBE): '<S209>/S-Function'
  ConfigureProbe(&wm_r, 0);

  // Start for S-Function (PROBE): '<S211>/S-Function'
  ConfigureProbe(&im_d, 0);

  // Start for S-Function (PROBE): '<S213>/S-Function'
  ConfigureProbe(&imd_r, 0);

  // Start for S-Function (PROBE): '<S215>/S-Function'
  ConfigureProbe(&im_q, 0);

  // Start for S-Function (PROBE): '<S217>/S-Function'
  ConfigureProbe(&imq_r, 0);

  // Start for S-Function (PROBE): '<S219>/S-Function'
  ConfigureProbe(&is4, 0);

  // Start for S-Function (PROBE): '<S221>/S-Function'
  ConfigureProbe(&vm_d, 0);

  // Start for S-Function (PROBE): '<S223>/S-Function'
  ConfigureProbe(&im_bet, 0);

  // Start for S-Function (PROBE): '<S225>/S-Function'
  ConfigureProbe(&im_alp, 0);

  // Start for S-Function (PROBE): '<S227>/S-Function'
  ConfigureProbe(&im_bet_KF, 0);

  // Start for S-Function (PROBE): '<S229>/S-Function'
  ConfigureProbe(&im_alp_KF, 0);

  // Start for S-Function (PROBE): '<S231>/S-Function'
  ConfigureProbe(&Fr_bet, 0);

  // Start for S-Function (PROBE): '<S233>/S-Function'
  ConfigureProbe(&Fr_alp, 0);

  // Start for S-Function (PROBE): '<S235>/S-Function'
  ConfigureProbe(&ws, 0);

  // Start for S-Function (PROBE): '<S237>/S-Function'
  ConfigureProbe(&gF, 0);

  // Start for S-Function (ADC): '<S81>/ADC'
  Adc_ConfigureInput(5, 6.1035E-5F, 0.0F, 1);
  Adc_GetPointer(5, 1, &ix_raw_adc_ptr_5_1);

  // Start for S-Function (PROBE): '<S239>/S-Function'
  ConfigureProbe(&Te, 0);

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

  // Start for S-Function (CLK): '<S109>/CLK1'
  Clock_SetFrequency((tClock) 1, 6000.0F);

  // Start for S-Function (TUNABLE_PARAM): '<S612>/S-Function'
  enable_FP = 0.0F;                    // Tunable parameter initialization
  ConfigureTunable(&enable_FP, 0, 0, 0.0F, 1.0F);

  // Start for S-Function (TUNABLE_PARAM): '<S122>/S-Function'
  V_mag = 0.0F;                        // Tunable parameter initialization
  ConfigureTunable(&V_mag, 0, 0, 0.0F, 1.0F);

  // Start for S-Function (PROBE): '<S116>/S-Function'
  ConfigureProbe(&v_alp, 0);

  // Start for S-Function (PROBE): '<S118>/S-Function'
  ConfigureProbe(&v_bet, 0);

  // Start for S-Function (TUNABLE_PARAM): '<S120>/S-Function'
  f_mag = 0.0F;                        // Tunable parameter initialization
  ConfigureTunable(&f_mag, 0, 0, 0.0F, 1.0F);

  // Start for S-Function (IRQ): '<S125>/S-Function' incorporates:
  //   Constant: '<S127>/clk_id'

  ConfigureMainInterrupt(SimulinkInterrupt, (tClock)
    imperix_ctrl_P.clk_id_Value_o, 0.5F, 0U);
  ConfigureReadTriggerDelayInNs(2000U);
  Adc_SetUserOversampling(0.0F);

  // Start for S-Function (CLK): '<S127>/CLK1'
  Clock_SetFrequency((tClock) 0, 6000.0F);

  // Start for Atomic SubSystem: '<S362>/generation'

  // Start for S-Function (CB_PWM): '<S363>/PWM' incorporates:
  //   Constant: '<S109>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 4, (tClock) imperix_ctrl_P.clk_id_Value, 0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 4, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 4, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 4, (tPwmRate) 0, 0);
  CbPwm_SetPhase((tPwmOutput) 4, 0.75F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 4, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 4, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 4, 0);
  CbPwm_Activate((tPwmOutput) 4, 0);

  // End of Start for SubSystem: '<S362>/generation'

  // Start for Atomic SubSystem: '<S364>/generation'

  // Start for S-Function (CB_PWM): '<S365>/PWM' incorporates:
  //   Constant: '<S109>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 5, (tClock) imperix_ctrl_P.clk_id_Value, 0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 5, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 5, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 5, (tPwmRate) 0, 0);
  CbPwm_SetPhase((tPwmOutput) 5, 0.5F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 5, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 5, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 5, 0);
  CbPwm_Activate((tPwmOutput) 5, 0);

  // End of Start for SubSystem: '<S364>/generation'

  // Start for Atomic SubSystem: '<S366>/generation'

  // Start for S-Function (CB_PWM): '<S367>/PWM' incorporates:
  //   Constant: '<S109>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 6, (tClock) imperix_ctrl_P.clk_id_Value, 0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 6, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 6, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 6, (tPwmRate) 0, 0);
  CbPwm_SetPhase((tPwmOutput) 6, 0.25F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 6, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 6, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 6, 0);
  CbPwm_Activate((tPwmOutput) 6, 0);

  // End of Start for SubSystem: '<S366>/generation'

  // Start for Atomic SubSystem: '<S368>/generation'

  // Start for S-Function (CB_PWM): '<S369>/PWM' incorporates:
  //   Constant: '<S109>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 7, (tClock) imperix_ctrl_P.clk_id_Value, 0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 7, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 7, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 7, (tPwmRate) 0, 0);
  CbPwm_SetPhase((tPwmOutput) 7, 0.0F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 7, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 7, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 7, 0);
  CbPwm_Activate((tPwmOutput) 7, 0);

  // End of Start for SubSystem: '<S368>/generation'

  // Start for Atomic SubSystem: '<S486>/generation'

  // Start for S-Function (CB_PWM): '<S487>/PWM' incorporates:
  //   Constant: '<S109>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 8, (tClock) imperix_ctrl_P.clk_id_Value, 0);
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
  //   Constant: '<S109>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 9, (tClock) imperix_ctrl_P.clk_id_Value, 0);
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
  //   Constant: '<S109>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 10, (tClock) imperix_ctrl_P.clk_id_Value, 0);
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
  //   Constant: '<S109>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 11, (tClock) imperix_ctrl_P.clk_id_Value, 0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 11, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 11, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 11, (tPwmRate) 0, 0);
  CbPwm_SetPhase((tPwmOutput) 11, 0.0F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 11, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 11, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 11, 0);
  CbPwm_Activate((tPwmOutput) 11, 0);

  // End of Start for SubSystem: '<S492>/generation'

  // Start for Atomic SubSystem: '<S559>/generation'

  // Start for S-Function (CB_PWM): '<S560>/PWM' incorporates:
  //   Constant: '<S109>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 12, (tClock) imperix_ctrl_P.clk_id_Value, 0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 12, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 12, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 12, (tPwmRate) 0, 0);
  CbPwm_SetPhase((tPwmOutput) 12, 0.75F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 12, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 12, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 12, 0);
  CbPwm_Activate((tPwmOutput) 12, 0);

  // End of Start for SubSystem: '<S559>/generation'

  // Start for Atomic SubSystem: '<S561>/generation'

  // Start for S-Function (CB_PWM): '<S562>/PWM' incorporates:
  //   Constant: '<S109>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 13, (tClock) imperix_ctrl_P.clk_id_Value, 0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 13, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 13, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 13, (tPwmRate) 0, 0);
  CbPwm_SetPhase((tPwmOutput) 13, 0.5F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 13, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 13, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 13, 0);
  CbPwm_Activate((tPwmOutput) 13, 0);

  // End of Start for SubSystem: '<S561>/generation'

  // Start for Atomic SubSystem: '<S563>/generation'

  // Start for S-Function (CB_PWM): '<S564>/PWM' incorporates:
  //   Constant: '<S109>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 14, (tClock) imperix_ctrl_P.clk_id_Value, 0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 14, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 14, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 14, (tPwmRate) 0, 0);
  CbPwm_SetPhase((tPwmOutput) 14, 0.25F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 14, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 14, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 14, 0);
  CbPwm_Activate((tPwmOutput) 14, 0);

  // End of Start for SubSystem: '<S563>/generation'

  // Start for Atomic SubSystem: '<S565>/generation'

  // Start for S-Function (CB_PWM): '<S566>/PWM' incorporates:
  //   Constant: '<S109>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 15, (tClock) imperix_ctrl_P.clk_id_Value, 0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 15, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 15, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 15, (tPwmRate) 0, 0);
  CbPwm_SetPhase((tPwmOutput) 15, 0.0F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 15, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 15, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 15, 0);
  CbPwm_Activate((tPwmOutput) 15, 0);

  // End of Start for SubSystem: '<S565>/generation'

  // Start for Atomic SubSystem: '<S571>/generation'

  // Start for S-Function (CB_PWM): '<S572>/PWM' incorporates:
  //   Constant: '<S109>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 8, (tClock) imperix_ctrl_P.clk_id_Value, 2);
  CbPwm_ConfigureOutputMode((tPwmOutput) 8, (tPwmOutMode) 2, 2);
  CbPwm_ConfigureCarrier((tPwmOutput) 8, (tPwmCarrier) 0, 2);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 8, (tPwmRate) 0, 2);
  CbPwm_SetPhase((tPwmOutput) 8, 0.75F, 2);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 8, 2);
  CbPwm_SetDutyCycle((tPwmOutput) 8, 0.0F, 2);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 8, 2);
  CbPwm_Activate((tPwmOutput) 8, 2);

  // End of Start for SubSystem: '<S571>/generation'

  // Start for Atomic SubSystem: '<S573>/generation'

  // Start for S-Function (CB_PWM): '<S574>/PWM' incorporates:
  //   Constant: '<S109>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 9, (tClock) imperix_ctrl_P.clk_id_Value, 2);
  CbPwm_ConfigureOutputMode((tPwmOutput) 9, (tPwmOutMode) 2, 2);
  CbPwm_ConfigureCarrier((tPwmOutput) 9, (tPwmCarrier) 0, 2);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 9, (tPwmRate) 0, 2);
  CbPwm_SetPhase((tPwmOutput) 9, 0.5F, 2);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 9, 2);
  CbPwm_SetDutyCycle((tPwmOutput) 9, 0.0F, 2);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 9, 2);
  CbPwm_Activate((tPwmOutput) 9, 2);

  // End of Start for SubSystem: '<S573>/generation'

  // Start for Atomic SubSystem: '<S575>/generation'

  // Start for S-Function (CB_PWM): '<S576>/PWM' incorporates:
  //   Constant: '<S109>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 10, (tClock) imperix_ctrl_P.clk_id_Value, 2);
  CbPwm_ConfigureOutputMode((tPwmOutput) 10, (tPwmOutMode) 2, 2);
  CbPwm_ConfigureCarrier((tPwmOutput) 10, (tPwmCarrier) 0, 2);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 10, (tPwmRate) 0, 2);
  CbPwm_SetPhase((tPwmOutput) 10, 0.25F, 2);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 10, 2);
  CbPwm_SetDutyCycle((tPwmOutput) 10, 0.0F, 2);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 10, 2);
  CbPwm_Activate((tPwmOutput) 10, 2);

  // End of Start for SubSystem: '<S575>/generation'

  // Start for Atomic SubSystem: '<S577>/generation'

  // Start for S-Function (CB_PWM): '<S578>/PWM' incorporates:
  //   Constant: '<S109>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 11, (tClock) imperix_ctrl_P.clk_id_Value, 2);
  CbPwm_ConfigureOutputMode((tPwmOutput) 11, (tPwmOutMode) 2, 2);
  CbPwm_ConfigureCarrier((tPwmOutput) 11, (tPwmCarrier) 0, 2);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 11, (tPwmRate) 0, 2);
  CbPwm_SetPhase((tPwmOutput) 11, 0.0F, 2);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 11, 2);
  CbPwm_SetDutyCycle((tPwmOutput) 11, 0.0F, 2);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 11, 2);
  CbPwm_Activate((tPwmOutput) 11, 2);

  // End of Start for SubSystem: '<S577>/generation'

  // Start for Atomic SubSystem: '<S583>/generation'

  // Start for S-Function (CB_PWM): '<S584>/PWM' incorporates:
  //   Constant: '<S109>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 12, (tClock) imperix_ctrl_P.clk_id_Value, 2);
  CbPwm_ConfigureOutputMode((tPwmOutput) 12, (tPwmOutMode) 2, 2);
  CbPwm_ConfigureCarrier((tPwmOutput) 12, (tPwmCarrier) 0, 2);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 12, (tPwmRate) 0, 2);
  CbPwm_SetPhase((tPwmOutput) 12, 0.75F, 2);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 12, 2);
  CbPwm_SetDutyCycle((tPwmOutput) 12, 0.0F, 2);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 12, 2);
  CbPwm_Activate((tPwmOutput) 12, 2);

  // End of Start for SubSystem: '<S583>/generation'

  // Start for Atomic SubSystem: '<S585>/generation'

  // Start for S-Function (CB_PWM): '<S586>/PWM' incorporates:
  //   Constant: '<S109>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 13, (tClock) imperix_ctrl_P.clk_id_Value, 2);
  CbPwm_ConfigureOutputMode((tPwmOutput) 13, (tPwmOutMode) 2, 2);
  CbPwm_ConfigureCarrier((tPwmOutput) 13, (tPwmCarrier) 0, 2);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 13, (tPwmRate) 0, 2);
  CbPwm_SetPhase((tPwmOutput) 13, 0.5F, 2);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 13, 2);
  CbPwm_SetDutyCycle((tPwmOutput) 13, 0.0F, 2);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 13, 2);
  CbPwm_Activate((tPwmOutput) 13, 2);

  // End of Start for SubSystem: '<S585>/generation'

  // Start for Atomic SubSystem: '<S587>/generation'

  // Start for S-Function (CB_PWM): '<S588>/PWM' incorporates:
  //   Constant: '<S109>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 14, (tClock) imperix_ctrl_P.clk_id_Value, 2);
  CbPwm_ConfigureOutputMode((tPwmOutput) 14, (tPwmOutMode) 2, 2);
  CbPwm_ConfigureCarrier((tPwmOutput) 14, (tPwmCarrier) 0, 2);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 14, (tPwmRate) 0, 2);
  CbPwm_SetPhase((tPwmOutput) 14, 0.25F, 2);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 14, 2);
  CbPwm_SetDutyCycle((tPwmOutput) 14, 0.0F, 2);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 14, 2);
  CbPwm_Activate((tPwmOutput) 14, 2);

  // End of Start for SubSystem: '<S587>/generation'

  // Start for Atomic SubSystem: '<S589>/generation'

  // Start for S-Function (CB_PWM): '<S590>/PWM' incorporates:
  //   Constant: '<S109>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 15, (tClock) imperix_ctrl_P.clk_id_Value, 2);
  CbPwm_ConfigureOutputMode((tPwmOutput) 15, (tPwmOutMode) 2, 2);
  CbPwm_ConfigureCarrier((tPwmOutput) 15, (tPwmCarrier) 0, 2);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 15, (tPwmRate) 0, 2);
  CbPwm_SetPhase((tPwmOutput) 15, 0.0F, 2);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 15, 2);
  CbPwm_SetDutyCycle((tPwmOutput) 15, 0.0F, 2);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 15, 2);
  CbPwm_Activate((tPwmOutput) 15, 2);

  // End of Start for SubSystem: '<S589>/generation'

  // Start for Atomic SubSystem: '<S601>/generation'

  // Start for S-Function (CB_PWM): '<S602>/PWM' incorporates:
  //   Constant: '<S109>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 0, (tClock) imperix_ctrl_P.clk_id_Value, 0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 0, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 0, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 0, (tPwmRate) 0, 0);
  CbPwm_SetPhase((tPwmOutput) 0, 0.75F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 0, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 0, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 0, 0);
  CbPwm_Activate((tPwmOutput) 0, 0);

  // End of Start for SubSystem: '<S601>/generation'

  // Start for Atomic SubSystem: '<S603>/generation'

  // Start for S-Function (CB_PWM): '<S604>/PWM' incorporates:
  //   Constant: '<S109>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 1, (tClock) imperix_ctrl_P.clk_id_Value, 0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 1, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 1, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 1, (tPwmRate) 0, 0);
  CbPwm_SetPhase((tPwmOutput) 1, 0.5F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 1, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 1, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 1, 0);
  CbPwm_Activate((tPwmOutput) 1, 0);

  // End of Start for SubSystem: '<S603>/generation'

  // Start for Atomic SubSystem: '<S605>/generation'

  // Start for S-Function (CB_PWM): '<S606>/PWM' incorporates:
  //   Constant: '<S109>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 2, (tClock) imperix_ctrl_P.clk_id_Value, 0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 2, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 2, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 2, (tPwmRate) 0, 0);
  CbPwm_SetPhase((tPwmOutput) 2, 0.25F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 2, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 2, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 2, 0);
  CbPwm_Activate((tPwmOutput) 2, 0);

  // End of Start for SubSystem: '<S605>/generation'

  // Start for Atomic SubSystem: '<S607>/generation'

  // Start for S-Function (CB_PWM): '<S608>/PWM' incorporates:
  //   Constant: '<S109>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 3, (tClock) imperix_ctrl_P.clk_id_Value, 0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 3, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 3, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 3, (tPwmRate) 0, 0);
  CbPwm_SetPhase((tPwmOutput) 3, 0.0F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 3, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 3, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 3, 0);
  CbPwm_Activate((tPwmOutput) 3, 0);

  // End of Start for SubSystem: '<S607>/generation'

  // InitializeConditions for UnitDelay: '<S62>/Unit Delay'
  imperix_ctrl_DW.UnitDelay_DSTATE[0] =
    imperix_ctrl_P.UnitDelay_InitialCondition[0];
  imperix_ctrl_DW.UnitDelay_DSTATE[1] =
    imperix_ctrl_P.UnitDelay_InitialCondition[1];

  // InitializeConditions for UnitDelay: '<S22>/Unit Delay1'
  imperix_ctrl_DW.UnitDelay1_DSTATE = imperix_ctrl_P.M2C.Vc_ref;

  // InitializeConditions for RateTransition generated from: '<S1>/Sum6'
  imperix_ctrl_DW.TmpRTBAtSum6Inport1_Buffer0 =
    imperix_ctrl_P.TmpRTBAtSum6Inport1_InitialCond;

  // InitializeConditions for DiscreteIntegrator: '<S164>/Integrator'
  imperix_ctrl_DW.Integrator_DSTATE =
    imperix_ctrl_P.PIDController1_InitialCondition;

  // InitializeConditions for DiscreteIntegrator: '<S340>/Integrator'
  imperix_ctrl_DW.Integrator_DSTATE_d =
    imperix_ctrl_P.SpeedPI_InitialConditionForInte;

  // InitializeConditions for DiscreteIntegrator: '<S288>/Integrator'
  imperix_ctrl_DW.Integrator_DSTATE_i =
    imperix_ctrl_P.FluxPI_InitialConditionForInteg;

  // InitializeConditions for DiscreteIntegrator: '<S408>/Integrator'
  imperix_ctrl_DW.Integrator_DSTATE_j =
    imperix_ctrl_P.MCCPId_InitialConditionForInteg;

  // InitializeConditions for DiscreteIntegrator: '<S460>/Integrator'
  imperix_ctrl_DW.Integrator_DSTATE_e =
    imperix_ctrl_P.MCCPIq_InitialConditionForInteg;

  // InitializeConditions for DiscreteIntegrator: '<S18>/Discrete-Time Integrator1' 
  imperix_ctrl_DW.DiscreteTimeIntegrator1_DSTATE =
    imperix_ctrl_P.DiscreteTimeIntegrator1_IC;

  // InitializeConditions for DiscreteIntegrator: '<S531>/Integrator'
  imperix_ctrl_DW.Integrator_DSTATE_p =
    imperix_ctrl_P.PCCPI_InitialConditionForIntegr;

  // SystemInitialize for MATLAB Function: '<S1>/Kalman Filter'
  imperix_ctrl_DW.Inx[1] = 0.0;
  imperix_ctrl_DW.Inx[2] = 0.0;
  imperix_ctrl_DW.Inx[3] = 0.0;
  imperix_ctrl_DW.Inx[0] = 1.0;

  // SystemInitialize for Enabled SubSystem: '<S373>/Subsystem - pi//2 delay'
  // SystemInitialize for Fcn: '<S480>/Fcn' incorporates:
  //   Outport: '<S480>/alpha_beta'

  imperix_ctrl_B.Fcn_d = imperix_ctrl_P.alpha_beta_Y0[0];

  // SystemInitialize for Fcn: '<S480>/Fcn1' incorporates:
  //   Outport: '<S480>/alpha_beta'

  imperix_ctrl_B.Fcn1_d = imperix_ctrl_P.alpha_beta_Y0[1];

  // End of SystemInitialize for SubSystem: '<S373>/Subsystem - pi//2 delay'

  // SystemInitialize for Enabled SubSystem: '<S373>/Subsystem1'
  // SystemInitialize for Fcn: '<S481>/Fcn' incorporates:
  //   Outport: '<S481>/alpha_beta'

  imperix_ctrl_B.Fcn_b = imperix_ctrl_P.alpha_beta_Y0_n[0];

  // SystemInitialize for Fcn: '<S481>/Fcn1' incorporates:
  //   Outport: '<S481>/alpha_beta'

  imperix_ctrl_B.Fcn1_i = imperix_ctrl_P.alpha_beta_Y0_n[1];

  // End of SystemInitialize for SubSystem: '<S373>/Subsystem1'

  // SystemInitialize for Enabled SubSystem: '<S549>/Subsystem - pi//2 delay'
  // SystemInitialize for Fcn: '<S553>/Fcn' incorporates:
  //   Outport: '<S553>/dq'

  imperix_ctrl_B.Fcn_c = imperix_ctrl_P.dq_Y0[0];

  // SystemInitialize for Fcn: '<S553>/Fcn1' incorporates:
  //   Outport: '<S553>/dq'

  imperix_ctrl_B.Fcn1_p = imperix_ctrl_P.dq_Y0[1];

  // End of SystemInitialize for SubSystem: '<S549>/Subsystem - pi//2 delay'

  // SystemInitialize for Enabled SubSystem: '<S549>/Subsystem1'
  // SystemInitialize for Fcn: '<S554>/Fcn' incorporates:
  //   Outport: '<S554>/dq'

  imperix_ctrl_B.Fcn = imperix_ctrl_P.dq_Y0_f[0];

  // SystemInitialize for Fcn: '<S554>/Fcn1' incorporates:
  //   Outport: '<S554>/dq'

  imperix_ctrl_B.Fcn1 = imperix_ctrl_P.dq_Y0_f[1];

  // End of SystemInitialize for SubSystem: '<S549>/Subsystem1'
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
