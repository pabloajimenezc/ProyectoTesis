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
// Model version                  : 19.85
// Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
// C/C++ source code generated on : Mon Feb  2 19:19:24 2026
//
#include "imperix_vf_ctrl.h"

// Block parameters (default storage)
P_imperix_vf_ctrl_T imperix_vf_ctrl_P = {
  // Variable: M2C
  //  Referenced by: '<S1>/Gain1'

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

  // Variable: IM
  //  Referenced by: '<S1>/Gain8'

  {
    380.0,
    3000.0,
    0.81,
    3703.7037037037035,
    50.0,
    25.0,
    151.84364492350667,
    75.921822461753337,
    5.6271956061367039,
    19.757165349338731,
    0.98761594822932308,
    2.0,
    0.1,
    1.8,
    1.8,
    0.0026,
    0.0026,
    0.2351,
    0.2377,
    0.2377,
    0.98906184265881369,
    0.98906184265881369,
    0.13205555555555554,
    0.021756671396352067,
    3.5608379914865664,
    0.0051715607909128859,
    0.0014523437469711675,
    2.967185527976441,
    4.2008334675853813,
    6.7420479665319242
  },

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S42>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S44>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S46>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S36>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S48>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S38>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S40>/ADC'

  0.00016666666666666666,

  // Expression: 260
  //  Referenced by: '<S1>/Constant3'

  260.0,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S157>/S-Function'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S155>/S-Function'

  0.00016666666666666666,

  // Expression: PHASE
  //  Referenced by: '<S82>/phase'

  0.75,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S159>/S-Function'

  0.00016666666666666666,

  // Expression: PHASE
  //  Referenced by: '<S83>/phase'

  0.5,

  // Expression: PHASE
  //  Referenced by: '<S84>/phase'

  0.25,

  // Expression: PHASE
  //  Referenced by: '<S85>/phase'

  0.0,

  // Expression: PHASE
  //  Referenced by: '<S94>/phase'

  0.75,

  // Expression: PHASE
  //  Referenced by: '<S95>/phase'

  0.5,

  // Expression: PHASE
  //  Referenced by: '<S96>/phase'

  0.25,

  // Expression: PHASE
  //  Referenced by: '<S97>/phase'

  0.0,

  // Expression: PHASE
  //  Referenced by: '<S106>/phase'

  0.75,

  // Expression: PHASE
  //  Referenced by: '<S107>/phase'

  0.5,

  // Expression: PHASE
  //  Referenced by: '<S108>/phase'

  0.25,

  // Expression: PHASE
  //  Referenced by: '<S109>/phase'

  0.0,

  // Expression: PHASE
  //  Referenced by: '<S118>/phase'

  0.75,

  // Expression: PHASE
  //  Referenced by: '<S119>/phase'

  0.5,

  // Expression: PHASE
  //  Referenced by: '<S120>/phase'

  0.25,

  // Expression: PHASE
  //  Referenced by: '<S121>/phase'

  0.0,

  // Expression: PHASE
  //  Referenced by: '<S130>/phase'

  0.75,

  // Expression: PHASE
  //  Referenced by: '<S131>/phase'

  0.5,

  // Expression: PHASE
  //  Referenced by: '<S132>/phase'

  0.25,

  // Expression: PHASE
  //  Referenced by: '<S133>/phase'

  0.0,

  // Expression: PHASE
  //  Referenced by: '<S142>/phase'

  0.75,

  // Expression: PHASE
  //  Referenced by: '<S143>/phase'

  0.5,

  // Expression: PHASE
  //  Referenced by: '<S144>/phase'

  0.25,

  // Expression: PHASE
  //  Referenced by: '<S145>/phase'

  0.0,

  // Expression: single(deadtime)
  //  Referenced by: '<S87>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S87>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S87>/PWM'

  0.75F,

  // Expression: single(deadtime)
  //  Referenced by: '<S89>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S89>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S89>/PWM'

  0.5F,

  // Expression: single(deadtime)
  //  Referenced by: '<S91>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S91>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S91>/PWM'

  0.25F,

  // Expression: single(deadtime)
  //  Referenced by: '<S93>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S93>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S93>/PWM'

  0.0F,

  // Expression: single(deadtime)
  //  Referenced by: '<S99>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S99>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S99>/PWM'

  0.75F,

  // Expression: single(deadtime)
  //  Referenced by: '<S101>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S101>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S101>/PWM'

  0.5F,

  // Expression: single(deadtime)
  //  Referenced by: '<S103>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S103>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S103>/PWM'

  0.25F,

  // Expression: single(deadtime)
  //  Referenced by: '<S105>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S105>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S105>/PWM'

  0.0F,

  // Expression: single(deadtime)
  //  Referenced by: '<S111>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S111>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S111>/PWM'

  0.75F,

  // Expression: single(deadtime)
  //  Referenced by: '<S113>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S113>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S113>/PWM'

  0.5F,

  // Expression: single(deadtime)
  //  Referenced by: '<S115>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S115>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S115>/PWM'

  0.25F,

  // Expression: single(deadtime)
  //  Referenced by: '<S117>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S117>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S117>/PWM'

  0.0F,

  // Expression: single(deadtime)
  //  Referenced by: '<S123>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S123>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S123>/PWM'

  0.75F,

  // Expression: single(deadtime)
  //  Referenced by: '<S125>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S125>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S125>/PWM'

  0.5F,

  // Expression: single(deadtime)
  //  Referenced by: '<S127>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S127>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S127>/PWM'

  0.25F,

  // Expression: single(deadtime)
  //  Referenced by: '<S129>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S129>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S129>/PWM'

  0.0F,

  // Expression: single(deadtime)
  //  Referenced by: '<S135>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S135>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S135>/PWM'

  0.75F,

  // Expression: single(deadtime)
  //  Referenced by: '<S137>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S137>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S137>/PWM'

  0.5F,

  // Expression: single(deadtime)
  //  Referenced by: '<S139>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S139>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S139>/PWM'

  0.25F,

  // Expression: single(deadtime)
  //  Referenced by: '<S141>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S141>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S141>/PWM'

  0.0F,

  // Expression: single(deadtime)
  //  Referenced by: '<S147>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S147>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S147>/PWM'

  0.75F,

  // Expression: single(deadtime)
  //  Referenced by: '<S149>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S149>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S149>/PWM'

  0.5F,

  // Expression: single(deadtime)
  //  Referenced by: '<S151>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S151>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S151>/PWM'

  0.25F,

  // Expression: single(deadtime)
  //  Referenced by: '<S153>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S153>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S153>/PWM'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S42>/ADC'

  0.0047937F,

  // Expression: single(offset)
  //  Referenced by: '<S42>/ADC'

  0.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S57>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S57>/S-Function'

  10.0F,

  // Expression: single(gain)
  //  Referenced by: '<S44>/ADC'

  0.00030518F,

  // Expression: single(offset)
  //  Referenced by: '<S44>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S46>/ADC'

  0.00030518F,

  // Expression: single(offset)
  //  Referenced by: '<S46>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S36>/ADC'

  0.00030518F,

  // Expression: single(offset)
  //  Referenced by: '<S36>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S48>/ADC'

  0.00030518F,

  // Expression: single(offset)
  //  Referenced by: '<S48>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S38>/ADC'

  0.00030518F,

  // Expression: single(offset)
  //  Referenced by: '<S38>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S40>/ADC'

  0.00030518F,

  // Expression: single(offset)
  //  Referenced by: '<S40>/ADC'

  0.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S59>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S59>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S61>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S61>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S65>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S65>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S77>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S77>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S79>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S79>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S81>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S81>/S-Function'

  10.0F,

  // Expression: single(private_nb_oversamples)
  //  Referenced by: '<S53>/S-Function'

  0.0F,

  // Expression: single(interrupt_phase)
  //  Referenced by: '<S53>/S-Function'

  0.5F,

  // Expression: single(frequency)
  //  Referenced by: '<S55>/CLK1'

  6000.0F,

  // Expression: single(INITIALVAL)
  //  Referenced by: '<S157>/S-Function'

  0.5F,

  // Expression: single(VAL_MIN)
  //  Referenced by: '<S157>/S-Function'

  0.0F,

  // Expression: single(VAL_MAX)
  //  Referenced by: '<S157>/S-Function'

  1.0F,

  // Expression: single(0)
  //  Referenced by: '<S157>/S-Function'

  0.0F,

  // Expression: single(0)
  //  Referenced by: '<S157>/S-Function'

  0.0F,

  // Computed Parameter: Gain23_Gain
  //  Referenced by: '<S1>/Gain23'

  310.268707F,

  // Computed Parameter: Bias1_Bias
  //  Referenced by: '<S1>/Bias1'

  0.0F,

  // Computed Parameter: DiscreteTimeIntegrator1_gainval
  //  Referenced by: '<S1>/Discrete-Time Integrator1'

  0.000166666665F,

  // Computed Parameter: DiscreteTimeIntegrator1_IC
  //  Referenced by: '<S1>/Discrete-Time Integrator1'

  0.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S63>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S63>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S67>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S67>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S69>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S69>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S71>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S71>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S73>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S73>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S75>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S75>/S-Function'

  10.0F,

  // Computed Parameter: Saturation_UpperSat
  //  Referenced by: '<S50>/Saturation'

  50000.0F,

  // Computed Parameter: Saturation_LowerSat
  //  Referenced by: '<S50>/Saturation'

  10000.0F,

  // Expression: single(frequency)
  //  Referenced by: '<S50>/CLK1'

  1500.0F,

  // Expression: single(INITIALVAL)
  //  Referenced by: '<S155>/S-Function'

  0.5F,

  // Expression: single(VAL_MIN)
  //  Referenced by: '<S155>/S-Function'

  0.0F,

  // Expression: single(VAL_MAX)
  //  Referenced by: '<S155>/S-Function'

  1.0F,

  // Expression: single(0)
  //  Referenced by: '<S155>/S-Function'

  0.0F,

  // Expression: single(0)
  //  Referenced by: '<S155>/S-Function'

  0.0F,

  // Computed Parameter: Gain22_Gain
  //  Referenced by: '<S1>/Gain22'

  314.159271F,

  // Expression: single(INITIALVAL)
  //  Referenced by: '<S159>/S-Function'

  1.0F,

  // Expression: single(VAL_MIN)
  //  Referenced by: '<S159>/S-Function'

  0.0F,

  // Expression: single(VAL_MAX)
  //  Referenced by: '<S159>/S-Function'

  1.0F,

  // Expression: single(0)
  //  Referenced by: '<S159>/S-Function'

  0.0F,

  // Expression: single(0)
  //  Referenced by: '<S159>/S-Function'

  0.0F,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S57>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S57>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S59>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S59>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S61>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S61>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S65>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S65>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S77>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S77>/S-Function'

  2000U,

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
  //  Referenced by: '<S157>/S-Function'

  1000000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S63>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S63>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S67>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S67>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S69>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S69>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S71>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S71>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S73>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S73>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S75>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S75>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S155>/S-Function'

  1000000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S159>/S-Function'

  1000000U,

  // Expression: int16(lane)
  //  Referenced by: '<S87>/PWM'

  2,

  // Expression: int16(carrier)
  //  Referenced by: '<S87>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S87>/PWM'

  1,

  // Expression: int16(outconf)
  //  Referenced by: '<S87>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S87>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S87>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S89>/PWM'

  6,

  // Expression: int16(carrier)
  //  Referenced by: '<S89>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S89>/PWM'

  1,

  // Expression: int16(outconf)
  //  Referenced by: '<S89>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S89>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S89>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S91>/PWM'

  3,

  // Expression: int16(carrier)
  //  Referenced by: '<S91>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S91>/PWM'

  1,

  // Expression: int16(outconf)
  //  Referenced by: '<S91>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S91>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S91>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S93>/PWM'

  7,

  // Expression: int16(carrier)
  //  Referenced by: '<S93>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S93>/PWM'

  1,

  // Expression: int16(outconf)
  //  Referenced by: '<S93>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S93>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S93>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S99>/PWM'

  0,

  // Expression: int16(carrier)
  //  Referenced by: '<S99>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S99>/PWM'

  1,

  // Expression: int16(outconf)
  //  Referenced by: '<S99>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S99>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S99>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S101>/PWM'

  4,

  // Expression: int16(carrier)
  //  Referenced by: '<S101>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S101>/PWM'

  1,

  // Expression: int16(outconf)
  //  Referenced by: '<S101>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S101>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S101>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S103>/PWM'

  1,

  // Expression: int16(carrier)
  //  Referenced by: '<S103>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S103>/PWM'

  1,

  // Expression: int16(outconf)
  //  Referenced by: '<S103>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S103>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S103>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S105>/PWM'

  5,

  // Expression: int16(carrier)
  //  Referenced by: '<S105>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S105>/PWM'

  1,

  // Expression: int16(outconf)
  //  Referenced by: '<S105>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S105>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S105>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S111>/PWM'

  2,

  // Expression: int16(carrier)
  //  Referenced by: '<S111>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S111>/PWM'

  1,

  // Expression: int16(outconf)
  //  Referenced by: '<S111>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S111>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S111>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S113>/PWM'

  6,

  // Expression: int16(carrier)
  //  Referenced by: '<S113>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S113>/PWM'

  1,

  // Expression: int16(outconf)
  //  Referenced by: '<S113>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S113>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S113>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S115>/PWM'

  3,

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

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S117>/PWM'

  7,

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

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S123>/PWM'

  8,

  // Expression: int16(carrier)
  //  Referenced by: '<S123>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S123>/PWM'

  1,

  // Expression: int16(outconf)
  //  Referenced by: '<S123>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S123>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S123>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S125>/PWM'

  12,

  // Expression: int16(carrier)
  //  Referenced by: '<S125>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S125>/PWM'

  1,

  // Expression: int16(outconf)
  //  Referenced by: '<S125>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S125>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S125>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S127>/PWM'

  9,

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

  13,

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
  //  Referenced by: '<S135>/PWM'

  10,

  // Expression: int16(carrier)
  //  Referenced by: '<S135>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S135>/PWM'

  1,

  // Expression: int16(outconf)
  //  Referenced by: '<S135>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S135>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S135>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S137>/PWM'

  14,

  // Expression: int16(carrier)
  //  Referenced by: '<S137>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S137>/PWM'

  1,

  // Expression: int16(outconf)
  //  Referenced by: '<S137>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S137>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S137>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S139>/PWM'

  11,

  // Expression: int16(carrier)
  //  Referenced by: '<S139>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S139>/PWM'

  1,

  // Expression: int16(outconf)
  //  Referenced by: '<S139>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S139>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S139>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S141>/PWM'

  15,

  // Expression: int16(carrier)
  //  Referenced by: '<S141>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S141>/PWM'

  1,

  // Expression: int16(outconf)
  //  Referenced by: '<S141>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S141>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S141>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S147>/PWM'

  0,

  // Expression: int16(carrier)
  //  Referenced by: '<S147>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S147>/PWM'

  1,

  // Expression: int16(outconf)
  //  Referenced by: '<S147>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S147>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S147>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S149>/PWM'

  4,

  // Expression: int16(carrier)
  //  Referenced by: '<S149>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S149>/PWM'

  1,

  // Expression: int16(outconf)
  //  Referenced by: '<S149>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S149>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S149>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S151>/PWM'

  1,

  // Expression: int16(carrier)
  //  Referenced by: '<S151>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S151>/PWM'

  1,

  // Expression: int16(outconf)
  //  Referenced by: '<S151>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S151>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S151>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S153>/PWM'

  5,

  // Expression: int16(carrier)
  //  Referenced by: '<S153>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S153>/PWM'

  1,

  // Expression: int16(outconf)
  //  Referenced by: '<S153>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S153>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S153>/PWM'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S42>/ADC'

  3,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S42>/ADC'

  0,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S42>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S42>/ADC'

  1,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S57>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S57>/S-Function'

  0,

  // Expression: int16(channel)
  //  Referenced by: '<S44>/ADC'

  7,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S44>/ADC'

  2,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S44>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S44>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S46>/ADC'

  6,

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
  //  Referenced by: '<S36>/ADC'

  5,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S36>/ADC'

  2,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S36>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S36>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S48>/ADC'

  4,

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
  //  Referenced by: '<S38>/ADC'

  3,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S38>/ADC'

  2,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S38>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S38>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S40>/ADC'

  2,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S40>/ADC'

  2,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S40>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S40>/ADC'

  1,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S59>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S59>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S61>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S61>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S65>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S65>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S77>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S77>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S79>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S79>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S81>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S81>/S-Function'

  0,

  // Computed Parameter: clk_id_Value
  //  Referenced by: '<S55>/clk_id'

  0,

  // Expression: int16(id)
  //  Referenced by: '<S55>/CLK1'

  0,

  // Expression: int16(DATA_TYPE)
  //  Referenced by: '<S157>/S-Function'

  1,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S63>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S63>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S67>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S67>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S69>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S69>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S71>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S71>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S73>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S73>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S75>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S75>/S-Function'

  0,

  // Computed Parameter: clk_id_Value_d
  //  Referenced by: '<S50>/clk_id'

  1,

  // Expression: int16(id)
  //  Referenced by: '<S50>/CLK1'

  1,

  // Expression: int16(DATA_TYPE)
  //  Referenced by: '<S155>/S-Function'

  1,

  // Expression: int16(DATA_TYPE)
  //  Referenced by: '<S159>/S-Function'

  1,

  // Computed Parameter: SFunction_P1
  //  Referenced by: '<S57>/S-Function'

  { 119U, 109U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S57>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S57>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S57>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14
  //  Referenced by: '<S57>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_o
  //  Referenced by: '<S59>/S-Function'

  { 105U, 115U, 49U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S59>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S59>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S59>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_n
  //  Referenced by: '<S59>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_j
  //  Referenced by: '<S61>/S-Function'

  { 105U, 115U, 50U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S61>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S61>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S61>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_m
  //  Referenced by: '<S61>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_c
  //  Referenced by: '<S65>/S-Function'

  { 105U, 115U, 51U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S65>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S65>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S65>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_c
  //  Referenced by: '<S65>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_h
  //  Referenced by: '<S77>/S-Function'

  { 105U, 115U, 52U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S77>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S77>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S77>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_e
  //  Referenced by: '<S77>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_ow
  //  Referenced by: '<S79>/S-Function'

  { 105U, 115U, 53U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S79>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S79>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S79>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_d
  //  Referenced by: '<S79>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_n
  //  Referenced by: '<S81>/S-Function'

  { 105U, 115U, 54U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S81>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S81>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S81>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_i
  //  Referenced by: '<S81>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Expression: uint16(interrupt_pstsclr)
  //  Referenced by: '<S53>/S-Function'

  0U,

  // Expression: uint16(private_adc_delay_ns)
  //  Referenced by: '<S53>/S-Function'

  2000U,

  // Expression: uint16(highest_device_id)
  //  Referenced by: '<S53>/S-Function'

  2U,

  // Computed Parameter: SFunction_P1_i
  //  Referenced by: '<S157>/S-Function'

  { 86U, 95U, 109U, 97U, 103U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S157>/S-Function'

  1U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S157>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S157>/S-Function'

  2U,

  // Expression: uint16(ETH_PORT)
  //  Referenced by: '<S157>/S-Function'

  2000U,

  // Computed Parameter: SFunction_P1_p
  //  Referenced by: '<S63>/S-Function'

  { 68U, 53U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S63>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S63>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S63>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_dy
  //  Referenced by: '<S63>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_a
  //  Referenced by: '<S67>/S-Function'

  { 68U, 54U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S67>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S67>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S67>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_i4
  //  Referenced by: '<S67>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_g
  //  Referenced by: '<S69>/S-Function'

  { 68U, 49U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S69>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S69>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S69>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_b
  //  Referenced by: '<S69>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_ip
  //  Referenced by: '<S71>/S-Function'

  { 68U, 50U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S71>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S71>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S71>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_cy
  //  Referenced by: '<S71>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_m
  //  Referenced by: '<S73>/S-Function'

  { 68U, 51U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S73>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S73>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S73>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_f
  //  Referenced by: '<S73>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_na
  //  Referenced by: '<S75>/S-Function'

  { 68U, 52U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S75>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S75>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S75>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_p
  //  Referenced by: '<S75>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_ne
  //  Referenced by: '<S155>/S-Function'

  { 102U, 95U, 109U, 97U, 103U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S155>/S-Function'

  1U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S155>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S155>/S-Function'

  2U,

  // Expression: uint16(ETH_PORT)
  //  Referenced by: '<S155>/S-Function'

  2000U,

  // Computed Parameter: SFunction_P1_md
  //  Referenced by: '<S159>/S-Function'

  { 101U, 110U, 97U, 98U, 108U, 101U, 95U, 70U, 80U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S159>/S-Function'

  1U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S159>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S159>/S-Function'

  2U,

  // Expression: uint16(ETH_PORT)
  //  Referenced by: '<S159>/S-Function'

  2000U,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S87>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S87>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S87>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S89>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S89>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S89>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S91>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S91>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S91>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S93>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S93>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S93>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S99>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S99>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S99>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S101>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S101>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S101>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S103>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S103>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S103>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S105>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S105>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S105>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S111>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S111>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S111>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S113>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S113>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S113>/PWM'

  true,

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
  //  Referenced by: '<S123>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S123>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S123>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S125>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S125>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S125>/PWM'

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
  //  Referenced by: '<S135>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S135>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S135>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S137>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S137>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S137>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S139>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S139>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S139>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S141>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S141>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S141>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S147>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S147>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S147>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S149>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S149>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S149>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S151>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S151>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S151>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S153>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S153>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S153>/PWM'

  true,

  // Expression: boolean(usehist)
  //  Referenced by: '<S42>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S42>/ADC'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S57>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S57>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S57>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S57>/S-Function'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S44>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S44>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S46>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S46>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S36>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S36>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S48>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S48>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S38>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S38>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S40>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S40>/ADC'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S59>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S59>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S59>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S59>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S61>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S61>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S61>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S61>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S65>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S65>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S65>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S65>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S77>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S77>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S77>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S77>/S-Function'

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

  // Expression: boolean(var_freq)
  //  Referenced by: '<S55>/CLK1'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S157>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S157>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S157>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S157>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S63>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S63>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S63>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S63>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S67>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S67>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S67>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S67>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S69>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S69>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S69>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S69>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S71>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S71>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S71>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S71>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S73>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S73>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S73>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S73>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S75>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S75>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S75>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S75>/S-Function'

  false,

  // Expression: boolean(var_freq)
  //  Referenced by: '<S50>/CLK1'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S155>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S155>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S155>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S155>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S159>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S159>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S159>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S159>/S-Function'

  false
};

//
// End of automatically generated code
// Copyright imperix ltd. Switzerland 2021
// [EOF]
//
