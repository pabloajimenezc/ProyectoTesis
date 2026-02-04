//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: imperix_vf_ctrl_data.cpp
//
// Code generated for Simulink model 'imperix_vf_ctrl'.
// To be implemented on the B-Box RCP or the B-Board PRO.
//
// Model version                  : 19.98
// Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
// C/C++ source code generated on : Tue Feb  3 13:19:50 2026
//
#include "imperix_vf_ctrl.h"

// Block parameters (default storage)
P_imperix_vf_ctrl_T imperix_vf_ctrl_P = {
  // Variable: M2C
  //  Referenced by: '<S1>/Constant3'

  {
    { 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0 },

    { 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0,
      0.0, 0.0, 1.0 },
    2.0,
    3.0,

    { 1.0, 0.0, -1.0, -0.0, -0.0, 1.0, 0.0, -0.0, -1.0, -0.0, 1.0, 0.0, -0.0,
      -0.0, -1.0, 0.0, 1.0, -1.0, -0.0, -0.0, 0.0, 1.0, -0.0, -1.0, -0.0, 0.0,
      1.0, -0.0, -0.0, -1.0 },
    6.0,

    { 0.26666666666666677, 0.26666666666666683, 0.26666666666666677,
      -0.06666666666666668, -0.0666666666666667, -0.0666666666666667,
      -0.066666666666666721, -0.066666666666666777, -0.066666666666666721,
      0.26666666666666666, 0.26666666666666666, 0.26666666666666661,
      -0.39999999999999991, 0.099999999999999978, 0.0999999999999999,
      -0.40000000000000013, 0.10000000000000003, 0.099999999999999978,
      0.099999999999999922, -0.39999999999999991, 0.10000000000000002,
      0.10000000000000005, -0.40000000000000008, 0.10000000000000006,
      0.09999999999999995, 0.099999999999999908, -0.39999999999999991,
      0.10000000000000003, 0.10000000000000002, -0.39999999999999997 },

    { 1.0, -1.0, -0.0, -1.0, 1.0, 0.0, 1.0, -0.0, -1.0, -1.0, 0.0, 1.0 },
    2.0,

    { 0.16666666666666669, 0.16666666666666663, -0.33333333333333326,
      0.16666666666666657, 0.16666666666666663, -0.33333333333333326,
      -0.16666666666666666, -0.16666666666666666, 0.33333333333333331,
      -0.16666666666666663, -0.16666666666666663, 0.33333333333333326 },
    0.2,
    0.005,
    0.000987,
    4.0,
    0.00024675,

    { -40.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -40.0, -0.0, -0.0, -0.0, -0.0,
      -0.0, -0.0, -40.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -40.0, -0.0, -0.0,
      -0.0, -0.0, -0.0, -0.0, -40.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -40.0 },

    { -200.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -200.0, -0.0, -0.0, -0.0, -0.0,
      -0.0, -0.0, -200.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -200.0, -0.0, -0.0,
      -0.0, -0.0, -0.0, -0.0, -200.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -200.0
    },
    520.0,
    260.0,
    165.26330246731402,
    4.2,
    5.3861678880387434,
    8.5,
    520.0,
    260.0,
    33.3606,
    130.0,
    0.15,
    0.019230769230769232,
    0.32249999999999979
  },

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S52>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S54>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S56>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S46>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S58>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S48>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S50>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S184>/S-Function'

  0.00016666666666666666,

  // Expression: 5
  //  Referenced by: '<S1>/Gain'

  5.0,

  // Expression: PHASE
  //  Referenced by: '<S110>/phase'

  0.75,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S188>/S-Function'

  0.00016666666666666666,

  // Expression: PHASE
  //  Referenced by: '<S111>/phase'

  0.5,

  // Expression: PHASE
  //  Referenced by: '<S112>/phase'

  0.25,

  // Expression: PHASE
  //  Referenced by: '<S113>/phase'

  0.0,

  // Expression: PHASE
  //  Referenced by: '<S122>/phase'

  0.75,

  // Expression: PHASE
  //  Referenced by: '<S123>/phase'

  0.5,

  // Expression: PHASE
  //  Referenced by: '<S124>/phase'

  0.25,

  // Expression: PHASE
  //  Referenced by: '<S125>/phase'

  0.0,

  // Expression: PHASE
  //  Referenced by: '<S135>/phase'

  0.75,

  // Expression: PHASE
  //  Referenced by: '<S136>/phase'

  0.5,

  // Expression: PHASE
  //  Referenced by: '<S137>/phase'

  0.25,

  // Expression: PHASE
  //  Referenced by: '<S138>/phase'

  0.0,

  // Expression: PHASE
  //  Referenced by: '<S147>/phase'

  0.75,

  // Expression: PHASE
  //  Referenced by: '<S148>/phase'

  0.5,

  // Expression: PHASE
  //  Referenced by: '<S149>/phase'

  0.25,

  // Expression: PHASE
  //  Referenced by: '<S150>/phase'

  0.0,

  // Expression: PHASE
  //  Referenced by: '<S159>/phase'

  0.75,

  // Expression: PHASE
  //  Referenced by: '<S160>/phase'

  0.5,

  // Expression: PHASE
  //  Referenced by: '<S161>/phase'

  0.25,

  // Expression: PHASE
  //  Referenced by: '<S162>/phase'

  0.0,

  // Expression: PHASE
  //  Referenced by: '<S171>/phase'

  0.75,

  // Expression: PHASE
  //  Referenced by: '<S172>/phase'

  0.5,

  // Expression: PHASE
  //  Referenced by: '<S173>/phase'

  0.25,

  // Expression: PHASE
  //  Referenced by: '<S174>/phase'

  0.0,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S186>/S-Function'

  0.00016666666666666666,

  // Expression: single(deadtime)
  //  Referenced by: '<S115>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S115>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S115>/PWM'

  0.75F,

  // Expression: single(deadtime)
  //  Referenced by: '<S117>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S117>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S117>/PWM'

  0.5F,

  // Expression: single(deadtime)
  //  Referenced by: '<S119>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S119>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S119>/PWM'

  0.25F,

  // Expression: single(deadtime)
  //  Referenced by: '<S121>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S121>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S121>/PWM'

  0.0F,

  // Expression: single(deadtime)
  //  Referenced by: '<S127>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S127>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S127>/PWM'

  0.75F,

  // Expression: single(deadtime)
  //  Referenced by: '<S129>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S129>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S129>/PWM'

  0.5F,

  // Expression: single(deadtime)
  //  Referenced by: '<S131>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S131>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S131>/PWM'

  0.25F,

  // Expression: single(deadtime)
  //  Referenced by: '<S133>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S133>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S133>/PWM'

  0.0F,

  // Expression: single(deadtime)
  //  Referenced by: '<S140>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S140>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S140>/PWM'

  0.75F,

  // Expression: single(deadtime)
  //  Referenced by: '<S142>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S142>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S142>/PWM'

  0.5F,

  // Expression: single(deadtime)
  //  Referenced by: '<S144>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S144>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S144>/PWM'

  0.25F,

  // Expression: single(deadtime)
  //  Referenced by: '<S146>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S146>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S146>/PWM'

  0.0F,

  // Expression: single(deadtime)
  //  Referenced by: '<S152>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S152>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S152>/PWM'

  0.75F,

  // Expression: single(deadtime)
  //  Referenced by: '<S154>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S154>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S154>/PWM'

  0.5F,

  // Expression: single(deadtime)
  //  Referenced by: '<S156>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S156>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S156>/PWM'

  0.25F,

  // Expression: single(deadtime)
  //  Referenced by: '<S158>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S158>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S158>/PWM'

  0.0F,

  // Expression: single(deadtime)
  //  Referenced by: '<S164>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S164>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S164>/PWM'

  0.75F,

  // Expression: single(deadtime)
  //  Referenced by: '<S166>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S166>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S166>/PWM'

  0.5F,

  // Expression: single(deadtime)
  //  Referenced by: '<S168>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S168>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S168>/PWM'

  0.25F,

  // Expression: single(deadtime)
  //  Referenced by: '<S170>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S170>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S170>/PWM'

  0.0F,

  // Expression: single(deadtime)
  //  Referenced by: '<S176>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S176>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S176>/PWM'

  0.75F,

  // Expression: single(deadtime)
  //  Referenced by: '<S178>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S178>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S178>/PWM'

  0.5F,

  // Expression: single(deadtime)
  //  Referenced by: '<S180>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S180>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S180>/PWM'

  0.25F,

  // Expression: single(deadtime)
  //  Referenced by: '<S182>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S182>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S182>/PWM'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S52>/ADC'

  0.0047937F,

  // Expression: single(offset)
  //  Referenced by: '<S52>/ADC'

  0.0F,

  // Computed Parameter: Gain8_Gain
  //  Referenced by: '<S1>/Gain8'

  0.00658572186F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S79>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S79>/S-Function'

  10.0F,

  // Expression: single(gain)
  //  Referenced by: '<S54>/ADC'

  0.00030518F,

  // Expression: single(offset)
  //  Referenced by: '<S54>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S56>/ADC'

  0.00030518F,

  // Expression: single(offset)
  //  Referenced by: '<S56>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S46>/ADC'

  0.00030518F,

  // Expression: single(offset)
  //  Referenced by: '<S46>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S58>/ADC'

  0.00030518F,

  // Expression: single(offset)
  //  Referenced by: '<S58>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S48>/ADC'

  0.00030518F,

  // Expression: single(offset)
  //  Referenced by: '<S48>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S50>/ADC'

  0.00030518F,

  // Expression: single(offset)
  //  Referenced by: '<S50>/ADC'

  0.0F,

  // Expression: M2C.A
  //  Referenced by: '<S37>/Gain1'

  { 1.0F, 0.0F, -1.0F, -0.0F, -0.0F, 1.0F, 0.0F, -0.0F, -1.0F, -0.0F, 1.0F, 0.0F,
    -0.0F, -0.0F, -1.0F, 0.0F, 1.0F, -1.0F, -0.0F, -0.0F, 0.0F, 1.0F, -0.0F,
    -1.0F, -0.0F, 0.0F, 1.0F, -0.0F, -0.0F, -1.0F },

  // Computed Parameter: Gain2_Gain
  //  Referenced by: '<S37>/Gain2'

  -1.0F,

  // Computed Parameter: Gain3_Gain
  //  Referenced by: '<S134>/Gain3'

  { 1.0F, 0.0F, 0.5F, -0.5F, 0.866025388F, 0.5F, -0.5F, -0.866025388F, 0.5F },

  // Computed Parameter: Gain1_Gain_b
  //  Referenced by: '<S134>/Gain1'

  0.666666687F,

  // Computed Parameter: Gain9_Gain
  //  Referenced by: '<S1>/Gain9'

  0.125658825F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S81>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S81>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S83>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S83>/S-Function'

  10.0F,

  // Computed Parameter: Gain6_Gain
  //  Referenced by: '<S1>/Gain6'

  0.238095239F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S109>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S109>/S-Function'

  10.0F,

  // Expression: single(private_nb_oversamples)
  //  Referenced by: '<S63>/S-Function'

  0.0F,

  // Expression: single(interrupt_phase)
  //  Referenced by: '<S63>/S-Function'

  0.5F,

  // Expression: single(frequency)
  //  Referenced by: '<S65>/CLK1'

  6000.0F,

  // Expression: single(INITIALVAL)
  //  Referenced by: '<S184>/S-Function'

  0.0F,

  // Expression: single(VAL_MIN)
  //  Referenced by: '<S184>/S-Function'

  0.0F,

  // Expression: single(VAL_MAX)
  //  Referenced by: '<S184>/S-Function'

  1.0F,

  // Expression: single(0)
  //  Referenced by: '<S184>/S-Function'

  0.0F,

  // Expression: single(0)
  //  Referenced by: '<S184>/S-Function'

  0.0F,

  // Computed Parameter: DiscreteTimeIntegrator2_gainval
  //  Referenced by: '<S1>/Discrete-Time Integrator2'

  0.000166666665F,

  // Computed Parameter: DiscreteTimeIntegrator2_IC
  //  Referenced by: '<S1>/Discrete-Time Integrator2'

  0.0F,

  // Computed Parameter: DiscreteTimeIntegrator2_UpperSa
  //  Referenced by: '<S1>/Discrete-Time Integrator2'

  0.5F,

  // Computed Parameter: DiscreteTimeIntegrator2_LowerSa
  //  Referenced by: '<S1>/Discrete-Time Integrator2'

  0.0F,

  // Computed Parameter: Gain2_Gain_d
  //  Referenced by: '<S1>/Gain2'

  302.707214F,

  // Computed Parameter: Bias1_Bias
  //  Referenced by: '<S1>/Bias1'

  7.5615F,

  // Computed Parameter: DiscreteTimeIntegrator1_gainval
  //  Referenced by: '<S1>/Discrete-Time Integrator1'

  0.000166666665F,

  // Computed Parameter: DiscreteTimeIntegrator1_IC
  //  Referenced by: '<S1>/Discrete-Time Integrator1'

  0.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S89>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S89>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S93>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S93>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S95>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S95>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S97>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S97>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S99>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S99>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S101>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S101>/S-Function'

  10.0F,

  // Computed Parameter: Saturation_UpperSat
  //  Referenced by: '<S60>/Saturation'

  50000.0F,

  // Computed Parameter: Saturation_LowerSat
  //  Referenced by: '<S60>/Saturation'

  10000.0F,

  // Expression: single(frequency)
  //  Referenced by: '<S60>/CLK1'

  1500.0F,

  // Computed Parameter: DiscreteTimeIntegrator3_gainval
  //  Referenced by: '<S1>/Discrete-Time Integrator3'

  0.000166666665F,

  // Computed Parameter: DiscreteTimeIntegrator3_IC
  //  Referenced by: '<S1>/Discrete-Time Integrator3'

  0.0F,

  // Computed Parameter: DiscreteTimeIntegrator3_UpperSa
  //  Referenced by: '<S1>/Discrete-Time Integrator3'

  0.5F,

  // Computed Parameter: DiscreteTimeIntegrator3_LowerSa
  //  Referenced by: '<S1>/Discrete-Time Integrator3'

  0.0F,

  // Computed Parameter: Gain7_Gain
  //  Referenced by: '<S1>/Gain7'

  314.159271F,

  // Expression: single(INITIALVAL)
  //  Referenced by: '<S188>/S-Function'

  0.0F,

  // Expression: single(VAL_MIN)
  //  Referenced by: '<S188>/S-Function'

  0.0F,

  // Expression: single(VAL_MAX)
  //  Referenced by: '<S188>/S-Function'

  1.0F,

  // Expression: single(0)
  //  Referenced by: '<S188>/S-Function'

  0.0F,

  // Expression: single(0)
  //  Referenced by: '<S188>/S-Function'

  0.0F,

  // Expression: single(INITIALVAL)
  //  Referenced by: '<S186>/S-Function'

  0.0F,

  // Expression: single(VAL_MIN)
  //  Referenced by: '<S186>/S-Function'

  0.0F,

  // Expression: single(VAL_MAX)
  //  Referenced by: '<S186>/S-Function'

  1.0F,

  // Expression: single(0)
  //  Referenced by: '<S186>/S-Function'

  0.0F,

  // Expression: single(0)
  //  Referenced by: '<S186>/S-Function'

  0.0F,

  // Computed Parameter: Gain1_Gain_g
  //  Referenced by: '<S1>/Gain1'

  0.117647059F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S85>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S85>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S87>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S87>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S91>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S91>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S103>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S103>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S105>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S105>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S107>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S107>/S-Function'

  10.0F,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S79>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S79>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S81>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S81>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S83>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S83>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S109>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S109>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S184>/S-Function'

  1000000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S89>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S89>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S93>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S93>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S95>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S95>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S97>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S97>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S99>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S99>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S101>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S101>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S188>/S-Function'

  1000000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S186>/S-Function'

  1000000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S85>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S85>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S87>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S87>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S91>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S91>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S103>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S103>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S105>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S105>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S107>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S107>/S-Function'

  2000U,

  // Expression: int16(lane)
  //  Referenced by: '<S115>/PWM'

  2,

  // Expression: int16(carrier)
  //  Referenced by: '<S115>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S115>/PWM'

  1,

  // Expression: int16(outconf)
  //  Referenced by: '<S115>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S115>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S115>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S117>/PWM'

  6,

  // Expression: int16(carrier)
  //  Referenced by: '<S117>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S117>/PWM'

  1,

  // Expression: int16(outconf)
  //  Referenced by: '<S117>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S117>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S117>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S119>/PWM'

  3,

  // Expression: int16(carrier)
  //  Referenced by: '<S119>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S119>/PWM'

  1,

  // Expression: int16(outconf)
  //  Referenced by: '<S119>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S119>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S119>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S121>/PWM'

  7,

  // Expression: int16(carrier)
  //  Referenced by: '<S121>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S121>/PWM'

  1,

  // Expression: int16(outconf)
  //  Referenced by: '<S121>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S121>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S121>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S127>/PWM'

  0,

  // Expression: int16(carrier)
  //  Referenced by: '<S127>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S127>/PWM'

  1,

  // Expression: int16(outconf)
  //  Referenced by: '<S127>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S127>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S127>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S129>/PWM'

  4,

  // Expression: int16(carrier)
  //  Referenced by: '<S129>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S129>/PWM'

  1,

  // Expression: int16(outconf)
  //  Referenced by: '<S129>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S129>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S129>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S131>/PWM'

  1,

  // Expression: int16(carrier)
  //  Referenced by: '<S131>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S131>/PWM'

  1,

  // Expression: int16(outconf)
  //  Referenced by: '<S131>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S131>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S131>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S133>/PWM'

  5,

  // Expression: int16(carrier)
  //  Referenced by: '<S133>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S133>/PWM'

  1,

  // Expression: int16(outconf)
  //  Referenced by: '<S133>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S133>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S133>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S140>/PWM'

  2,

  // Expression: int16(carrier)
  //  Referenced by: '<S140>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S140>/PWM'

  1,

  // Expression: int16(outconf)
  //  Referenced by: '<S140>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S140>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S140>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S142>/PWM'

  6,

  // Expression: int16(carrier)
  //  Referenced by: '<S142>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S142>/PWM'

  1,

  // Expression: int16(outconf)
  //  Referenced by: '<S142>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S142>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S142>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S144>/PWM'

  3,

  // Expression: int16(carrier)
  //  Referenced by: '<S144>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S144>/PWM'

  1,

  // Expression: int16(outconf)
  //  Referenced by: '<S144>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S144>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S144>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S146>/PWM'

  7,

  // Expression: int16(carrier)
  //  Referenced by: '<S146>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S146>/PWM'

  1,

  // Expression: int16(outconf)
  //  Referenced by: '<S146>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S146>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S146>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S152>/PWM'

  8,

  // Expression: int16(carrier)
  //  Referenced by: '<S152>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S152>/PWM'

  1,

  // Expression: int16(outconf)
  //  Referenced by: '<S152>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S152>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S152>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S154>/PWM'

  12,

  // Expression: int16(carrier)
  //  Referenced by: '<S154>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S154>/PWM'

  1,

  // Expression: int16(outconf)
  //  Referenced by: '<S154>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S154>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S154>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S156>/PWM'

  9,

  // Expression: int16(carrier)
  //  Referenced by: '<S156>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S156>/PWM'

  1,

  // Expression: int16(outconf)
  //  Referenced by: '<S156>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S156>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S156>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S158>/PWM'

  13,

  // Expression: int16(carrier)
  //  Referenced by: '<S158>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S158>/PWM'

  1,

  // Expression: int16(outconf)
  //  Referenced by: '<S158>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S158>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S158>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S164>/PWM'

  10,

  // Expression: int16(carrier)
  //  Referenced by: '<S164>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S164>/PWM'

  1,

  // Expression: int16(outconf)
  //  Referenced by: '<S164>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S164>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S164>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S166>/PWM'

  14,

  // Expression: int16(carrier)
  //  Referenced by: '<S166>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S166>/PWM'

  1,

  // Expression: int16(outconf)
  //  Referenced by: '<S166>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S166>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S166>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S168>/PWM'

  11,

  // Expression: int16(carrier)
  //  Referenced by: '<S168>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S168>/PWM'

  1,

  // Expression: int16(outconf)
  //  Referenced by: '<S168>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S168>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S168>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S170>/PWM'

  15,

  // Expression: int16(carrier)
  //  Referenced by: '<S170>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S170>/PWM'

  1,

  // Expression: int16(outconf)
  //  Referenced by: '<S170>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S170>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S170>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S176>/PWM'

  0,

  // Expression: int16(carrier)
  //  Referenced by: '<S176>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S176>/PWM'

  1,

  // Expression: int16(outconf)
  //  Referenced by: '<S176>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S176>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S176>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S178>/PWM'

  4,

  // Expression: int16(carrier)
  //  Referenced by: '<S178>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S178>/PWM'

  1,

  // Expression: int16(outconf)
  //  Referenced by: '<S178>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S178>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S178>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S180>/PWM'

  1,

  // Expression: int16(carrier)
  //  Referenced by: '<S180>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S180>/PWM'

  1,

  // Expression: int16(outconf)
  //  Referenced by: '<S180>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S180>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S180>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S182>/PWM'

  5,

  // Expression: int16(carrier)
  //  Referenced by: '<S182>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S182>/PWM'

  1,

  // Expression: int16(outconf)
  //  Referenced by: '<S182>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S182>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S182>/PWM'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S52>/ADC'

  3,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S52>/ADC'

  0,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S52>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S52>/ADC'

  1,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S79>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S79>/S-Function'

  0,

  // Expression: int16(channel)
  //  Referenced by: '<S54>/ADC'

  7,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S54>/ADC'

  2,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S54>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S54>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S56>/ADC'

  6,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S56>/ADC'

  2,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S56>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S56>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S46>/ADC'

  5,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S46>/ADC'

  2,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S46>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S46>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S58>/ADC'

  4,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S58>/ADC'

  2,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S58>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S58>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S48>/ADC'

  3,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S48>/ADC'

  2,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S48>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S48>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S50>/ADC'

  2,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S50>/ADC'

  2,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S50>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S50>/ADC'

  1,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S81>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S81>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S83>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S83>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S109>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S109>/S-Function'

  0,

  // Computed Parameter: clk_id_Value
  //  Referenced by: '<S65>/clk_id'

  0,

  // Expression: int16(id)
  //  Referenced by: '<S65>/CLK1'

  0,

  // Expression: int16(DATA_TYPE)
  //  Referenced by: '<S184>/S-Function'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S67>/DAC'

  1,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S67>/DAC'

  0,

  // Expression: int16(channel)
  //  Referenced by: '<S69>/DAC'

  2,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S69>/DAC'

  0,

  // Expression: int16(channel)
  //  Referenced by: '<S71>/DAC'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S71>/DAC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S73>/DAC'

  1,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S73>/DAC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S75>/DAC'

  2,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S75>/DAC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S77>/DAC'

  3,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S77>/DAC'

  1,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S89>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S89>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S93>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S93>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S95>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S95>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S97>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S97>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S99>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S99>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S101>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S101>/S-Function'

  0,

  // Computed Parameter: clk_id_Value_g
  //  Referenced by: '<S60>/clk_id'

  1,

  // Expression: int16(id)
  //  Referenced by: '<S60>/CLK1'

  1,

  // Expression: int16(DATA_TYPE)
  //  Referenced by: '<S188>/S-Function'

  1,

  // Expression: int16(DATA_TYPE)
  //  Referenced by: '<S186>/S-Function'

  1,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S85>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S85>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S87>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S87>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S91>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S91>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S103>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S103>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S105>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S105>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S107>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S107>/S-Function'

  0,

  // Computed Parameter: SFunction_P1
  //  Referenced by: '<S79>/S-Function'

  { 119U, 109U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S79>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S79>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S79>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14
  //  Referenced by: '<S79>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_h
  //  Referenced by: '<S81>/S-Function'

  { 105U, 109U, 95U, 97U, 108U, 112U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S81>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S81>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S81>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_n
  //  Referenced by: '<S81>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_o
  //  Referenced by: '<S83>/S-Function'

  { 105U, 109U, 95U, 98U, 101U, 116U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S83>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S83>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S83>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_ne
  //  Referenced by: '<S83>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_k
  //  Referenced by: '<S109>/S-Function'

  { 105U, 80U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S109>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S109>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S109>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_m
  //  Referenced by: '<S109>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Expression: uint16(interrupt_pstsclr)
  //  Referenced by: '<S63>/S-Function'

  0U,

  // Expression: uint16(private_adc_delay_ns)
  //  Referenced by: '<S63>/S-Function'

  2000U,

  // Expression: uint16(highest_device_id)
  //  Referenced by: '<S63>/S-Function'

  2U,

  // Computed Parameter: SFunction_P1_e
  //  Referenced by: '<S184>/S-Function'

  { 114U, 101U, 115U, 101U, 116U, 95U, 73U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S184>/S-Function'

  1U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S184>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S184>/S-Function'

  2U,

  // Expression: uint16(ETH_PORT)
  //  Referenced by: '<S184>/S-Function'

  2000U,

  // Computed Parameter: SFunction_P1_p
  //  Referenced by: '<S89>/S-Function'

  { 68U, 53U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S89>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S89>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S89>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_d
  //  Referenced by: '<S89>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_a
  //  Referenced by: '<S93>/S-Function'

  { 68U, 54U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S93>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S93>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S93>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_i
  //  Referenced by: '<S93>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_g
  //  Referenced by: '<S95>/S-Function'

  { 68U, 49U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S95>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S95>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S95>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_b
  //  Referenced by: '<S95>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_i
  //  Referenced by: '<S97>/S-Function'

  { 68U, 50U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S97>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S97>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S97>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_c
  //  Referenced by: '<S97>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_m
  //  Referenced by: '<S99>/S-Function'

  { 68U, 51U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S99>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S99>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S99>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_f
  //  Referenced by: '<S99>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_n
  //  Referenced by: '<S101>/S-Function'

  { 68U, 52U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S101>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S101>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S101>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_p
  //  Referenced by: '<S101>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_md
  //  Referenced by: '<S188>/S-Function'

  { 101U, 110U, 97U, 98U, 108U, 101U, 95U, 70U, 80U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S188>/S-Function'

  1U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S188>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S188>/S-Function'

  2U,

  // Expression: uint16(ETH_PORT)
  //  Referenced by: '<S188>/S-Function'

  2000U,

  // Computed Parameter: SFunction_P1_i3
  //  Referenced by: '<S186>/S-Function'

  { 86U, 102U, 95U, 115U, 108U, 111U, 112U, 101U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S186>/S-Function'

  1U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S186>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S186>/S-Function'

  2U,

  // Expression: uint16(ETH_PORT)
  //  Referenced by: '<S186>/S-Function'

  2000U,

  // Computed Parameter: SFunction_P1_oj
  //  Referenced by: '<S85>/S-Function'

  { 105U, 115U, 49U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S85>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S85>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S85>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_n5
  //  Referenced by: '<S85>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_j
  //  Referenced by: '<S87>/S-Function'

  { 105U, 115U, 50U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S87>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S87>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S87>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_mw
  //  Referenced by: '<S87>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_c
  //  Referenced by: '<S91>/S-Function'

  { 105U, 115U, 51U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S91>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S91>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S91>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_cc
  //  Referenced by: '<S91>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_hj
  //  Referenced by: '<S103>/S-Function'

  { 105U, 115U, 52U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S103>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S103>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S103>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_ey
  //  Referenced by: '<S103>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_ow
  //  Referenced by: '<S105>/S-Function'

  { 105U, 115U, 53U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S105>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S105>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S105>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_do
  //  Referenced by: '<S105>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_nq
  //  Referenced by: '<S107>/S-Function'

  { 105U, 115U, 54U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S107>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S107>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S107>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_ig
  //  Referenced by: '<S107>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S115>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S115>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S115>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S117>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S117>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S117>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S119>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S119>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S119>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S121>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S121>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S121>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S127>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S127>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S127>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S129>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S129>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S129>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S131>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S131>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S131>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S133>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S133>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S133>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S140>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S140>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S140>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S142>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S142>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S142>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S144>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S144>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S144>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S146>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S146>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S146>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S152>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S152>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S152>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S154>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S154>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S154>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S156>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S156>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S156>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S158>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S158>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S158>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S164>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S164>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S164>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S166>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S166>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S166>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S168>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S168>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S168>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S170>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S170>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S170>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S176>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S176>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S176>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S178>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S178>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S178>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S180>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S180>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S180>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S182>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S182>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S182>/PWM'

  true,

  // Expression: boolean(usehist)
  //  Referenced by: '<S52>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S52>/ADC'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S79>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S79>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S79>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S79>/S-Function'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S54>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S54>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S56>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S56>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S46>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S46>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S58>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S58>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S48>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S48>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S50>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S50>/ADC'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S81>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S81>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S81>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S81>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S83>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S83>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S83>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S83>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S109>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S109>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S109>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S109>/S-Function'

  false,

  // Expression: boolean(var_freq)
  //  Referenced by: '<S65>/CLK1'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S184>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S184>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S184>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S184>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S89>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S89>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S89>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S89>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S93>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S93>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S93>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S93>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S95>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S95>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S95>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S95>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S97>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S97>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S97>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S97>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S99>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S99>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S99>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S99>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S101>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S101>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S101>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S101>/S-Function'

  false,

  // Expression: boolean(var_freq)
  //  Referenced by: '<S60>/CLK1'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S188>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S188>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S188>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S188>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S186>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S186>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S186>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S186>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S85>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S85>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S85>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S85>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S87>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S87>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S87>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S87>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S91>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S91>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S91>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S91>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S103>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S103>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S103>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S103>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S105>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S105>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S105>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S105>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S107>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S107>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S107>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S107>/S-Function'

  false
};

//
// End of automatically generated code
// Copyright imperix ltd. Switzerland 2021
// [EOF]
//
