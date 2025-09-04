//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: imperix_M2C_NN_control_data.cpp
//
// Code generated for Simulink model 'imperix_M2C_NN_control'.
// To be implemented on the B-Box RCP or the B-Board PRO.
//
// Model version                  : 18.8
// Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
// C/C++ source code generated on : Tue Jun 17 03:03:24 2025
//
#include "imperix_M2C_NN_control.h"

// Block parameters (default storage)
P_imperix_M2C_NN_control_T imperix_M2C_NN_control_P{
  // Variable: A_cc
  //  Referenced by: '<S1>/Circulating Current Control MPC'

  { 1.0, 0.0, -1.0, 0.0, 0.0, 1.0, 0.0, -1.0 },

  // Variable: Ag
  //  Referenced by:
  //    '<S1>/Constant13'
  //    '<S1>/Constant14'

  520.0,

  // Variable: C
  //  Referenced by:
  //    '<S1>/Gain39'
  //    '<S1>/Gain40'

  0.000987,

  // Variable: N
  //  Referenced by: '<S33>/Gain2'

  { 0.57735026918962584, -0.28867513459481292, -0.28867513459481292,
    -0.57735026918962584, 0.28867513459481292, 0.28867513459481292, 0.0, 0.5,
    -0.5, 0.0, -0.5, 0.5 },

  // Variable: T
  //  Referenced by:
  //    '<S1>/Gain41'
  //    '<S1>/Gain61'

  { 0.5, 0.5, -0.66666666666666663, 0.0, 0.16666666666666669,
    0.16666666666666663, 0.5, 0.5, 0.33333333333333331, -0.57735026918962573,
    -0.33333333333333326, 0.16666666666666657, 0.5, 0.5, 0.33333333333333331,
    0.57735026918962573, 0.16666666666666663, -0.33333333333333326, 0.5, -0.5,
    -0.66666666666666663, 0.0, -0.16666666666666666, -0.16666666666666666, 0.5,
    -0.5, 0.33333333333333331, -0.57735026918962573, 0.33333333333333331,
    -0.16666666666666663, 0.5, -0.5, 0.33333333333333331, 0.57735026918962573,
    -0.16666666666666663, 0.33333333333333326 },

  // Variable: Tab
  //  Referenced by: '<S1>/P,Q1'

  { 0.66666666666666663, 0.0, -0.33333333333333331, 0.57735026918962573,
    -0.33333333333333331, -0.57735026918962573 },

  // Variable: Xmax
  //  Referenced by: '<S33>/Gain'

  { 33.360251931973195, 7.0056529057143768, 7.0056529057143768,
    7.0056529057143768, 7.0056529057143768, 7.0056529057143768,
    7.0056529057143768, 4.0, 4.0, 268.70057685088807, 268.70057685088807,
    1074.8023074035523, 1074.8023074035523, 4.2 },

  // Variable: Ymax
  //  Referenced by: '<S33>/Gain1'

  { 8.5, 8.5, 100.0 },

  // Variable: b_cc
  //  Referenced by: '<S1>/Circulating Current Control MPC'

  { 100.0, 100.0, 100.0, 100.0 },

  // Variable: n
  //  Referenced by:
  //    '<S1>/Gain39'
  //    '<S1>/Gain40'
  //    '<S1>/Gain6'

  4.0,

  // Variable: prmt_EST
  //  Referenced by: '<S1>/Flux obs2'

  { 0.00016666666666666666, 0.13205555555555554, 0.2351 },

  // Variable: prmt_FC
  //  Referenced by: '<S1>/Flux Control Proportional Control1'

  { -0.8609774834880628, 5.0, 0.00016666666666666666, 0.2351 },

  // Variable: prmt_ICC
  //  Referenced by: '<S1>/Input Current Control Proportional Integral Control'

  { -13.594354406139313, 0.84874841995941341, 780.0, 520.0, 4.0 },

  // Variable: prmt_OCC
  //  Referenced by: '<S1>/Output Current Control Proportional Integral Control1'

  { 6.0046393696829385, 0.88022447646409452, 310.26870075253595,
    0.00016666666666666666, 0.0076715607909128864 },

  // Variable: prmt_SC
  //  Referenced by: '<S1>/Speed Control Proportional Integral Control1'

  { 0.83627122512018881, 0.9690699219933061, 5.0, 0.00016666666666666666 },

  // Variable: prmt_TEB
  //  Referenced by: '<S1>/TEB Control Proportional Integral Control1'

  { 0.19396144563123657, 0.99347636385438565, 4.2, 520.0, 0.000987, 4.0,
    0.00016666666666666666, 62.831853071795862, 0.8, 2.718281828 },

  // Mask Parameter: IntegratorwithWrappedStateDiscr
  //  Referenced by:
  //    '<S199>/Constant'
  //    '<S201>/Bias'
  //    '<S201>/Gain'
  //    '<S201>/Gain1'

  -3.1415926535897931,

  // Mask Parameter: IntegratorwithWrappedStateDis_p
  //  Referenced by:
  //    '<S200>/Constant'
  //    '<S201>/Gain'
  //    '<S201>/Gain1'

  3.1415926535897931,

  // Mask Parameter: IntegratorwithWrappedStateDis_g
  //  Referenced by: '<S198>/Initial'

  0.0,

  // Expression: zeros(14, 1)
  //  Referenced by: '<S33>/Constant3'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S163>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S165>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S183>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S169>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S185>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S187>/ADC'

  0.00016666666666666666,

  // Expression: [ 1   -1/2   -1/2; 0   sqrt(3)/2   -sqrt(3)/2; 1/2  1/2  1/2 ]
  //  Referenced by: '<S454>/Gain3'

  { 1.0, 0.0, 0.5, -0.5, 0.8660254037844386, 0.5, -0.5, -0.8660254037844386, 0.5
  },

  // Expression: 2/3
  //  Referenced by: '<S454>/Gain1'

  0.66666666666666663,

  // Computed Parameter: Integrator_gainval
  //  Referenced by: '<S198>/Integrator'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S189>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S446>/S-Function'

  0.00016666666666666666,

  // Expression: -1
  //  Referenced by: '<S1>/Gain8'

  -1.0,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S448>/S-Function'

  0.00016666666666666666,

  // Expression: 0
  //  Referenced by:

  0.0,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S452>/S-Function'

  0.00016666666666666666,

  // Expression: -1
  //  Referenced by: '<S1>/Gain17'

  -1.0,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S179>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S167>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S173>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S181>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S175>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S177>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S197>/S-Function'

  0.00016666666666666666,

  // Expression: -1
  //  Referenced by: '<S1>/Gain31'

  -1.0,

  // Expression: 1
  //  Referenced by: '<S1>/Factor'

  1.0,

  // Expression: [ 1   0   1; -1/2  sqrt(3)/2   1; -1/2  -sqrt(3)/2  1 ]
  //  Referenced by: '<S19>/Gain3'

  { 1.0, -0.5, -0.5, 0.0, 0.8660254037844386, -0.8660254037844386, 1.0, 1.0, 1.0
  },

  // Expression: 0.5
  //  Referenced by: '<S1>/Gain'

  0.5,

  // Expression: 0.5
  //  Referenced by: '<S1>/Gain19'

  0.5,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S438>/S-Function'

  0.00016666666666666666,

  // Expression: 0
  //  Referenced by: '<S33>/Constant1'

  0.0,

  // Expression: 1/6
  //  Referenced by: '<S1>/Gain22'

  0.16666666666666666,

  // Expression: 1/6
  //  Referenced by: '<S1>/Gain23'

  0.16666666666666666,

  // Expression: 3
  //  Referenced by: '<S1>/Gain54'

  3.0,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S442>/S-Function'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S440>/S-Function'

  0.00016666666666666666,

  // Expression: 520
  //  Referenced by: '<S1>/Constant4'

  520.0,

  // Expression: 1/2
  //  Referenced by: '<S1>/Gain5'

  0.5,

  // Expression: -1
  //  Referenced by: '<S1>/Gain21'

  -1.0,

  // Expression: -1
  //  Referenced by: '<S1>/Gain3'

  -1.0,

  // Expression: 1/6
  //  Referenced by: '<S1>/Gain4'

  0.16666666666666666,

  // Expression: 1/6
  //  Referenced by: '<S1>/Gain24'

  0.16666666666666666,

  // Expression: 100/520
  //  Referenced by: '<S1>/Gain25'

  0.19230769230769232,

  // Expression: 1/6
  //  Referenced by: '<S1>/Gain2'

  0.16666666666666666,

  // Expression: 1/4
  //  Referenced by: '<S1>/Gain13'

  0.25,

  // Expression: 0.5
  //  Referenced by: '<S1>/Gain84'

  0.5,

  // Expression: 1/2
  //  Referenced by: '<S3>/Gain'

  0.5,

  // Expression: -1
  //  Referenced by: '<S3>/Gain19'

  -1.0,

  // Expression: 1/4
  //  Referenced by: '<S1>/Gain12'

  0.25,

  // Expression: [ 1   -1/2   -1/2; 0   sqrt(3)/2   -sqrt(3)/2; 1/2  1/2  1/2 ]
  //  Referenced by: '<S159>/Gain3'

  { 1.0, 0.0, 0.5, -0.5, 0.8660254037844386, 0.5, -0.5, -0.8660254037844386, 0.5
  },

  // Expression: 2/3
  //  Referenced by: '<S159>/Gain1'

  0.66666666666666663,

  // Expression: 0.01
  //  Referenced by: '<S1>/Constant1'

  0.01,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S171>/ADC'

  0.00016666666666666666,

  // Expression: 1
  //  Referenced by: '<S1>/Constant3'

  1.0,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S450>/S-Function'

  0.00016666666666666666,

  // Expression: 1/4
  //  Referenced by: '<S1>/Gain10'

  0.25,

  // Expression: 1/4
  //  Referenced by: '<S1>/Gain11'

  0.25,

  // Expression: 1/4
  //  Referenced by: '<S1>/Gain14'

  0.25,

  // Expression: -1
  //  Referenced by: '<S1>/Gain20'

  -1.0,

  // Expression: 1/4
  //  Referenced by: '<S1>/Gain9'

  0.25,

  // Expression: PHASE
  //  Referenced by: '<S36>/phase'

  0.0,

  // Expression: PHASE
  //  Referenced by: '<S360>/phase'

  0.75,

  // Expression: PHASE
  //  Referenced by: '<S361>/phase'

  0.5,

  // Expression: PHASE
  //  Referenced by: '<S362>/phase'

  0.25,

  // Expression: PHASE
  //  Referenced by: '<S363>/phase'

  0.0,

  // Expression: PHASE
  //  Referenced by: '<S372>/phase'

  0.75,

  // Expression: PHASE
  //  Referenced by: '<S373>/phase'

  0.5,

  // Expression: PHASE
  //  Referenced by: '<S374>/phase'

  0.25,

  // Expression: PHASE
  //  Referenced by: '<S375>/phase'

  0.0,

  // Expression: -1
  //  Referenced by: '<S144>/Gain1'

  -1.0,

  // Expression: PHASE
  //  Referenced by: '<S384>/phase'

  0.75,

  // Expression: PHASE
  //  Referenced by: '<S385>/phase'

  0.5,

  // Expression: PHASE
  //  Referenced by: '<S386>/phase'

  0.25,

  // Expression: PHASE
  //  Referenced by: '<S387>/phase'

  0.0,

  // Expression: -1
  //  Referenced by: '<S145>/Gain3'

  -1.0,

  // Expression: PHASE
  //  Referenced by: '<S398>/phase'

  0.75,

  // Expression: PHASE
  //  Referenced by: '<S399>/phase'

  0.5,

  // Expression: PHASE
  //  Referenced by: '<S400>/phase'

  0.25,

  // Expression: PHASE
  //  Referenced by: '<S401>/phase'

  0.0,

  // Expression: -1
  //  Referenced by: '<S146>/Gain3'

  -1.0,

  // Expression: PHASE
  //  Referenced by: '<S410>/phase'

  0.75,

  // Expression: PHASE
  //  Referenced by: '<S411>/phase'

  0.5,

  // Expression: PHASE
  //  Referenced by: '<S412>/phase'

  0.25,

  // Expression: PHASE
  //  Referenced by: '<S413>/phase'

  0.0,

  // Expression: PHASE
  //  Referenced by: '<S423>/phase'

  0.75,

  // Expression: PHASE
  //  Referenced by: '<S424>/phase'

  0.5,

  // Expression: PHASE
  //  Referenced by: '<S425>/phase'

  0.25,

  // Expression: PHASE
  //  Referenced by: '<S426>/phase'

  0.0,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S444>/S-Function'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S436>/S-Function'

  0.00016666666666666666,

  // Expression: single(deadtime)
  //  Referenced by: '<S205>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S205>/PWM'

  1.0F,

  // Expression: single(phase)
  //  Referenced by: '<S205>/PWM'

  0.0F,

  // Expression: single(deadtime)
  //  Referenced by: '<S365>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S365>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S365>/PWM'

  0.75F,

  // Expression: single(deadtime)
  //  Referenced by: '<S367>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S367>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S367>/PWM'

  0.5F,

  // Expression: single(deadtime)
  //  Referenced by: '<S369>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S369>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S369>/PWM'

  0.25F,

  // Expression: single(deadtime)
  //  Referenced by: '<S371>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S371>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S371>/PWM'

  0.0F,

  // Expression: single(deadtime)
  //  Referenced by: '<S377>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S377>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S377>/PWM'

  0.75F,

  // Expression: single(deadtime)
  //  Referenced by: '<S379>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S379>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S379>/PWM'

  0.5F,

  // Expression: single(deadtime)
  //  Referenced by: '<S381>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S381>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S381>/PWM'

  0.25F,

  // Expression: single(deadtime)
  //  Referenced by: '<S383>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S383>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S383>/PWM'

  0.0F,

  // Expression: single(deadtime)
  //  Referenced by: '<S390>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S390>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S390>/PWM'

  0.75F,

  // Expression: single(deadtime)
  //  Referenced by: '<S392>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S392>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S392>/PWM'

  0.5F,

  // Expression: single(deadtime)
  //  Referenced by: '<S394>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S394>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S394>/PWM'

  0.25F,

  // Expression: single(deadtime)
  //  Referenced by: '<S396>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S396>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S396>/PWM'

  0.0F,

  // Expression: single(deadtime)
  //  Referenced by: '<S403>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S403>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S403>/PWM'

  0.75F,

  // Expression: single(deadtime)
  //  Referenced by: '<S405>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S405>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S405>/PWM'

  0.5F,

  // Expression: single(deadtime)
  //  Referenced by: '<S407>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S407>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S407>/PWM'

  0.25F,

  // Expression: single(deadtime)
  //  Referenced by: '<S409>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S409>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S409>/PWM'

  0.0F,

  // Expression: single(deadtime)
  //  Referenced by: '<S415>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S415>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S415>/PWM'

  0.75F,

  // Expression: single(deadtime)
  //  Referenced by: '<S417>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S417>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S417>/PWM'

  0.5F,

  // Expression: single(deadtime)
  //  Referenced by: '<S419>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S419>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S419>/PWM'

  0.25F,

  // Expression: single(deadtime)
  //  Referenced by: '<S421>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S421>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S421>/PWM'

  0.0F,

  // Expression: single(deadtime)
  //  Referenced by: '<S428>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S428>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S428>/PWM'

  0.75F,

  // Expression: single(deadtime)
  //  Referenced by: '<S430>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S430>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S430>/PWM'

  0.5F,

  // Expression: single(deadtime)
  //  Referenced by: '<S432>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S432>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S432>/PWM'

  0.25F,

  // Expression: single(deadtime)
  //  Referenced by: '<S434>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S434>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S434>/PWM'

  0.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S207>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S207>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S209>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S209>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S211>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S211>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S213>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S213>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S215>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S215>/S-Function'

  10.0F,

  // Expression: single(gain)
  //  Referenced by: '<S163>/ADC'

  0.00045776F,

  // Expression: single(offset)
  //  Referenced by: '<S163>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S165>/ADC'

  0.00045776F,

  // Expression: single(offset)
  //  Referenced by: '<S165>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S183>/ADC'

  0.00045776F,

  // Expression: single(offset)
  //  Referenced by: '<S183>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S169>/ADC'

  0.00045776F,

  // Expression: single(offset)
  //  Referenced by: '<S169>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S185>/ADC'

  0.00045776F,

  // Expression: single(offset)
  //  Referenced by: '<S185>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S187>/ADC'

  0.00045776F,

  // Expression: single(offset)
  //  Referenced by: '<S187>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S189>/ADC'

  0.012207F,

  // Expression: single(offset)
  //  Referenced by: '<S189>/ADC'

  0.0F,

  // Expression: single(INITIALVAL)
  //  Referenced by: '<S446>/S-Function'

  0.987F,

  // Expression: single(VAL_MIN)
  //  Referenced by: '<S446>/S-Function'

  rtMinusInfF,

  // Expression: single(VAL_MAX)
  //  Referenced by: '<S446>/S-Function'

  rtInfF,

  // Expression: single(0)
  //  Referenced by: '<S446>/S-Function'

  0.0F,

  // Expression: single(0)
  //  Referenced by: '<S446>/S-Function'

  0.0F,

  // Expression: single(INITIALVAL)
  //  Referenced by: '<S448>/S-Function'

  0.0F,

  // Expression: single(VAL_MIN)
  //  Referenced by: '<S448>/S-Function'

  rtMinusInfF,

  // Expression: single(VAL_MAX)
  //  Referenced by: '<S448>/S-Function'

  rtInfF,

  // Expression: single(0)
  //  Referenced by: '<S448>/S-Function'

  0.0F,

  // Expression: single(0)
  //  Referenced by: '<S448>/S-Function'

  0.0F,

  // Expression: single(INITIALVAL)
  //  Referenced by: '<S452>/S-Function'

  0.0F,

  // Expression: single(VAL_MIN)
  //  Referenced by: '<S452>/S-Function'

  rtMinusInfF,

  // Expression: single(VAL_MAX)
  //  Referenced by: '<S452>/S-Function'

  rtInfF,

  // Expression: single(0)
  //  Referenced by: '<S452>/S-Function'

  0.0F,

  // Expression: single(0)
  //  Referenced by: '<S452>/S-Function'

  0.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S217>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S217>/S-Function'

  10.0F,

  // Expression: single(gain)
  //  Referenced by: '<S179>/ADC'

  0.027466F,

  // Expression: single(offset)
  //  Referenced by: '<S179>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S167>/ADC'

  0.027466F,

  // Expression: single(offset)
  //  Referenced by: '<S167>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S173>/ADC'

  0.027466F,

  // Expression: single(offset)
  //  Referenced by: '<S173>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S181>/ADC'

  0.027466F,

  // Expression: single(offset)
  //  Referenced by: '<S181>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S175>/ADC'

  0.027466F,

  // Expression: single(offset)
  //  Referenced by: '<S175>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S177>/ADC'

  0.027466F,

  // Expression: single(offset)
  //  Referenced by: '<S177>/ADC'

  0.0F,

  // Expression: single(INITIALVAL)
  //  Referenced by: '<S197>/S-Function'

  519.997314F,

  // Expression: single(VAL_MIN)
  //  Referenced by: '<S197>/S-Function'

  rtMinusInfF,

  // Expression: single(VAL_MAX)
  //  Referenced by: '<S197>/S-Function'

  rtInfF,

  // Expression: single(0)
  //  Referenced by: '<S197>/S-Function'

  0.0F,

  // Expression: single(0)
  //  Referenced by: '<S197>/S-Function'

  0.0F,

  // Expression: single(INITIALVAL)
  //  Referenced by: '<S438>/S-Function'

  0.0F,

  // Expression: single(VAL_MIN)
  //  Referenced by: '<S438>/S-Function'

  rtMinusInfF,

  // Expression: single(VAL_MAX)
  //  Referenced by: '<S438>/S-Function'

  rtInfF,

  // Expression: single(0)
  //  Referenced by: '<S438>/S-Function'

  0.0F,

  // Expression: single(0)
  //  Referenced by: '<S438>/S-Function'

  0.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S219>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S219>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S221>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S221>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S223>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S223>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S225>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S225>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S227>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S227>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S229>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S229>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S231>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S231>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S235>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S235>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S237>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S237>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S239>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S239>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S241>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S241>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S243>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S243>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S245>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S245>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S247>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S247>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S249>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S249>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S251>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S251>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S253>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S253>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S255>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S255>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S257>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S257>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S259>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S259>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S261>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S261>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S263>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S263>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S265>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S265>/S-Function'

  10.0F,

  // Expression: single(INITIALVAL)
  //  Referenced by: '<S442>/S-Function'

  0.0F,

  // Expression: single(VAL_MIN)
  //  Referenced by: '<S442>/S-Function'

  rtMinusInfF,

  // Expression: single(VAL_MAX)
  //  Referenced by: '<S442>/S-Function'

  rtInfF,

  // Expression: single(0)
  //  Referenced by: '<S442>/S-Function'

  0.0F,

  // Expression: single(0)
  //  Referenced by: '<S442>/S-Function'

  0.0F,

  // Expression: single(INITIALVAL)
  //  Referenced by: '<S440>/S-Function'

  0.002081F,

  // Expression: single(VAL_MIN)
  //  Referenced by: '<S440>/S-Function'

  rtMinusInfF,

  // Expression: single(VAL_MAX)
  //  Referenced by: '<S440>/S-Function'

  rtInfF,

  // Expression: single(0)
  //  Referenced by: '<S440>/S-Function'

  0.0F,

  // Expression: single(0)
  //  Referenced by: '<S440>/S-Function'

  0.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S267>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S267>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S269>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S269>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S271>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S271>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S273>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S273>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S275>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S275>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S277>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S277>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S279>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S279>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S281>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S281>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S283>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S283>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S285>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S285>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S287>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S287>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S289>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S289>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S291>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S291>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S293>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S293>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S295>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S295>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S297>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S297>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S299>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S299>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S301>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S301>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S303>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S303>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S305>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S305>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S307>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S307>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S309>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S309>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S311>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S311>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S313>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S313>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S315>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S315>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S317>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S317>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S319>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S319>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S321>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S321>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S323>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S323>/S-Function'

  10.0F,

  // Expression: single(gain)
  //  Referenced by: '<S171>/ADC'

  0.61035F,

  // Expression: single(offset)
  //  Referenced by: '<S171>/ADC'

  0.0F,

  // Expression: single(private_nb_oversamples)
  //  Referenced by: '<S192>/S-Function'

  0.0F,

  // Expression: single(interrupt_phase)
  //  Referenced by: '<S192>/S-Function'

  0.5F,

  // Expression: single(frequency)
  //  Referenced by: '<S194>/CLK1'

  6000.0F,

  // Expression: single(INITIALVAL)
  //  Referenced by: '<S450>/S-Function'

  31.415926F,

  // Expression: single(VAL_MIN)
  //  Referenced by: '<S450>/S-Function'

  rtMinusInfF,

  // Expression: single(VAL_MAX)
  //  Referenced by: '<S450>/S-Function'

  rtInfF,

  // Expression: single(0)
  //  Referenced by: '<S450>/S-Function'

  0.0F,

  // Expression: single(0)
  //  Referenced by: '<S450>/S-Function'

  0.0F,

  // Expression: single(INITIALVAL)
  //  Referenced by: '<S444>/S-Function'

  0.03F,

  // Expression: single(VAL_MIN)
  //  Referenced by: '<S444>/S-Function'

  rtMinusInfF,

  // Expression: single(VAL_MAX)
  //  Referenced by: '<S444>/S-Function'

  rtInfF,

  // Expression: single(0)
  //  Referenced by: '<S444>/S-Function'

  0.0F,

  // Expression: single(0)
  //  Referenced by: '<S444>/S-Function'

  0.0F,

  // Expression: single(INITIALVAL)
  //  Referenced by: '<S436>/S-Function'

  0.0F,

  // Expression: single(VAL_MIN)
  //  Referenced by: '<S436>/S-Function'

  rtMinusInfF,

  // Expression: single(VAL_MAX)
  //  Referenced by: '<S436>/S-Function'

  rtInfF,

  // Expression: single(0)
  //  Referenced by: '<S436>/S-Function'

  0.0F,

  // Expression: single(0)
  //  Referenced by: '<S436>/S-Function'

  0.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S233>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S233>/S-Function'

  10.0F,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S207>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S207>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S209>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S209>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S211>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S211>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S213>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S213>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S215>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S215>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S446>/S-Function'

  1000000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S448>/S-Function'

  1000000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S452>/S-Function'

  1000000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S217>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S217>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S197>/S-Function'

  1000000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S438>/S-Function'

  1000000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S219>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S219>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S221>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S221>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S223>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S223>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S225>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S225>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S227>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S227>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S229>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S229>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S231>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S231>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S235>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S235>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S237>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S237>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S239>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S239>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S241>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S241>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S243>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S243>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S245>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S245>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S247>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S247>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S249>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S249>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S251>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S251>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S253>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S253>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S255>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S255>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S257>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S257>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S259>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S259>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S261>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S261>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S263>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S263>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S265>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S265>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S442>/S-Function'

  1000000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S440>/S-Function'

  1000000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S267>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S267>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S269>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S269>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S271>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S271>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S273>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S273>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S275>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S275>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S277>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S277>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S279>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S279>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S281>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S281>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S283>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S283>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S285>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S285>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S287>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S287>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S289>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S289>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S291>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S291>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S293>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S293>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S295>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S295>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S297>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S297>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S299>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S299>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S301>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S301>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S303>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S303>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S305>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S305>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S307>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S307>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S309>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S309>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S311>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S311>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S313>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S313>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S315>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S315>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S317>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S317>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S319>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S319>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S321>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S321>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S323>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S323>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S450>/S-Function'

  1000000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S444>/S-Function'

  1000000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S436>/S-Function'

  1000000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S233>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S233>/S-Function'

  2000U,

  // Expression: int16(lane)
  //  Referenced by: '<S205>/PWM'

  8,

  // Expression: int16(carrier)
  //  Referenced by: '<S205>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S205>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S205>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S205>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S205>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S365>/PWM'

  0,

  // Expression: int16(carrier)
  //  Referenced by: '<S365>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S365>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S365>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S365>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S365>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S367>/PWM'

  1,

  // Expression: int16(carrier)
  //  Referenced by: '<S367>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S367>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S367>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S367>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S367>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S369>/PWM'

  2,

  // Expression: int16(carrier)
  //  Referenced by: '<S369>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S369>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S369>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S369>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S369>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S371>/PWM'

  3,

  // Expression: int16(carrier)
  //  Referenced by: '<S371>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S371>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S371>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S371>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S371>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S377>/PWM'

  8,

  // Expression: int16(carrier)
  //  Referenced by: '<S377>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S377>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S377>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S377>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S377>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S379>/PWM'

  9,

  // Expression: int16(carrier)
  //  Referenced by: '<S379>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S379>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S379>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S379>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S379>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S381>/PWM'

  10,

  // Expression: int16(carrier)
  //  Referenced by: '<S381>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S381>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S381>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S381>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S381>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S383>/PWM'

  11,

  // Expression: int16(carrier)
  //  Referenced by: '<S383>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S383>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S383>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S383>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S383>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S390>/PWM'

  4,

  // Expression: int16(carrier)
  //  Referenced by: '<S390>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S390>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S390>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S390>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S390>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S392>/PWM'

  5,

  // Expression: int16(carrier)
  //  Referenced by: '<S392>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S392>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S392>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S392>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S392>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S394>/PWM'

  6,

  // Expression: int16(carrier)
  //  Referenced by: '<S394>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S394>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S394>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S394>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S394>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S396>/PWM'

  7,

  // Expression: int16(carrier)
  //  Referenced by: '<S396>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S396>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S396>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S396>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S396>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S403>/PWM'

  4,

  // Expression: int16(carrier)
  //  Referenced by: '<S403>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S403>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S403>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S403>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S403>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S405>/PWM'

  5,

  // Expression: int16(carrier)
  //  Referenced by: '<S405>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S405>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S405>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S405>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S405>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S407>/PWM'

  6,

  // Expression: int16(carrier)
  //  Referenced by: '<S407>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S407>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S407>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S407>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S407>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S409>/PWM'

  7,

  // Expression: int16(carrier)
  //  Referenced by: '<S409>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S409>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S409>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S409>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S409>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S415>/PWM'

  12,

  // Expression: int16(carrier)
  //  Referenced by: '<S415>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S415>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S415>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S415>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S415>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S417>/PWM'

  13,

  // Expression: int16(carrier)
  //  Referenced by: '<S417>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S417>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S417>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S417>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S417>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S419>/PWM'

  14,

  // Expression: int16(carrier)
  //  Referenced by: '<S419>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S419>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S419>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S419>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S419>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S421>/PWM'

  15,

  // Expression: int16(carrier)
  //  Referenced by: '<S421>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S421>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S421>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S421>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S421>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S428>/PWM'

  0,

  // Expression: int16(carrier)
  //  Referenced by: '<S428>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S428>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S428>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S428>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S428>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S430>/PWM'

  1,

  // Expression: int16(carrier)
  //  Referenced by: '<S430>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S430>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S430>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S430>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S430>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S432>/PWM'

  2,

  // Expression: int16(carrier)
  //  Referenced by: '<S432>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S432>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S432>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S432>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S432>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S434>/PWM'

  3,

  // Expression: int16(carrier)
  //  Referenced by: '<S434>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S434>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S434>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S434>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S434>/PWM'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S207>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S207>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S209>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S209>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S211>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S211>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S213>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S213>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S215>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S215>/S-Function'

  0,

  // Expression: int16(channel)
  //  Referenced by: '<S163>/ADC'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S163>/ADC'

  0,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S163>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S163>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S165>/ADC'

  1,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S165>/ADC'

  0,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S165>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S165>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S183>/ADC'

  2,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S183>/ADC'

  0,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S183>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S183>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S169>/ADC'

  3,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S169>/ADC'

  0,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S169>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S169>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S185>/ADC'

  4,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S185>/ADC'

  0,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S185>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S185>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S187>/ADC'

  5,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S187>/ADC'

  0,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S187>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S187>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S189>/ADC'

  7,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S189>/ADC'

  0,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S189>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S189>/ADC'

  1,

  // Expression: int16(DATA_TYPE)
  //  Referenced by: '<S446>/S-Function'

  1,

  // Expression: int16(DATA_TYPE)
  //  Referenced by: '<S448>/S-Function'

  2,

  // Expression: int16(DATA_TYPE)
  //  Referenced by: '<S452>/S-Function'

  2,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S217>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S217>/S-Function'

  0,

  // Expression: int16(channel)
  //  Referenced by: '<S179>/ADC'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S179>/ADC'

  2,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S179>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S179>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S167>/ADC'

  2,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S167>/ADC'

  2,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S167>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S167>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S173>/ADC'

  4,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S173>/ADC'

  2,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S173>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S173>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S181>/ADC'

  1,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S181>/ADC'

  2,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S181>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S181>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S175>/ADC'

  3,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S175>/ADC'

  2,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S175>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S175>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S177>/ADC'

  5,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S177>/ADC'

  2,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S177>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S177>/ADC'

  1,

  // Expression: int16(DATA_TYPE)
  //  Referenced by: '<S197>/S-Function'

  1,

  // Expression: int16(DATA_TYPE)
  //  Referenced by: '<S438>/S-Function'

  1,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S219>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S219>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S221>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S221>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S223>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S223>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S225>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S225>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S227>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S227>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S229>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S229>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S231>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S231>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S235>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S235>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S237>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S237>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S239>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S239>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S241>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S241>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S243>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S243>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S245>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S245>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S247>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S247>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S249>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S249>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S251>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S251>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S253>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S253>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S255>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S255>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S257>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S257>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S259>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S259>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S261>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S261>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S263>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S263>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S265>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S265>/S-Function'

  0,

  // Expression: int16(DATA_TYPE)
  //  Referenced by: '<S442>/S-Function'

  1,

  // Expression: int16(DATA_TYPE)
  //  Referenced by: '<S440>/S-Function'

  1,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S267>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S267>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S269>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S269>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S271>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S271>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S273>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S273>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S275>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S275>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S277>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S277>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S279>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S279>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S281>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S281>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S283>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S283>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S285>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S285>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S287>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S287>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S289>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S289>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S291>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S291>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S293>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S293>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S295>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S295>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S297>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S297>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S299>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S299>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S301>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S301>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S303>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S303>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S305>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S305>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S307>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S307>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S309>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S309>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S311>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S311>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S313>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S313>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S315>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S315>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S317>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S317>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S319>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S319>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S321>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S321>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S323>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S323>/S-Function'

  0,

  // Expression: int16(channel)
  //  Referenced by: '<S171>/ADC'

  6,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S171>/ADC'

  0,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S171>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S171>/ADC'

  1,

  // Computed Parameter: clk_id_Value
  //  Referenced by: '<S194>/clk_id'

  0,

  // Expression: int16(id)
  //  Referenced by: '<S194>/CLK1'

  0,

  // Expression: int16(DATA_TYPE)
  //  Referenced by: '<S450>/S-Function'

  1,

  // Expression: int16(DATA_TYPE)
  //  Referenced by: '<S444>/S-Function'

  1,

  // Expression: int16(DATA_TYPE)
  //  Referenced by: '<S436>/S-Function'

  1,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S233>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S233>/S-Function'

  0,

  // Computed Parameter: SFunction_P1
  //  Referenced by: '<S207>/S-Function'

  { 118U, 48U, 95U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S207>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S207>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S207>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14
  //  Referenced by: '<S207>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_g
  //  Referenced by: '<S209>/S-Function'

  { 105U, 99U, 114U, 95U, 122U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S209>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S209>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S209>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_d
  //  Referenced by: '<S209>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_k
  //  Referenced by: '<S211>/S-Function'

  { 105U, 97U, 115U, 95U, 122U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S211>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S211>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S211>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_n
  //  Referenced by: '<S211>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_g0
  //  Referenced by: '<S213>/S-Function'

  { 105U, 98U, 115U, 95U, 122U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S213>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S213>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S213>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_p
  //  Referenced by: '<S213>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_c
  //  Referenced by: '<S215>/S-Function'

  { 105U, 99U, 115U, 95U, 122U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S215>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S215>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S215>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_h
  //  Referenced by: '<S215>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_e
  //  Referenced by: '<S446>/S-Function'

  { 102U, 108U, 117U, 120U, 95U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S446>/S-Function'

  1U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S446>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S446>/S-Function'

  2U,

  // Expression: uint16(ETH_PORT)
  //  Referenced by: '<S446>/S-Function'

  2000U,

  // Computed Parameter: SFunction_P1_k3
  //  Referenced by: '<S448>/S-Function'

  { 102U, 108U, 117U, 120U, 95U, 99U, 111U, 110U, 116U, 114U, 111U, 108U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S448>/S-Function'

  1U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S448>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S448>/S-Function'

  2U,

  // Expression: uint16(ETH_PORT)
  //  Referenced by: '<S448>/S-Function'

  2000U,

  // Computed Parameter: SFunction_P1_i
  //  Referenced by: '<S452>/S-Function'

  { 115U, 112U, 101U, 101U, 100U, 95U, 99U, 111U, 110U, 116U, 114U, 111U, 108U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S452>/S-Function'

  1U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S452>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S452>/S-Function'

  2U,

  // Expression: uint16(ETH_PORT)
  //  Referenced by: '<S452>/S-Function'

  2000U,

  // Computed Parameter: SFunction_P1_ie
  //  Referenced by: '<S217>/S-Function'

  { 105U, 109U, 100U, 95U, 114U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S217>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S217>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S217>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_j
  //  Referenced by: '<S217>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_b
  //  Referenced by: '<S197>/S-Function'

  { 86U, 99U, 95U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S197>/S-Function'

  1U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S197>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S197>/S-Function'

  2U,

  // Expression: uint16(ETH_PORT)
  //  Referenced by: '<S197>/S-Function'

  2000U,

  // Computed Parameter: SFunction_P1_p
  //  Referenced by: '<S438>/S-Function'

  { 105U, 110U, 112U, 117U, 116U, 95U, 99U, 111U, 110U, 116U, 114U, 111U, 108U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S438>/S-Function'

  1U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S438>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S438>/S-Function'

  2U,

  // Expression: uint16(ETH_PORT)
  //  Referenced by: '<S438>/S-Function'

  2000U,

  // Computed Parameter: SFunction_P1_n
  //  Referenced by: '<S219>/S-Function'

  { 105U, 103U, 100U, 95U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S219>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S219>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S219>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_i
  //  Referenced by: '<S219>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_h
  //  Referenced by: '<S221>/S-Function'

  { 105U, 109U, 113U, 95U, 114U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S221>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S221>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S221>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_c
  //  Referenced by: '<S221>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_d
  //  Referenced by: '<S223>/S-Function'

  { 105U, 109U, 100U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S223>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S223>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S223>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_cg
  //  Referenced by: '<S223>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_g5
  //  Referenced by: '<S225>/S-Function'

  { 105U, 109U, 113U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S225>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S225>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S225>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_b
  //  Referenced by: '<S225>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_j
  //  Referenced by: '<S227>/S-Function'

  { 102U, 108U, 117U, 120U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S227>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S227>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S227>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_ho
  //  Referenced by: '<S227>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_jl
  //  Referenced by: '<S229>/S-Function'

  { 105U, 97U, 114U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S229>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S229>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S229>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_dd
  //  Referenced by: '<S229>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_ef
  //  Referenced by: '<S231>/S-Function'

  { 78U, 105U, 116U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S231>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S231>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S231>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_o
  //  Referenced by: '<S231>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_f
  //  Referenced by: '<S235>/S-Function'

  { 118U, 100U, 95U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S235>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S235>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S235>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_bb
  //  Referenced by: '<S235>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_kv
  //  Referenced by: '<S237>/S-Function'

  { 118U, 113U, 95U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S237>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S237>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S237>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_ir
  //  Referenced by: '<S237>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_dj
  //  Referenced by: '<S239>/S-Function'

  { 118U, 121U, 95U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S239>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S239>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S239>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_ko
  //  Referenced by: '<S239>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_pn
  //  Referenced by: '<S241>/S-Function'

  { 105U, 103U, 100U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S241>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S241>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S241>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_l
  //  Referenced by: '<S241>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_pc
  //  Referenced by: '<S243>/S-Function'

  { 118U, 99U, 95U, 97U, 114U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S243>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S243>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S243>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_nh
  //  Referenced by: '<S243>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_kf
  //  Referenced by: '<S245>/S-Function'

  { 118U, 99U, 95U, 98U, 114U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S245>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S245>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S245>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_m
  //  Referenced by: '<S245>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_cu
  //  Referenced by: '<S247>/S-Function'

  { 118U, 99U, 95U, 99U, 114U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S247>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S247>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S247>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_mk
  //  Referenced by: '<S247>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_o
  //  Referenced by: '<S249>/S-Function'

  { 118U, 99U, 95U, 97U, 115U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S249>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S249>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S249>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_az
  //  Referenced by: '<S249>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_hy
  //  Referenced by: '<S251>/S-Function'

  { 105U, 98U, 114U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S251>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S251>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S251>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_dt
  //  Referenced by: '<S251>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_ig
  //  Referenced by: '<S253>/S-Function'

  { 118U, 99U, 95U, 98U, 115U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S253>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S253>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S253>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_g
  //  Referenced by: '<S253>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_fm
  //  Referenced by: '<S255>/S-Function'

  { 118U, 99U, 95U, 99U, 115U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S255>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S255>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S255>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_ks
  //  Referenced by: '<S255>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_es
  //  Referenced by: '<S257>/S-Function'

  { 112U, 95U, 109U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S257>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S257>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S257>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_hoz
  //  Referenced by: '<S257>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_pg
  //  Referenced by: '<S259>/S-Function'

  { 105U, 122U, 107U, 112U, 105U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S259>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S259>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S259>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_gu
  //  Referenced by: '<S259>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_oa
  //  Referenced by: '<S261>/S-Function'

  119U,

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S261>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S261>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S261>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_cm
  //  Referenced by: '<S261>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_gv
  //  Referenced by: '<S263>/S-Function'

  { 105U, 115U, 113U, 114U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S263>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S263>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S263>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_n0
  //  Referenced by: '<S263>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_df
  //  Referenced by: '<S265>/S-Function'

  { 105U, 115U, 100U, 114U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S265>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S265>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S265>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_nt
  //  Referenced by: '<S265>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_o5
  //  Referenced by: '<S442>/S-Function'

  { 101U, 110U, 97U, 98U, 108U, 101U, 95U, 99U, 99U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S442>/S-Function'

  1U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S442>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S442>/S-Function'

  2U,

  // Expression: uint16(ETH_PORT)
  //  Referenced by: '<S442>/S-Function'

  2000U,

  // Computed Parameter: SFunction_P1_nt
  //  Referenced by: '<S440>/S-Function'

  { 105U, 101U, 95U, 108U, 97U, 109U, 98U, 100U, 97U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S440>/S-Function'

  1U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S440>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S440>/S-Function'

  2U,

  // Expression: uint16(ETH_PORT)
  //  Referenced by: '<S440>/S-Function'

  2000U,

  // Computed Parameter: SFunction_P1_bw
  //  Referenced by: '<S267>/S-Function'

  { 118U, 114U, 95U, 97U, 114U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S267>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S267>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S267>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_ba
  //  Referenced by: '<S267>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_cf
  //  Referenced by: '<S269>/S-Function'

  { 118U, 109U, 97U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S269>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S269>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S269>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_fq
  //  Referenced by: '<S269>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_nw
  //  Referenced by: '<S271>/S-Function'

  { 118U, 109U, 98U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S271>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S271>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S271>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_pr
  //  Referenced by: '<S271>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_hz
  //  Referenced by: '<S273>/S-Function'

  { 105U, 99U, 114U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S273>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S273>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S273>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_oe
  //  Referenced by: '<S273>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_m
  //  Referenced by: '<S275>/S-Function'

  { 118U, 109U, 99U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S275>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S275>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S275>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_prh
  //  Referenced by: '<S275>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_i0
  //  Referenced by: '<S277>/S-Function'

  { 118U, 100U, 99U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S277>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S277>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S277>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_at
  //  Referenced by: '<S277>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_a
  //  Referenced by: '<S279>/S-Function'

  { 118U, 114U, 95U, 98U, 114U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S279>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S279>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S279>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_d5
  //  Referenced by: '<S279>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_mi
  //  Referenced by: '<S281>/S-Function'

  { 118U, 114U, 95U, 99U, 114U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S281>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S281>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S281>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_gx
  //  Referenced by: '<S281>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_pm
  //  Referenced by: '<S283>/S-Function'

  { 118U, 114U, 95U, 97U, 115U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S283>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S283>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S283>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_kz
  //  Referenced by: '<S283>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_cff
  //  Referenced by: '<S285>/S-Function'

  { 116U, 104U, 101U, 116U, 97U, 95U, 109U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S285>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S285>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S285>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_gz
  //  Referenced by: '<S285>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_k3j
  //  Referenced by: '<S287>/S-Function'

  { 119U, 115U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S287>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S287>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S287>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_e5
  //  Referenced by: '<S287>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_kn
  //  Referenced by: '<S289>/S-Function'

  { 118U, 114U, 95U, 98U, 115U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S289>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S289>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S289>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_cf
  //  Referenced by: '<S289>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_l
  //  Referenced by: '<S291>/S-Function'

  { 105U, 115U, 113U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S291>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S291>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S291>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_pn
  //  Referenced by: '<S291>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_ez
  //  Referenced by: '<S293>/S-Function'

  { 105U, 115U, 100U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S293>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S293>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S293>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_ao
  //  Referenced by: '<S293>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_ng
  //  Referenced by: '<S295>/S-Function'

  { 105U, 97U, 115U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S295>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S295>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S295>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_kc
  //  Referenced by: '<S295>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_bk
  //  Referenced by: '<S297>/S-Function'

  { 105U, 109U, 97U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S297>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S297>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S297>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_lm
  //  Referenced by: '<S297>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_hg
  //  Referenced by: '<S299>/S-Function'

  { 105U, 109U, 98U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S299>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S299>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S299>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_mi
  //  Referenced by: '<S299>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_e5
  //  Referenced by: '<S301>/S-Function'

  { 105U, 109U, 99U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S301>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S301>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S301>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_ok
  //  Referenced by: '<S301>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_po
  //  Referenced by: '<S303>/S-Function'

  { 105U, 97U, 48U, 95U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S303>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S303>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S303>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_bs
  //  Referenced by: '<S303>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_p1
  //  Referenced by: '<S305>/S-Function'

  { 105U, 98U, 48U, 95U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S305>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S305>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S305>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_gp
  //  Referenced by: '<S305>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_eb
  //  Referenced by: '<S307>/S-Function'

  { 118U, 114U, 95U, 99U, 115U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S307>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S307>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S307>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_fc
  //  Referenced by: '<S307>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_br
  //  Referenced by: '<S309>/S-Function'

  { 105U, 109U, 100U, 95U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S309>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S309>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S309>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_gw
  //  Referenced by: '<S309>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_nq
  //  Referenced by: '<S311>/S-Function'

  { 67U, 114U, 105U, 116U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S311>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S311>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S311>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_gwi
  //  Referenced by: '<S311>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_ga
  //  Referenced by: '<S313>/S-Function'

  { 105U, 100U, 99U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S313>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S313>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S313>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_eu
  //  Referenced by: '<S313>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_m4
  //  Referenced by: '<S315>/S-Function'

  { 118U, 99U, 107U, 112U, 105U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S315>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S315>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S315>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_ex
  //  Referenced by: '<S315>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_me
  //  Referenced by: '<S317>/S-Function'

  { 105U, 98U, 115U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S317>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S317>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S317>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_mkz
  //  Referenced by: '<S317>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_hym
  //  Referenced by: '<S319>/S-Function'

  { 105U, 99U, 115U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S319>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S319>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S319>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_am
  //  Referenced by: '<S319>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_m3
  //  Referenced by: '<S321>/S-Function'

  { 105U, 97U, 114U, 95U, 122U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S321>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S321>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S321>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_i0
  //  Referenced by: '<S321>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_gm
  //  Referenced by: '<S323>/S-Function'

  { 105U, 98U, 114U, 95U, 122U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S323>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S323>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S323>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_iu
  //  Referenced by: '<S323>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Expression: uint16(interrupt_pstsclr)
  //  Referenced by: '<S192>/S-Function'

  0U,

  // Expression: uint16(private_adc_delay_ns)
  //  Referenced by: '<S192>/S-Function'

  2000U,

  // Expression: uint16(highest_device_id)
  //  Referenced by: '<S192>/S-Function'

  2U,

  // Computed Parameter: SFunction_P1_gy
  //  Referenced by: '<S450>/S-Function'

  { 119U, 95U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S450>/S-Function'

  1U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S450>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S450>/S-Function'

  2U,

  // Expression: uint16(ETH_PORT)
  //  Referenced by: '<S450>/S-Function'

  2000U,

  // Computed Parameter: SFunction_P1_pa
  //  Referenced by: '<S444>/S-Function'

  { 108U, 97U, 109U, 98U, 100U, 97U, 95U, 122U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S444>/S-Function'

  1U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S444>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S444>/S-Function'

  2U,

  // Expression: uint16(ETH_PORT)
  //  Referenced by: '<S444>/S-Function'

  2000U,

  // Computed Parameter: SFunction_P1_db
  //  Referenced by: '<S436>/S-Function'

  { 99U, 101U, 99U, 95U, 99U, 111U, 110U, 116U, 114U, 111U, 108U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S436>/S-Function'

  1U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S436>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S436>/S-Function'

  2U,

  // Expression: uint16(ETH_PORT)
  //  Referenced by: '<S436>/S-Function'

  2000U,

  // Computed Parameter: SFunction_P1_ep
  //  Referenced by: '<S233>/S-Function'

  { 105U, 109U, 113U, 95U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S233>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S233>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S233>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_iz
  //  Referenced by: '<S233>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S205>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S205>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S205>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S365>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S365>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S365>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S367>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S367>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S367>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S369>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S369>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S369>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S371>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S371>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S371>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S377>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S377>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S377>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S379>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S379>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S379>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S381>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S381>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S381>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S383>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S383>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S383>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S390>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S390>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S390>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S392>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S392>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S392>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S394>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S394>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S394>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S396>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S396>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S396>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S403>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S403>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S403>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S405>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S405>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S405>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S407>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S407>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S407>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S409>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S409>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S409>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S415>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S415>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S415>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S417>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S417>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S417>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S419>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S419>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S419>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S421>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S421>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S421>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S428>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S428>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S428>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S430>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S430>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S430>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S432>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S432>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S432>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S434>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S434>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S434>/PWM'

  true,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S207>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S207>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S207>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S207>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S209>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S209>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S209>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S209>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S211>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S211>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S211>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S211>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S213>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S213>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S213>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S213>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S215>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S215>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S215>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S215>/S-Function'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S163>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S163>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S165>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S165>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S183>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S183>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S169>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S169>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S185>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S185>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S187>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S187>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S189>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S189>/ADC'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S446>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S446>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S446>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S446>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S448>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S448>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S448>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S448>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S452>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S452>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S452>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S452>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S217>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S217>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S217>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S217>/S-Function'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S179>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S179>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S167>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S167>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S173>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S173>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S181>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S181>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S175>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S175>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S177>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S177>/ADC'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S197>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S197>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S197>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S197>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S438>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S438>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S438>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S438>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S219>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S219>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S219>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S219>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S221>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S221>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S221>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S221>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S223>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S223>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S223>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S223>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S225>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S225>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S225>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S225>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S227>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S227>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S227>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S227>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S229>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S229>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S229>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S229>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S231>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S231>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S231>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S231>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S235>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S235>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S235>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S235>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S237>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S237>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S237>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S237>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S239>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S239>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S239>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S239>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S241>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S241>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S241>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S241>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S243>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S243>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S243>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S243>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S245>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S245>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S245>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S245>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S247>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S247>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S247>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S247>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S249>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S249>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S249>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S249>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S251>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S251>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S251>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S251>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S253>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S253>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S253>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S253>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S255>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S255>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S255>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S255>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S257>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S257>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S257>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S257>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S259>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S259>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S259>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S259>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S261>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S261>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S261>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S261>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S263>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S263>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S263>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S263>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S265>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S265>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S265>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S265>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S442>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S442>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S442>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S442>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S440>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S440>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S440>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S440>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S267>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S267>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S267>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S267>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S269>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S269>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S269>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S269>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S271>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S271>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S271>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S271>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S273>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S273>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S273>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S273>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S275>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S275>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S275>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S275>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S277>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S277>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S277>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S277>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S279>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S279>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S279>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S279>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S281>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S281>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S281>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S281>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S283>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S283>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S283>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S283>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S285>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S285>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S285>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S285>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S287>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S287>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S287>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S287>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S289>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S289>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S289>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S289>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S291>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S291>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S291>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S291>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S293>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S293>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S293>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S293>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S295>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S295>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S295>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S295>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S297>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S297>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S297>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S297>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S299>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S299>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S299>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S299>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S301>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S301>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S301>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S301>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S303>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S303>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S303>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S303>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S305>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S305>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S305>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S305>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S307>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S307>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S307>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S307>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S309>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S309>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S309>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S309>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S311>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S311>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S311>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S311>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S313>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S313>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S313>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S313>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S315>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S315>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S315>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S315>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S317>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S317>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S317>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S317>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S319>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S319>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S319>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S319>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S321>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S321>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S321>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S321>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S323>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S323>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S323>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S323>/S-Function'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S171>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S171>/ADC'

  false,

  // Expression: boolean(var_freq)
  //  Referenced by: '<S194>/CLK1'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S450>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S450>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S450>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S450>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S444>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S444>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S444>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S444>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S436>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S436>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S436>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S436>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S233>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S233>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S233>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S233>/S-Function'

  false
};

//
// End of automatically generated code
// Copyright imperix ltd. Switzerland 2021
// [EOF]
//
