//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: imperix_M2C_NN_control_2024b_data.cpp
//
// Code generated for Simulink model 'imperix_M2C_NN_control_2024b'.
// To be implemented on the B-Box RCP or the B-Board PRO.
//
// Model version                  : 19.18
// Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
// C/C++ source code generated on : Thu Dec 11 16:53:45 2025
//
#include "imperix_M2C_NN_control_2024b.h"

// Block parameters (default storage)
P_imperix_M2C_NN_control_2024_T imperix_M2C_NN_control_2024b_P{
  // Variable: A
  //  Referenced by: '<S1>/Gain1'

  { 1.0, 0.0, -1.0, 0.0, 0.0, 1.0, 0.0, 0.0, -1.0, 0.0, 1.0, 0.0, 0.0, 0.0, -1.0,
    0.0, 1.0, -1.0, 0.0, 0.0, 0.0, 1.0, 0.0, -1.0, 0.0, 0.0, 1.0, 0.0, 0.0, -1.0
  },

  // Variable: A_cc
  //  Referenced by: '<S1>/Circulating Current Control MPC'

  { 1.0, 0.0, -1.0, 0.0, 0.0, 1.0, 0.0, -1.0 },

  // Variable: C
  //  Referenced by:
  //    '<S1>/Gain39'
  //    '<S1>/Gain40'
  //    '<S29>/Gain3'

  0.000987,

  // Variable: N
  //  Referenced by: '<S29>/Gain2'

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
  //  Referenced by: '<S1>/P'

  { 0.66666666666666663, 0.0, -0.33333333333333331, 0.57735026918962573,
    -0.33333333333333331, -0.57735026918962573 },

  // Variable: Xmax
  //  Referenced by: '<S29>/Gain'

  { 33.360251931973195, 7.0056529057143768, 7.0056529057143768,
    7.0056529057143768, 7.0056529057143768, 7.0056529057143768,
    7.0056529057143768, 4.0, 4.0, 268.70057685088807, 268.70057685088807,
    1074.8023074035523, 1074.8023074035523, 4.2 },

  // Variable: Ymax
  //  Referenced by: '<S29>/Gain1'

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
  //    '<S142>/Constant'
  //    '<S144>/Bias'
  //    '<S144>/Gain'
  //    '<S144>/Gain1'

  -3.1415926535897931,

  // Mask Parameter: IntegratorwithWrappedStateDis_p
  //  Referenced by:
  //    '<S143>/Constant'
  //    '<S144>/Gain'
  //    '<S144>/Gain1'

  3.1415926535897931,

  // Mask Parameter: IntegratorwithWrappedStateDis_g
  //  Referenced by: '<S141>/Initial'

  0.0,

  // Expression: 1
  //  Referenced by: '<S29>/Pulse Generator'

  1.0,

  // Computed Parameter: PulseGenerator_Period
  //  Referenced by: '<S29>/Pulse Generator'

  20.0,

  // Computed Parameter: PulseGenerator_Duty
  //  Referenced by: '<S29>/Pulse Generator'

  1.0,

  // Expression: 0
  //  Referenced by: '<S29>/Pulse Generator'

  0.0,

  // Expression: 3
  //  Referenced by: '<S1>/Gain54'

  3.0,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S131>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S133>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S123>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S111>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S125>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S127>/ADC'

  0.00016666666666666666,

  // Expression: [ 1   -1/2   -1/2; 0   sqrt(3)/2   -sqrt(3)/2; 1/2  1/2  1/2 ]
  //  Referenced by: '<S353>/Gain3'

  { 1.0, 0.0, 0.5, -0.5, 0.8660254037844386, 0.5, -0.5, -0.8660254037844386, 0.5
  },

  // Expression: 2/3
  //  Referenced by: '<S353>/Gain1'

  0.66666666666666663,

  // Computed Parameter: Integrator_gainval
  //  Referenced by: '<S141>/Integrator'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S129>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S345>/S-Function'

  0.00016666666666666666,

  // Expression: -1
  //  Referenced by: '<S1>/Gain8'

  -1.0,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S347>/S-Function'

  0.00016666666666666666,

  // Expression: 0
  //  Referenced by:

  0.0,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S351>/S-Function'

  0.00016666666666666666,

  // Expression: -1
  //  Referenced by: '<S1>/Gain17'

  -1.0,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S119>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S135>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S113>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S121>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S115>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S117>/ADC'

  0.00016666666666666666,

  // Expression: 520
  //  Referenced by: '<S1>/Constant2'

  520.0,

  // Expression: -1
  //  Referenced by: '<S1>/Gain31'

  -1.0,

  // Expression: 0
  //  Referenced by: '<S1>/Constant1'

  0.0,

  // Expression: [ 1   0   1; -1/2  sqrt(3)/2   1; -1/2  -sqrt(3)/2  1 ]
  //  Referenced by: '<S18>/Gain3'

  { 1.0, -0.5, -0.5, 0.0, 0.8660254037844386, -0.8660254037844386, 1.0, 1.0, 1.0
  },

  // Expression: 0.5
  //  Referenced by: '<S1>/Gain'

  0.5,

  // Expression: 0.5
  //  Referenced by: '<S1>/Gain19'

  0.5,

  // Expression: 520
  //  Referenced by: '<S1>/Constant13'

  520.0,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S339>/S-Function'

  0.00016666666666666666,

  // Expression: 520
  //  Referenced by: '<S1>/Constant14'

  520.0,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S343>/S-Function'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S341>/S-Function'

  0.00016666666666666666,

  // Expression: -1
  //  Referenced by: '<S1>/Gain21'

  -1.0,

  // Expression: -1
  //  Referenced by: '<S1>/Gain3'

  -1.0,

  // Expression: 100/520
  //  Referenced by: '<S1>/Gain25'

  0.19230769230769232,

  // Expression: 1
  //  Referenced by: '<S1>/Constant3'

  1.0,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S349>/S-Function'

  0.00016666666666666666,

  // Expression: -1
  //  Referenced by: '<S1>/Gain20'

  -1.0,

  // Expression: 0.5
  //  Referenced by: '<S1>/Gain84'

  0.5,

  // Expression: 1/4
  //  Referenced by: '<S1>/Gain9'

  0.25,

  // Expression: 0
  //  Referenced by: '<S29>/Constant'

  0.0,

  // Expression: [ 1   0   1; -1/2  sqrt(3)/2   1; -1/2  -sqrt(3)/2  1 ]
  //  Referenced by: '<S145>/Gain3'

  { 1.0, -0.5, -0.5, 0.0, 0.8660254037844386, -0.8660254037844386, 1.0, 1.0, 1.0
  },

  // Expression: 0
  //  Referenced by: '<S29>/Constant1'

  0.0,

  // Expression: [ 1   0   1; -1/2  sqrt(3)/2   1; -1/2  -sqrt(3)/2  1 ]
  //  Referenced by: '<S146>/Gain3'

  { 1.0, -0.5, -0.5, 0.0, 0.8660254037844386, -0.8660254037844386, 1.0, 1.0, 1.0
  },

  // Expression: PHASE
  //  Referenced by: '<S32>/phase'

  0.0,

  // Expression: PHASE
  //  Referenced by: '<S266>/phase'

  0.75,

  // Expression: PHASE
  //  Referenced by: '<S267>/phase'

  0.5,

  // Expression: PHASE
  //  Referenced by: '<S268>/phase'

  0.25,

  // Expression: PHASE
  //  Referenced by: '<S269>/phase'

  0.0,

  // Expression: PHASE
  //  Referenced by: '<S278>/phase'

  0.75,

  // Expression: PHASE
  //  Referenced by: '<S279>/phase'

  0.5,

  // Expression: PHASE
  //  Referenced by: '<S280>/phase'

  0.25,

  // Expression: PHASE
  //  Referenced by: '<S281>/phase'

  0.0,

  // Expression: -1
  //  Referenced by: '<S93>/Gain1'

  -1.0,

  // Expression: PHASE
  //  Referenced by: '<S290>/phase'

  0.75,

  // Expression: PHASE
  //  Referenced by: '<S291>/phase'

  0.5,

  // Expression: PHASE
  //  Referenced by: '<S292>/phase'

  0.25,

  // Expression: PHASE
  //  Referenced by: '<S293>/phase'

  0.0,

  // Expression: -1
  //  Referenced by: '<S94>/Gain3'

  -1.0,

  // Expression: PHASE
  //  Referenced by: '<S302>/phase'

  0.75,

  // Expression: PHASE
  //  Referenced by: '<S303>/phase'

  0.5,

  // Expression: PHASE
  //  Referenced by: '<S304>/phase'

  0.25,

  // Expression: PHASE
  //  Referenced by: '<S305>/phase'

  0.0,

  // Expression: -1
  //  Referenced by: '<S95>/Gain3'

  -1.0,

  // Expression: PHASE
  //  Referenced by: '<S314>/phase'

  0.75,

  // Expression: PHASE
  //  Referenced by: '<S315>/phase'

  0.5,

  // Expression: PHASE
  //  Referenced by: '<S316>/phase'

  0.25,

  // Expression: PHASE
  //  Referenced by: '<S317>/phase'

  0.0,

  // Expression: PHASE
  //  Referenced by: '<S326>/phase'

  0.75,

  // Expression: PHASE
  //  Referenced by: '<S327>/phase'

  0.5,

  // Expression: PHASE
  //  Referenced by: '<S328>/phase'

  0.25,

  // Expression: PHASE
  //  Referenced by: '<S329>/phase'

  0.0,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S109>/ADC'

  0.00016666666666666666,

  // Expression: 520
  //  Referenced by: '<S1>/Constant4'

  520.0,

  // Expression: 1/2
  //  Referenced by: '<S1>/Gain5'

  0.5,

  // Expression: single(deadtime)
  //  Referenced by: '<S151>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S151>/PWM'

  1.0F,

  // Expression: single(phase)
  //  Referenced by: '<S151>/PWM'

  0.0F,

  // Expression: single(deadtime)
  //  Referenced by: '<S271>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S271>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S271>/PWM'

  0.75F,

  // Expression: single(deadtime)
  //  Referenced by: '<S273>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S273>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S273>/PWM'

  0.5F,

  // Expression: single(deadtime)
  //  Referenced by: '<S275>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S275>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S275>/PWM'

  0.25F,

  // Expression: single(deadtime)
  //  Referenced by: '<S277>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S277>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S277>/PWM'

  0.0F,

  // Expression: single(deadtime)
  //  Referenced by: '<S283>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S283>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S283>/PWM'

  0.75F,

  // Expression: single(deadtime)
  //  Referenced by: '<S285>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S285>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S285>/PWM'

  0.5F,

  // Expression: single(deadtime)
  //  Referenced by: '<S287>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S287>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S287>/PWM'

  0.25F,

  // Expression: single(deadtime)
  //  Referenced by: '<S289>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S289>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S289>/PWM'

  0.0F,

  // Expression: single(deadtime)
  //  Referenced by: '<S295>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S295>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S295>/PWM'

  0.75F,

  // Expression: single(deadtime)
  //  Referenced by: '<S297>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S297>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S297>/PWM'

  0.5F,

  // Expression: single(deadtime)
  //  Referenced by: '<S299>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S299>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S299>/PWM'

  0.25F,

  // Expression: single(deadtime)
  //  Referenced by: '<S301>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S301>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S301>/PWM'

  0.0F,

  // Expression: single(deadtime)
  //  Referenced by: '<S307>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S307>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S307>/PWM'

  0.75F,

  // Expression: single(deadtime)
  //  Referenced by: '<S309>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S309>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S309>/PWM'

  0.5F,

  // Expression: single(deadtime)
  //  Referenced by: '<S311>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S311>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S311>/PWM'

  0.25F,

  // Expression: single(deadtime)
  //  Referenced by: '<S313>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S313>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S313>/PWM'

  0.0F,

  // Expression: single(deadtime)
  //  Referenced by: '<S319>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S319>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S319>/PWM'

  0.75F,

  // Expression: single(deadtime)
  //  Referenced by: '<S321>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S321>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S321>/PWM'

  0.5F,

  // Expression: single(deadtime)
  //  Referenced by: '<S323>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S323>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S323>/PWM'

  0.25F,

  // Expression: single(deadtime)
  //  Referenced by: '<S325>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S325>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S325>/PWM'

  0.0F,

  // Expression: single(deadtime)
  //  Referenced by: '<S331>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S331>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S331>/PWM'

  0.75F,

  // Expression: single(deadtime)
  //  Referenced by: '<S333>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S333>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S333>/PWM'

  0.5F,

  // Expression: single(deadtime)
  //  Referenced by: '<S335>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S335>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S335>/PWM'

  0.25F,

  // Expression: single(deadtime)
  //  Referenced by: '<S337>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S337>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S337>/PWM'

  0.0F,

  // Computed Parameter: TmpRTBAtSubsystemInport1_Initia
  //  Referenced by:

  0.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S153>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S153>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S155>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S155>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S157>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S157>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S159>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S159>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S161>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S161>/S-Function'

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

  // Expression: single(private_nb_oversamples)
  //  Referenced by: '<S138>/S-Function'

  0.0F,

  // Expression: single(interrupt_phase)
  //  Referenced by: '<S138>/S-Function'

  0.5F,

  // Expression: single(frequency)
  //  Referenced by: '<S140>/CLK1'

  6000.0F,

  // Expression: single(gain)
  //  Referenced by: '<S131>/ADC'

  0.00045776F,

  // Expression: single(offset)
  //  Referenced by: '<S131>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S133>/ADC'

  0.00045776F,

  // Expression: single(offset)
  //  Referenced by: '<S133>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S123>/ADC'

  0.00045776F,

  // Expression: single(offset)
  //  Referenced by: '<S123>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S111>/ADC'

  0.00045776F,

  // Expression: single(offset)
  //  Referenced by: '<S111>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S125>/ADC'

  0.00045776F,

  // Expression: single(offset)
  //  Referenced by: '<S125>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S127>/ADC'

  0.00045776F,

  // Expression: single(offset)
  //  Referenced by: '<S127>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S129>/ADC'

  0.012207F,

  // Expression: single(offset)
  //  Referenced by: '<S129>/ADC'

  0.0F,

  // Expression: single(INITIALVAL)
  //  Referenced by: '<S345>/S-Function'

  0.987F,

  // Expression: single(VAL_MIN)
  //  Referenced by: '<S345>/S-Function'

  rtMinusInfF,

  // Expression: single(VAL_MAX)
  //  Referenced by: '<S345>/S-Function'

  rtInfF,

  // Expression: single(0)
  //  Referenced by: '<S345>/S-Function'

  0.0F,

  // Expression: single(0)
  //  Referenced by: '<S345>/S-Function'

  0.0F,

  // Expression: single(INITIALVAL)
  //  Referenced by: '<S347>/S-Function'

  0.0F,

  // Expression: single(VAL_MIN)
  //  Referenced by: '<S347>/S-Function'

  rtMinusInfF,

  // Expression: single(VAL_MAX)
  //  Referenced by: '<S347>/S-Function'

  rtInfF,

  // Expression: single(0)
  //  Referenced by: '<S347>/S-Function'

  0.0F,

  // Expression: single(0)
  //  Referenced by: '<S347>/S-Function'

  0.0F,

  // Expression: single(INITIALVAL)
  //  Referenced by: '<S351>/S-Function'

  0.0F,

  // Expression: single(VAL_MIN)
  //  Referenced by: '<S351>/S-Function'

  rtMinusInfF,

  // Expression: single(VAL_MAX)
  //  Referenced by: '<S351>/S-Function'

  rtInfF,

  // Expression: single(0)
  //  Referenced by: '<S351>/S-Function'

  0.0F,

  // Expression: single(0)
  //  Referenced by: '<S351>/S-Function'

  0.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S163>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S163>/S-Function'

  10.0F,

  // Expression: single(gain)
  //  Referenced by: '<S119>/ADC'

  0.027466F,

  // Expression: single(offset)
  //  Referenced by: '<S119>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S135>/ADC'

  0.027466F,

  // Expression: single(offset)
  //  Referenced by: '<S135>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S113>/ADC'

  0.027466F,

  // Expression: single(offset)
  //  Referenced by: '<S113>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S121>/ADC'

  0.027466F,

  // Expression: single(offset)
  //  Referenced by: '<S121>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S115>/ADC'

  0.027466F,

  // Expression: single(offset)
  //  Referenced by: '<S115>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S117>/ADC'

  0.027466F,

  // Expression: single(offset)
  //  Referenced by: '<S117>/ADC'

  0.0F,

  // Expression: single(INITIALVAL)
  //  Referenced by: '<S339>/S-Function'

  0.0F,

  // Expression: single(VAL_MIN)
  //  Referenced by: '<S339>/S-Function'

  rtMinusInfF,

  // Expression: single(VAL_MAX)
  //  Referenced by: '<S339>/S-Function'

  rtInfF,

  // Expression: single(0)
  //  Referenced by: '<S339>/S-Function'

  0.0F,

  // Expression: single(0)
  //  Referenced by: '<S339>/S-Function'

  0.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S165>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S165>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S167>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S167>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S169>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S169>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S171>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S171>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S173>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S173>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S175>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S175>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S179>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S179>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S181>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S181>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S183>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S183>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S185>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S185>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S187>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S187>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S189>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S189>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S191>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S191>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S193>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S193>/S-Function'

  10.0F,

  // Expression: single(INITIALVAL)
  //  Referenced by: '<S343>/S-Function'

  0.0F,

  // Expression: single(VAL_MIN)
  //  Referenced by: '<S343>/S-Function'

  rtMinusInfF,

  // Expression: single(VAL_MAX)
  //  Referenced by: '<S343>/S-Function'

  rtInfF,

  // Expression: single(0)
  //  Referenced by: '<S343>/S-Function'

  0.0F,

  // Expression: single(0)
  //  Referenced by: '<S343>/S-Function'

  0.0F,

  // Expression: single(INITIALVAL)
  //  Referenced by: '<S341>/S-Function'

  0.002081F,

  // Expression: single(VAL_MIN)
  //  Referenced by: '<S341>/S-Function'

  rtMinusInfF,

  // Expression: single(VAL_MAX)
  //  Referenced by: '<S341>/S-Function'

  rtInfF,

  // Expression: single(0)
  //  Referenced by: '<S341>/S-Function'

  0.0F,

  // Expression: single(0)
  //  Referenced by: '<S341>/S-Function'

  0.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S195>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S195>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S197>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S197>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S199>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S199>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S201>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S201>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S205>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S205>/S-Function'

  10.0F,

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

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S217>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S217>/S-Function'

  10.0F,

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
  //  Referenced by: '<S233>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S233>/S-Function'

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

  // Expression: single(INITIALVAL)
  //  Referenced by: '<S349>/S-Function'

  31.415926F,

  // Expression: single(VAL_MIN)
  //  Referenced by: '<S349>/S-Function'

  rtMinusInfF,

  // Expression: single(VAL_MAX)
  //  Referenced by: '<S349>/S-Function'

  rtInfF,

  // Expression: single(0)
  //  Referenced by: '<S349>/S-Function'

  0.0F,

  // Expression: single(0)
  //  Referenced by: '<S349>/S-Function'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S109>/ADC'

  0.012207F,

  // Expression: single(offset)
  //  Referenced by: '<S109>/ADC'

  0.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S203>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S203>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S177>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S177>/S-Function'

  10.0F,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S153>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S153>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S155>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S155>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S157>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S157>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S159>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S159>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S161>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S161>/S-Function'

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
  //  Referenced by: '<S345>/S-Function'

  1000000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S347>/S-Function'

  1000000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S351>/S-Function'

  1000000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S163>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S163>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S339>/S-Function'

  1000000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S165>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S165>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S167>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S167>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S169>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S169>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S171>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S171>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S173>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S173>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S175>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S175>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S179>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S179>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S181>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S181>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S183>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S183>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S185>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S185>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S187>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S187>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S189>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S189>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S191>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S191>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S193>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S193>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S343>/S-Function'

  1000000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S341>/S-Function'

  1000000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S195>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S195>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S197>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S197>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S199>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S199>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S201>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S201>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S205>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S205>/S-Function'

  2000U,

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
  //  Referenced by: '<S217>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S217>/S-Function'

  2000U,

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
  //  Referenced by: '<S233>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S233>/S-Function'

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
  //  Referenced by: '<S349>/S-Function'

  1000000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S203>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S203>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S177>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S177>/S-Function'

  2000U,

  // Expression: int16(lane)
  //  Referenced by: '<S151>/PWM'

  8,

  // Expression: int16(carrier)
  //  Referenced by: '<S151>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S151>/PWM'

  0,

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
  //  Referenced by: '<S271>/PWM'

  0,

  // Expression: int16(carrier)
  //  Referenced by: '<S271>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S271>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S271>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S271>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S271>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S273>/PWM'

  1,

  // Expression: int16(carrier)
  //  Referenced by: '<S273>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S273>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S273>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S273>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S273>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S275>/PWM'

  2,

  // Expression: int16(carrier)
  //  Referenced by: '<S275>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S275>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S275>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S275>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S275>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S277>/PWM'

  3,

  // Expression: int16(carrier)
  //  Referenced by: '<S277>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S277>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S277>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S277>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S277>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S283>/PWM'

  8,

  // Expression: int16(carrier)
  //  Referenced by: '<S283>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S283>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S283>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S283>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S283>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S285>/PWM'

  9,

  // Expression: int16(carrier)
  //  Referenced by: '<S285>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S285>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S285>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S285>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S285>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S287>/PWM'

  10,

  // Expression: int16(carrier)
  //  Referenced by: '<S287>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S287>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S287>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S287>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S287>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S289>/PWM'

  11,

  // Expression: int16(carrier)
  //  Referenced by: '<S289>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S289>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S289>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S289>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S289>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S295>/PWM'

  4,

  // Expression: int16(carrier)
  //  Referenced by: '<S295>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S295>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S295>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S295>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S295>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S297>/PWM'

  5,

  // Expression: int16(carrier)
  //  Referenced by: '<S297>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S297>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S297>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S297>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S297>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S299>/PWM'

  6,

  // Expression: int16(carrier)
  //  Referenced by: '<S299>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S299>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S299>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S299>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S299>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S301>/PWM'

  7,

  // Expression: int16(carrier)
  //  Referenced by: '<S301>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S301>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S301>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S301>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S301>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S307>/PWM'

  4,

  // Expression: int16(carrier)
  //  Referenced by: '<S307>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S307>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S307>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S307>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S307>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S309>/PWM'

  5,

  // Expression: int16(carrier)
  //  Referenced by: '<S309>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S309>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S309>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S309>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S309>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S311>/PWM'

  6,

  // Expression: int16(carrier)
  //  Referenced by: '<S311>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S311>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S311>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S311>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S311>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S313>/PWM'

  7,

  // Expression: int16(carrier)
  //  Referenced by: '<S313>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S313>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S313>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S313>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S313>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S319>/PWM'

  12,

  // Expression: int16(carrier)
  //  Referenced by: '<S319>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S319>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S319>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S319>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S319>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S321>/PWM'

  13,

  // Expression: int16(carrier)
  //  Referenced by: '<S321>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S321>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S321>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S321>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S321>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S323>/PWM'

  14,

  // Expression: int16(carrier)
  //  Referenced by: '<S323>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S323>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S323>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S323>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S323>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S325>/PWM'

  15,

  // Expression: int16(carrier)
  //  Referenced by: '<S325>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S325>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S325>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S325>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S325>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S331>/PWM'

  0,

  // Expression: int16(carrier)
  //  Referenced by: '<S331>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S331>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S331>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S331>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S331>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S333>/PWM'

  1,

  // Expression: int16(carrier)
  //  Referenced by: '<S333>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S333>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S333>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S333>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S333>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S335>/PWM'

  2,

  // Expression: int16(carrier)
  //  Referenced by: '<S335>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S335>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S335>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S335>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S335>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S337>/PWM'

  3,

  // Expression: int16(carrier)
  //  Referenced by: '<S337>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S337>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S337>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S337>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S337>/PWM'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S153>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S153>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S155>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S155>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S157>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S157>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S159>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S159>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S161>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S161>/S-Function'

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

  // Computed Parameter: clk_id_Value
  //  Referenced by: '<S140>/clk_id'

  0,

  // Expression: int16(id)
  //  Referenced by: '<S140>/CLK1'

  0,

  // Expression: int16(channel)
  //  Referenced by: '<S131>/ADC'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S131>/ADC'

  0,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S131>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S131>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S133>/ADC'

  1,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S133>/ADC'

  0,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S133>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S133>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S123>/ADC'

  2,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S123>/ADC'

  0,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S123>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S123>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S111>/ADC'

  3,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S111>/ADC'

  0,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S111>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S111>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S125>/ADC'

  4,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S125>/ADC'

  0,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S125>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S125>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S127>/ADC'

  5,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S127>/ADC'

  0,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S127>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S127>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S129>/ADC'

  4,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S129>/ADC'

  1,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S129>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S129>/ADC'

  1,

  // Expression: int16(DATA_TYPE)
  //  Referenced by: '<S345>/S-Function'

  1,

  // Expression: int16(DATA_TYPE)
  //  Referenced by: '<S347>/S-Function'

  2,

  // Expression: int16(DATA_TYPE)
  //  Referenced by: '<S351>/S-Function'

  2,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S163>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S163>/S-Function'

  0,

  // Expression: int16(channel)
  //  Referenced by: '<S119>/ADC'

  6,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S119>/ADC'

  0,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S119>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S119>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S135>/ADC'

  7,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S135>/ADC'

  0,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S135>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S135>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S113>/ADC'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S113>/ADC'

  1,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S113>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S113>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S121>/ADC'

  1,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S121>/ADC'

  1,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S121>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S121>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S115>/ADC'

  2,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S115>/ADC'

  1,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S115>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S115>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S117>/ADC'

  3,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S117>/ADC'

  1,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S117>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S117>/ADC'

  1,

  // Expression: int16(DATA_TYPE)
  //  Referenced by: '<S339>/S-Function'

  1,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S165>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S165>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S167>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S167>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S169>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S169>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S171>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S171>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S173>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S173>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S175>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S175>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S179>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S179>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S181>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S181>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S183>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S183>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S185>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S185>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S187>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S187>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S189>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S189>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S191>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S191>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S193>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S193>/S-Function'

  0,

  // Expression: int16(DATA_TYPE)
  //  Referenced by: '<S343>/S-Function'

  1,

  // Expression: int16(DATA_TYPE)
  //  Referenced by: '<S341>/S-Function'

  1,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S195>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S195>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S197>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S197>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S199>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S199>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S201>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S201>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S205>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S205>/S-Function'

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

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S217>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S217>/S-Function'

  0,

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
  //  Referenced by: '<S233>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S233>/S-Function'

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

  // Expression: int16(DATA_TYPE)
  //  Referenced by: '<S349>/S-Function'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S109>/ADC'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S109>/ADC'

  2,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S109>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S109>/ADC'

  1,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S203>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S203>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S177>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S177>/S-Function'

  0,

  // Computed Parameter: SFunction_P1
  //  Referenced by: '<S153>/S-Function'

  { 118U, 48U, 95U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S153>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S153>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S153>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14
  //  Referenced by: '<S153>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_g
  //  Referenced by: '<S155>/S-Function'

  { 105U, 99U, 114U, 95U, 122U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S155>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S155>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S155>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_d
  //  Referenced by: '<S155>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_k
  //  Referenced by: '<S157>/S-Function'

  { 105U, 97U, 115U, 95U, 122U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S157>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S157>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S157>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_n
  //  Referenced by: '<S157>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_g0
  //  Referenced by: '<S159>/S-Function'

  { 105U, 98U, 115U, 95U, 122U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S159>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S159>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S159>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_p
  //  Referenced by: '<S159>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_c
  //  Referenced by: '<S161>/S-Function'

  { 105U, 99U, 115U, 95U, 122U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S161>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S161>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S161>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_h
  //  Referenced by: '<S161>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_m
  //  Referenced by: '<S263>/S-Function'

  { 105U, 97U, 114U, 95U, 122U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S263>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S263>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S263>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_i
  //  Referenced by: '<S263>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_gm
  //  Referenced by: '<S265>/S-Function'

  { 105U, 98U, 114U, 95U, 122U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S265>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S265>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S265>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_iu
  //  Referenced by: '<S265>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Expression: uint16(interrupt_pstsclr)
  //  Referenced by: '<S138>/S-Function'

  0U,

  // Expression: uint16(private_adc_delay_ns)
  //  Referenced by: '<S138>/S-Function'

  2000U,

  // Expression: uint16(highest_device_id)
  //  Referenced by: '<S138>/S-Function'

  2U,

  // Computed Parameter: SFunction_P1_e
  //  Referenced by: '<S345>/S-Function'

  { 102U, 108U, 117U, 120U, 95U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S345>/S-Function'

  1U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S345>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S345>/S-Function'

  2U,

  // Expression: uint16(ETH_PORT)
  //  Referenced by: '<S345>/S-Function'

  2000U,

  // Computed Parameter: SFunction_P1_k3
  //  Referenced by: '<S347>/S-Function'

  { 102U, 108U, 117U, 120U, 95U, 99U, 111U, 110U, 116U, 114U, 111U, 108U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S347>/S-Function'

  1U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S347>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S347>/S-Function'

  2U,

  // Expression: uint16(ETH_PORT)
  //  Referenced by: '<S347>/S-Function'

  2000U,

  // Computed Parameter: SFunction_P1_i
  //  Referenced by: '<S351>/S-Function'

  { 115U, 112U, 101U, 101U, 100U, 95U, 99U, 111U, 110U, 116U, 114U, 111U, 108U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S351>/S-Function'

  1U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S351>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S351>/S-Function'

  2U,

  // Expression: uint16(ETH_PORT)
  //  Referenced by: '<S351>/S-Function'

  2000U,

  // Computed Parameter: SFunction_P1_ie
  //  Referenced by: '<S163>/S-Function'

  { 105U, 109U, 100U, 95U, 114U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S163>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S163>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S163>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_j
  //  Referenced by: '<S163>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_p
  //  Referenced by: '<S339>/S-Function'

  { 105U, 110U, 112U, 117U, 116U, 95U, 99U, 111U, 110U, 116U, 114U, 111U, 108U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S339>/S-Function'

  1U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S339>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S339>/S-Function'

  2U,

  // Expression: uint16(ETH_PORT)
  //  Referenced by: '<S339>/S-Function'

  2000U,

  // Computed Parameter: SFunction_P1_n
  //  Referenced by: '<S165>/S-Function'

  { 105U, 80U, 95U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S165>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S165>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S165>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_it
  //  Referenced by: '<S165>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_h
  //  Referenced by: '<S167>/S-Function'

  { 105U, 109U, 113U, 95U, 114U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S167>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S167>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S167>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_c
  //  Referenced by: '<S167>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_d
  //  Referenced by: '<S169>/S-Function'

  { 105U, 109U, 100U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S169>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S169>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S169>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_cg
  //  Referenced by: '<S169>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_g5
  //  Referenced by: '<S171>/S-Function'

  { 105U, 109U, 113U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S171>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S171>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S171>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_b
  //  Referenced by: '<S171>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_j
  //  Referenced by: '<S173>/S-Function'

  { 102U, 108U, 117U, 120U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S173>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S173>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S173>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_ho
  //  Referenced by: '<S173>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_es
  //  Referenced by: '<S175>/S-Function'

  { 105U, 97U, 114U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S175>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S175>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S175>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_f
  //  Referenced by: '<S175>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_fk
  //  Referenced by: '<S179>/S-Function'

  { 118U, 100U, 95U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S179>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S179>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S179>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_bb
  //  Referenced by: '<S179>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_kv
  //  Referenced by: '<S181>/S-Function'

  { 118U, 113U, 95U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S181>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S181>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S181>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_ir
  //  Referenced by: '<S181>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_dj
  //  Referenced by: '<S183>/S-Function'

  { 118U, 121U, 95U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S183>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S183>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S183>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_ko
  //  Referenced by: '<S183>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_pn
  //  Referenced by: '<S185>/S-Function'

  { 105U, 103U, 100U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S185>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S185>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S185>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_l
  //  Referenced by: '<S185>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_esn
  //  Referenced by: '<S187>/S-Function'

  { 112U, 95U, 109U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S187>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S187>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S187>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_hoz
  //  Referenced by: '<S187>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_pg
  //  Referenced by: '<S189>/S-Function'

  { 105U, 122U, 107U, 112U, 105U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S189>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S189>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S189>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_g
  //  Referenced by: '<S189>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_gv
  //  Referenced by: '<S191>/S-Function'

  { 105U, 115U, 113U, 114U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S191>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S191>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S191>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_n0
  //  Referenced by: '<S191>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_df
  //  Referenced by: '<S193>/S-Function'

  { 105U, 115U, 100U, 114U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S193>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S193>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S193>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_nt
  //  Referenced by: '<S193>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_o
  //  Referenced by: '<S343>/S-Function'

  { 101U, 110U, 97U, 98U, 108U, 101U, 95U, 99U, 99U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S343>/S-Function'

  1U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S343>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S343>/S-Function'

  2U,

  // Expression: uint16(ETH_PORT)
  //  Referenced by: '<S343>/S-Function'

  2000U,

  // Computed Parameter: SFunction_P1_nt
  //  Referenced by: '<S341>/S-Function'

  { 105U, 101U, 95U, 108U, 97U, 109U, 98U, 100U, 97U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S341>/S-Function'

  1U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S341>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S341>/S-Function'

  2U,

  // Expression: uint16(ETH_PORT)
  //  Referenced by: '<S341>/S-Function'

  2000U,

  // Computed Parameter: SFunction_P1_b
  //  Referenced by: '<S195>/S-Function'

  { 118U, 114U, 95U, 97U, 114U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S195>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S195>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S195>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_ba
  //  Referenced by: '<S195>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_cf
  //  Referenced by: '<S197>/S-Function'

  { 118U, 109U, 97U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S197>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S197>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S197>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_fq
  //  Referenced by: '<S197>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_nw
  //  Referenced by: '<S199>/S-Function'

  { 118U, 109U, 98U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S199>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S199>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S199>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_pr
  //  Referenced by: '<S199>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_ml
  //  Referenced by: '<S201>/S-Function'

  { 118U, 109U, 99U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S201>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S201>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S201>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_prh
  //  Referenced by: '<S201>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_a
  //  Referenced by: '<S205>/S-Function'

  { 118U, 114U, 95U, 98U, 114U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S205>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S205>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S205>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_d5
  //  Referenced by: '<S205>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_mi
  //  Referenced by: '<S207>/S-Function'

  { 118U, 114U, 95U, 99U, 114U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S207>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S207>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S207>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_gx
  //  Referenced by: '<S207>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_pm
  //  Referenced by: '<S209>/S-Function'

  { 118U, 114U, 95U, 97U, 115U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S209>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S209>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S209>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_kz
  //  Referenced by: '<S209>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_cff
  //  Referenced by: '<S211>/S-Function'

  { 116U, 104U, 101U, 116U, 97U, 95U, 109U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S211>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S211>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S211>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_gz
  //  Referenced by: '<S211>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_k3j
  //  Referenced by: '<S213>/S-Function'

  { 119U, 115U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S213>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S213>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S213>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_e
  //  Referenced by: '<S213>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_kn
  //  Referenced by: '<S215>/S-Function'

  { 118U, 114U, 95U, 98U, 115U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S215>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S215>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S215>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_cf
  //  Referenced by: '<S215>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_l
  //  Referenced by: '<S217>/S-Function'

  { 105U, 115U, 113U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S217>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S217>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S217>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_pn
  //  Referenced by: '<S217>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_ez
  //  Referenced by: '<S219>/S-Function'

  { 105U, 115U, 100U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S219>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S219>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S219>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_ao
  //  Referenced by: '<S219>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_bk
  //  Referenced by: '<S221>/S-Function'

  { 105U, 109U, 97U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S221>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S221>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S221>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_lm
  //  Referenced by: '<S221>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_hg
  //  Referenced by: '<S223>/S-Function'

  { 105U, 109U, 98U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S223>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S223>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S223>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_m
  //  Referenced by: '<S223>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_e5
  //  Referenced by: '<S225>/S-Function'

  { 105U, 109U, 99U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S225>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S225>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S225>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_o
  //  Referenced by: '<S225>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_po
  //  Referenced by: '<S227>/S-Function'

  { 105U, 97U, 48U, 95U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S227>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S227>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S227>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_bs
  //  Referenced by: '<S227>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_p1
  //  Referenced by: '<S229>/S-Function'

  { 105U, 98U, 48U, 95U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S229>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S229>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S229>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_gp
  //  Referenced by: '<S229>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_eb
  //  Referenced by: '<S231>/S-Function'

  { 118U, 114U, 95U, 99U, 115U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S231>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S231>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S231>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_fc
  //  Referenced by: '<S231>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_br
  //  Referenced by: '<S233>/S-Function'

  { 105U, 109U, 100U, 95U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S233>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S233>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S233>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_gw
  //  Referenced by: '<S233>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_as
  //  Referenced by: '<S235>/S-Function'

  { 86U, 99U, 95U, 97U, 114U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S235>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S235>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S235>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_jr
  //  Referenced by: '<S235>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_ga
  //  Referenced by: '<S237>/S-Function'

  { 105U, 100U, 99U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S237>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S237>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S237>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_eu
  //  Referenced by: '<S237>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_m4
  //  Referenced by: '<S239>/S-Function'

  { 118U, 99U, 107U, 112U, 105U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S239>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S239>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S239>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_ex
  //  Referenced by: '<S239>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_pmg
  //  Referenced by: '<S241>/S-Function'

  { 86U, 99U, 95U, 98U, 114U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S241>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S241>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S241>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_hf
  //  Referenced by: '<S241>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_he
  //  Referenced by: '<S243>/S-Function'

  { 86U, 99U, 95U, 99U, 114U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S243>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S243>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S243>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_lf
  //  Referenced by: '<S243>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_l3
  //  Referenced by: '<S245>/S-Function'

  { 86U, 99U, 95U, 97U, 115U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S245>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S245>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S245>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_kh
  //  Referenced by: '<S245>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_fn
  //  Referenced by: '<S247>/S-Function'

  { 105U, 98U, 114U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S247>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S247>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S247>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_hfu
  //  Referenced by: '<S247>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_cq
  //  Referenced by: '<S249>/S-Function'

  { 86U, 99U, 95U, 98U, 115U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S249>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S249>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S249>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_mf
  //  Referenced by: '<S249>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_cv
  //  Referenced by: '<S251>/S-Function'

  { 86U, 99U, 95U, 99U, 115U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S251>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S251>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S251>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_iz
  //  Referenced by: '<S251>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_hj
  //  Referenced by: '<S253>/S-Function'

  119U,

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S253>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S253>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S253>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_e1
  //  Referenced by: '<S253>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_mo
  //  Referenced by: '<S255>/S-Function'

  { 105U, 99U, 114U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S255>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S255>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S255>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_pg
  //  Referenced by: '<S255>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_iec
  //  Referenced by: '<S257>/S-Function'

  { 105U, 97U, 115U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S257>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S257>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S257>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_hx
  //  Referenced by: '<S257>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_bd
  //  Referenced by: '<S259>/S-Function'

  { 105U, 98U, 115U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S259>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S259>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S259>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_lb
  //  Referenced by: '<S259>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_dz
  //  Referenced by: '<S261>/S-Function'

  { 105U, 99U, 115U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S261>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S261>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S261>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_km
  //  Referenced by: '<S261>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_gy
  //  Referenced by: '<S349>/S-Function'

  { 119U, 95U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S349>/S-Function'

  1U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S349>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S349>/S-Function'

  2U,

  // Expression: uint16(ETH_PORT)
  //  Referenced by: '<S349>/S-Function'

  2000U,

  // Computed Parameter: SFunction_P1_i0
  //  Referenced by: '<S203>/S-Function'

  { 118U, 100U, 99U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S203>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S203>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S203>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_at
  //  Referenced by: '<S203>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_ep
  //  Referenced by: '<S177>/S-Function'

  { 105U, 109U, 113U, 95U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S177>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S177>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S177>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_izn
  //  Referenced by: '<S177>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

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
  //  Referenced by: '<S271>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S271>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S271>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S273>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S273>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S273>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S275>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S275>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S275>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S277>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S277>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S277>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S283>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S283>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S283>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S285>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S285>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S285>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S287>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S287>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S287>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S289>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S289>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S289>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S295>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S295>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S295>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S297>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S297>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S297>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S299>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S299>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S299>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S301>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S301>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S301>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S307>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S307>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S307>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S309>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S309>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S309>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S311>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S311>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S311>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S313>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S313>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S313>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S319>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S319>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S319>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S321>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S321>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S321>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S323>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S323>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S323>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S325>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S325>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S325>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S331>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S331>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S331>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S333>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S333>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S333>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S335>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S335>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S335>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S337>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S337>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S337>/PWM'

  true,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S153>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S153>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S153>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S153>/S-Function'

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

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S161>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S161>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S161>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S161>/S-Function'

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

  // Expression: boolean(var_freq)
  //  Referenced by: '<S140>/CLK1'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S131>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S131>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S133>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S133>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S123>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S123>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S111>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S111>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S125>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S125>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S127>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S127>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S129>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S129>/ADC'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S345>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S345>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S345>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S345>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S347>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S347>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S347>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S347>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S351>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S351>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S351>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S351>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S163>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S163>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S163>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S163>/S-Function'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S119>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S119>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S135>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S135>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S113>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S113>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S121>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S121>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S115>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S115>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S117>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S117>/ADC'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S339>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S339>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S339>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S339>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S165>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S165>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S165>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S165>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S167>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S167>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S167>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S167>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S169>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S169>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S169>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S169>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S171>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S171>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S171>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S171>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S173>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S173>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S173>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S173>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S175>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S175>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S175>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S175>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S179>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S179>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S179>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S179>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S181>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S181>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S181>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S181>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S183>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S183>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S183>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S183>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S185>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S185>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S185>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S185>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S187>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S187>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S187>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S187>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S189>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S189>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S189>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S189>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S191>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S191>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S191>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S191>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S193>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S193>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S193>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S193>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S343>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S343>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S343>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S343>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S341>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S341>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S341>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S341>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S195>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S195>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S195>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S195>/S-Function'

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
  //  Referenced by: '<S199>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S199>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S199>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S199>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S201>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S201>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S201>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S201>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S205>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S205>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S205>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S205>/S-Function'

  false,

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
  //  Referenced by: '<S349>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S349>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S349>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S349>/S-Function'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S109>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S109>/ADC'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S203>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S203>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S203>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S203>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S177>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S177>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S177>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S177>/S-Function'

  false
};

//
// End of automatically generated code
// Copyright imperix ltd. Switzerland 2021
// [EOF]
//
