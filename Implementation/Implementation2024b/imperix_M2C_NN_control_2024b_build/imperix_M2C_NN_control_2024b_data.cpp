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
// Model version                  : 19.8
// Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
// C/C++ source code generated on : Tue Oct 14 16:13:52 2025
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
  //    '<S28>/Gain3'

  0.000987,

  // Variable: N
  //  Referenced by: '<S28>/Gain2'

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
  //  Referenced by: '<S28>/Gain'

  { 33.360251931973195, 7.0056529057143768, 7.0056529057143768,
    7.0056529057143768, 7.0056529057143768, 7.0056529057143768,
    7.0056529057143768, 4.0, 4.0, 268.70057685088807, 268.70057685088807,
    1074.8023074035523, 1074.8023074035523, 4.2 },

  // Variable: Ymax
  //  Referenced by: '<S28>/Gain1'

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
  //    '<S139>/Constant'
  //    '<S141>/Bias'
  //    '<S141>/Gain'
  //    '<S141>/Gain1'

  -3.1415926535897931,

  // Mask Parameter: IntegratorwithWrappedStateDis_p
  //  Referenced by:
  //    '<S140>/Constant'
  //    '<S141>/Gain'
  //    '<S141>/Gain1'

  3.1415926535897931,

  // Mask Parameter: IntegratorwithWrappedStateDis_g
  //  Referenced by: '<S138>/Initial'

  0.0,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S116>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S132>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S110>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S118>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S112>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S114>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S128>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S130>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S120>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S108>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S122>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S124>/ADC'

  0.00016666666666666666,

  // Expression: 0
  //  Referenced by: '<S28>/Constant'

  0.0,

  // Expression: [ 1   0   1; -1/2  sqrt(3)/2   1; -1/2  -sqrt(3)/2  1 ]
  //  Referenced by: '<S142>/Gain3'

  { 1.0, -0.5, -0.5, 0.0, 0.8660254037844386, -0.8660254037844386, 1.0, 1.0, 1.0
  },

  // Expression: [ 1   -1/2   -1/2; 0   sqrt(3)/2   -sqrt(3)/2; 1/2  1/2  1/2 ]
  //  Referenced by: '<S350>/Gain3'

  { 1.0, 0.0, 0.5, -0.5, 0.8660254037844386, 0.5, -0.5, -0.8660254037844386, 0.5
  },

  // Expression: 2/3
  //  Referenced by: '<S350>/Gain1'

  0.66666666666666663,

  // Computed Parameter: Integrator_gainval
  //  Referenced by: '<S138>/Integrator'

  0.00016666666666666666,

  // Expression: -1
  //  Referenced by: '<S1>/Gain31'

  -1.0,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S126>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S342>/S-Function'

  0.00016666666666666666,

  // Expression: -1
  //  Referenced by: '<S1>/Gain8'

  -1.0,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S344>/S-Function'

  0.00016666666666666666,

  // Expression: 0
  //  Referenced by:

  0.0,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S348>/S-Function'

  0.00016666666666666666,

  // Expression: 0.5
  //  Referenced by: '<S1>/Gain84'

  0.5,

  // Expression: 0
  //  Referenced by: '<S28>/Constant1'

  0.0,

  // Expression: [ 1   0   1; -1/2  sqrt(3)/2   1; -1/2  -sqrt(3)/2  1 ]
  //  Referenced by: '<S143>/Gain3'

  { 1.0, -0.5, -0.5, 0.0, 0.8660254037844386, -0.8660254037844386, 1.0, 1.0, 1.0
  },

  // Expression: -1
  //  Referenced by: '<S1>/Gain17'

  -1.0,

  // Expression: 520
  //  Referenced by: '<S1>/Constant2'

  520.0,

  // Expression: 0
  //  Referenced by: '<S1>/Constant1'

  0.0,

  // Expression: [ 1   0   1; -1/2  sqrt(3)/2   1; -1/2  -sqrt(3)/2  1 ]
  //  Referenced by: '<S17>/Gain3'

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
  //  Referenced by: '<S336>/S-Function'

  0.00016666666666666666,

  // Expression: 520
  //  Referenced by: '<S1>/Constant14'

  520.0,

  // Expression: 3
  //  Referenced by: '<S1>/Gain54'

  3.0,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S340>/S-Function'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S338>/S-Function'

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
  //  Referenced by: '<S346>/S-Function'

  0.00016666666666666666,

  // Expression: -1
  //  Referenced by: '<S1>/Gain20'

  -1.0,

  // Expression: 1/4
  //  Referenced by: '<S1>/Gain9'

  0.25,

  // Expression: PHASE
  //  Referenced by: '<S31>/phase'

  0.0,

  // Expression: PHASE
  //  Referenced by: '<S262>/phase'

  0.75,

  // Expression: PHASE
  //  Referenced by: '<S263>/phase'

  0.5,

  // Expression: PHASE
  //  Referenced by: '<S264>/phase'

  0.25,

  // Expression: PHASE
  //  Referenced by: '<S265>/phase'

  0.0,

  // Expression: PHASE
  //  Referenced by: '<S274>/phase'

  0.75,

  // Expression: PHASE
  //  Referenced by: '<S275>/phase'

  0.5,

  // Expression: PHASE
  //  Referenced by: '<S276>/phase'

  0.25,

  // Expression: PHASE
  //  Referenced by: '<S277>/phase'

  0.0,

  // Expression: -1
  //  Referenced by: '<S92>/Gain1'

  -1.0,

  // Expression: PHASE
  //  Referenced by: '<S286>/phase'

  0.75,

  // Expression: PHASE
  //  Referenced by: '<S287>/phase'

  0.5,

  // Expression: PHASE
  //  Referenced by: '<S288>/phase'

  0.25,

  // Expression: PHASE
  //  Referenced by: '<S289>/phase'

  0.0,

  // Expression: -1
  //  Referenced by: '<S93>/Gain3'

  -1.0,

  // Expression: PHASE
  //  Referenced by: '<S298>/phase'

  0.75,

  // Expression: PHASE
  //  Referenced by: '<S299>/phase'

  0.5,

  // Expression: PHASE
  //  Referenced by: '<S300>/phase'

  0.25,

  // Expression: PHASE
  //  Referenced by: '<S301>/phase'

  0.0,

  // Expression: -1
  //  Referenced by: '<S94>/Gain3'

  -1.0,

  // Expression: PHASE
  //  Referenced by: '<S310>/phase'

  0.75,

  // Expression: PHASE
  //  Referenced by: '<S311>/phase'

  0.5,

  // Expression: PHASE
  //  Referenced by: '<S312>/phase'

  0.25,

  // Expression: PHASE
  //  Referenced by: '<S313>/phase'

  0.0,

  // Expression: PHASE
  //  Referenced by: '<S323>/phase'

  0.75,

  // Expression: PHASE
  //  Referenced by: '<S324>/phase'

  0.5,

  // Expression: PHASE
  //  Referenced by: '<S325>/phase'

  0.25,

  // Expression: PHASE
  //  Referenced by: '<S326>/phase'

  0.0,

  // Expression: 520
  //  Referenced by: '<S1>/Constant4'

  520.0,

  // Expression: 1/2
  //  Referenced by: '<S1>/Gain5'

  0.5,

  // Expression: single(deadtime)
  //  Referenced by: '<S147>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S147>/PWM'

  1.0F,

  // Expression: single(phase)
  //  Referenced by: '<S147>/PWM'

  0.0F,

  // Expression: single(deadtime)
  //  Referenced by: '<S267>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S267>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S267>/PWM'

  0.75F,

  // Expression: single(deadtime)
  //  Referenced by: '<S269>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S269>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S269>/PWM'

  0.5F,

  // Expression: single(deadtime)
  //  Referenced by: '<S271>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S271>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S271>/PWM'

  0.25F,

  // Expression: single(deadtime)
  //  Referenced by: '<S273>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S273>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S273>/PWM'

  0.0F,

  // Expression: single(deadtime)
  //  Referenced by: '<S279>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S279>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S279>/PWM'

  0.75F,

  // Expression: single(deadtime)
  //  Referenced by: '<S281>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S281>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S281>/PWM'

  0.5F,

  // Expression: single(deadtime)
  //  Referenced by: '<S283>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S283>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S283>/PWM'

  0.25F,

  // Expression: single(deadtime)
  //  Referenced by: '<S285>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S285>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S285>/PWM'

  0.0F,

  // Expression: single(deadtime)
  //  Referenced by: '<S291>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S291>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S291>/PWM'

  0.75F,

  // Expression: single(deadtime)
  //  Referenced by: '<S293>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S293>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S293>/PWM'

  0.5F,

  // Expression: single(deadtime)
  //  Referenced by: '<S295>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S295>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S295>/PWM'

  0.25F,

  // Expression: single(deadtime)
  //  Referenced by: '<S297>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S297>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S297>/PWM'

  0.0F,

  // Expression: single(deadtime)
  //  Referenced by: '<S303>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S303>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S303>/PWM'

  0.75F,

  // Expression: single(deadtime)
  //  Referenced by: '<S305>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S305>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S305>/PWM'

  0.5F,

  // Expression: single(deadtime)
  //  Referenced by: '<S307>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S307>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S307>/PWM'

  0.25F,

  // Expression: single(deadtime)
  //  Referenced by: '<S309>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S309>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S309>/PWM'

  0.0F,

  // Expression: single(deadtime)
  //  Referenced by: '<S315>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S315>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S315>/PWM'

  0.75F,

  // Expression: single(deadtime)
  //  Referenced by: '<S317>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S317>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S317>/PWM'

  0.5F,

  // Expression: single(deadtime)
  //  Referenced by: '<S319>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S319>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S319>/PWM'

  0.25F,

  // Expression: single(deadtime)
  //  Referenced by: '<S321>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S321>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S321>/PWM'

  0.0F,

  // Expression: single(deadtime)
  //  Referenced by: '<S328>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S328>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S328>/PWM'

  0.75F,

  // Expression: single(deadtime)
  //  Referenced by: '<S330>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S330>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S330>/PWM'

  0.5F,

  // Expression: single(deadtime)
  //  Referenced by: '<S332>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S332>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S332>/PWM'

  0.25F,

  // Expression: single(deadtime)
  //  Referenced by: '<S334>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S334>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S334>/PWM'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S116>/ADC'

  0.027466F,

  // Expression: single(offset)
  //  Referenced by: '<S116>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S132>/ADC'

  0.027466F,

  // Expression: single(offset)
  //  Referenced by: '<S132>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S110>/ADC'

  0.027466F,

  // Expression: single(offset)
  //  Referenced by: '<S110>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S118>/ADC'

  0.027466F,

  // Expression: single(offset)
  //  Referenced by: '<S118>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S112>/ADC'

  0.027466F,

  // Expression: single(offset)
  //  Referenced by: '<S112>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S114>/ADC'

  0.027466F,

  // Expression: single(offset)
  //  Referenced by: '<S114>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S128>/ADC'

  0.00045776F,

  // Expression: single(offset)
  //  Referenced by: '<S128>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S130>/ADC'

  0.00045776F,

  // Expression: single(offset)
  //  Referenced by: '<S130>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S120>/ADC'

  0.00045776F,

  // Expression: single(offset)
  //  Referenced by: '<S120>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S108>/ADC'

  0.00045776F,

  // Expression: single(offset)
  //  Referenced by: '<S108>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S122>/ADC'

  0.00045776F,

  // Expression: single(offset)
  //  Referenced by: '<S122>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S124>/ADC'

  0.00045776F,

  // Expression: single(offset)
  //  Referenced by: '<S124>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S126>/ADC'

  0.012207F,

  // Expression: single(offset)
  //  Referenced by: '<S126>/ADC'

  0.0F,

  // Expression: single(INITIALVAL)
  //  Referenced by: '<S342>/S-Function'

  0.987F,

  // Expression: single(VAL_MIN)
  //  Referenced by: '<S342>/S-Function'

  rtMinusInfF,

  // Expression: single(VAL_MAX)
  //  Referenced by: '<S342>/S-Function'

  rtInfF,

  // Expression: single(0)
  //  Referenced by: '<S342>/S-Function'

  0.0F,

  // Expression: single(0)
  //  Referenced by: '<S342>/S-Function'

  0.0F,

  // Expression: single(INITIALVAL)
  //  Referenced by: '<S344>/S-Function'

  0.0F,

  // Expression: single(VAL_MIN)
  //  Referenced by: '<S344>/S-Function'

  rtMinusInfF,

  // Expression: single(VAL_MAX)
  //  Referenced by: '<S344>/S-Function'

  rtInfF,

  // Expression: single(0)
  //  Referenced by: '<S344>/S-Function'

  0.0F,

  // Expression: single(0)
  //  Referenced by: '<S344>/S-Function'

  0.0F,

  // Expression: single(INITIALVAL)
  //  Referenced by: '<S348>/S-Function'

  0.0F,

  // Expression: single(VAL_MIN)
  //  Referenced by: '<S348>/S-Function'

  rtMinusInfF,

  // Expression: single(VAL_MAX)
  //  Referenced by: '<S348>/S-Function'

  rtInfF,

  // Expression: single(0)
  //  Referenced by: '<S348>/S-Function'

  0.0F,

  // Expression: single(0)
  //  Referenced by: '<S348>/S-Function'

  0.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S149>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S149>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S151>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S151>/S-Function'

  10.0F,

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

  // Expression: single(INITIALVAL)
  //  Referenced by: '<S336>/S-Function'

  0.0F,

  // Expression: single(VAL_MIN)
  //  Referenced by: '<S336>/S-Function'

  rtMinusInfF,

  // Expression: single(VAL_MAX)
  //  Referenced by: '<S336>/S-Function'

  rtInfF,

  // Expression: single(0)
  //  Referenced by: '<S336>/S-Function'

  0.0F,

  // Expression: single(0)
  //  Referenced by: '<S336>/S-Function'

  0.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S161>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S161>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S163>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S163>/S-Function'

  10.0F,

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
  //  Referenced by: '<S175>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S175>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S177>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S177>/S-Function'

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

  // Expression: single(INITIALVAL)
  //  Referenced by: '<S340>/S-Function'

  0.0F,

  // Expression: single(VAL_MIN)
  //  Referenced by: '<S340>/S-Function'

  rtMinusInfF,

  // Expression: single(VAL_MAX)
  //  Referenced by: '<S340>/S-Function'

  rtInfF,

  // Expression: single(0)
  //  Referenced by: '<S340>/S-Function'

  0.0F,

  // Expression: single(0)
  //  Referenced by: '<S340>/S-Function'

  0.0F,

  // Expression: single(INITIALVAL)
  //  Referenced by: '<S338>/S-Function'

  0.002081F,

  // Expression: single(VAL_MIN)
  //  Referenced by: '<S338>/S-Function'

  rtMinusInfF,

  // Expression: single(VAL_MAX)
  //  Referenced by: '<S338>/S-Function'

  rtInfF,

  // Expression: single(0)
  //  Referenced by: '<S338>/S-Function'

  0.0F,

  // Expression: single(0)
  //  Referenced by: '<S338>/S-Function'

  0.0F,

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
  //  Referenced by: '<S201>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S201>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S203>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S203>/S-Function'

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

  // Expression: single(private_nb_oversamples)
  //  Referenced by: '<S135>/S-Function'

  0.0F,

  // Expression: single(interrupt_phase)
  //  Referenced by: '<S135>/S-Function'

  0.5F,

  // Expression: single(frequency)
  //  Referenced by: '<S137>/CLK1'

  6000.0F,

  // Expression: single(INITIALVAL)
  //  Referenced by: '<S346>/S-Function'

  31.415926F,

  // Expression: single(VAL_MIN)
  //  Referenced by: '<S346>/S-Function'

  rtMinusInfF,

  // Expression: single(VAL_MAX)
  //  Referenced by: '<S346>/S-Function'

  rtInfF,

  // Expression: single(0)
  //  Referenced by: '<S346>/S-Function'

  0.0F,

  // Expression: single(0)
  //  Referenced by: '<S346>/S-Function'

  0.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S199>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S199>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S173>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S173>/S-Function'

  10.0F,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S342>/S-Function'

  1000000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S344>/S-Function'

  1000000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S348>/S-Function'

  1000000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S149>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S149>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S151>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S151>/S-Function'

  2000U,

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
  //  Referenced by: '<S336>/S-Function'

  1000000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S161>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S161>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S163>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S163>/S-Function'

  2000U,

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
  //  Referenced by: '<S175>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S175>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S177>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S177>/S-Function'

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
  //  Referenced by: '<S340>/S-Function'

  1000000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S338>/S-Function'

  1000000U,

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
  //  Referenced by: '<S201>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S201>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S203>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S203>/S-Function'

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
  //  Referenced by: '<S346>/S-Function'

  1000000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S199>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S199>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S173>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S173>/S-Function'

  2000U,

  // Expression: int16(lane)
  //  Referenced by: '<S147>/PWM'

  8,

  // Expression: int16(carrier)
  //  Referenced by: '<S147>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S147>/PWM'

  0,

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
  //  Referenced by: '<S267>/PWM'

  0,

  // Expression: int16(carrier)
  //  Referenced by: '<S267>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S267>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S267>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S267>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S267>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S269>/PWM'

  1,

  // Expression: int16(carrier)
  //  Referenced by: '<S269>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S269>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S269>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S269>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S269>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S271>/PWM'

  2,

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

  3,

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
  //  Referenced by: '<S279>/PWM'

  8,

  // Expression: int16(carrier)
  //  Referenced by: '<S279>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S279>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S279>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S279>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S279>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S281>/PWM'

  9,

  // Expression: int16(carrier)
  //  Referenced by: '<S281>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S281>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S281>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S281>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S281>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S283>/PWM'

  10,

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

  11,

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
  //  Referenced by: '<S291>/PWM'

  4,

  // Expression: int16(carrier)
  //  Referenced by: '<S291>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S291>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S291>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S291>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S291>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S293>/PWM'

  5,

  // Expression: int16(carrier)
  //  Referenced by: '<S293>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S293>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S293>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S293>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S293>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S295>/PWM'

  6,

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

  7,

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
  //  Referenced by: '<S303>/PWM'

  4,

  // Expression: int16(carrier)
  //  Referenced by: '<S303>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S303>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S303>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S303>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S303>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S305>/PWM'

  5,

  // Expression: int16(carrier)
  //  Referenced by: '<S305>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S305>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S305>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S305>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S305>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S307>/PWM'

  6,

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

  7,

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
  //  Referenced by: '<S315>/PWM'

  12,

  // Expression: int16(carrier)
  //  Referenced by: '<S315>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S315>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S315>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S315>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S315>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S317>/PWM'

  13,

  // Expression: int16(carrier)
  //  Referenced by: '<S317>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S317>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S317>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S317>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S317>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S319>/PWM'

  14,

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

  15,

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
  //  Referenced by: '<S328>/PWM'

  0,

  // Expression: int16(carrier)
  //  Referenced by: '<S328>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S328>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S328>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S328>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S328>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S330>/PWM'

  1,

  // Expression: int16(carrier)
  //  Referenced by: '<S330>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S330>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S330>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S330>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S330>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S332>/PWM'

  2,

  // Expression: int16(carrier)
  //  Referenced by: '<S332>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S332>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S332>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S332>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S332>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S334>/PWM'

  3,

  // Expression: int16(carrier)
  //  Referenced by: '<S334>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S334>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S334>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S334>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S334>/PWM'

  0,

  // Expression: int16(channel)
  //  Referenced by: '<S116>/ADC'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S116>/ADC'

  2,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S116>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S116>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S132>/ADC'

  2,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S132>/ADC'

  2,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S132>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S132>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S110>/ADC'

  4,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S110>/ADC'

  2,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S110>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S110>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S118>/ADC'

  1,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S118>/ADC'

  2,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S118>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S118>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S112>/ADC'

  3,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S112>/ADC'

  2,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S112>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S112>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S114>/ADC'

  5,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S114>/ADC'

  2,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S114>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S114>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S128>/ADC'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S128>/ADC'

  0,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S128>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S128>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S130>/ADC'

  1,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S130>/ADC'

  0,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S130>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S130>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S120>/ADC'

  2,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S120>/ADC'

  0,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S120>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S120>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S108>/ADC'

  3,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S108>/ADC'

  0,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S108>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S108>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S122>/ADC'

  4,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S122>/ADC'

  0,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S122>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S122>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S124>/ADC'

  5,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S124>/ADC'

  0,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S124>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S124>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S126>/ADC'

  7,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S126>/ADC'

  0,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S126>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S126>/ADC'

  1,

  // Expression: int16(DATA_TYPE)
  //  Referenced by: '<S342>/S-Function'

  1,

  // Expression: int16(DATA_TYPE)
  //  Referenced by: '<S344>/S-Function'

  2,

  // Expression: int16(DATA_TYPE)
  //  Referenced by: '<S348>/S-Function'

  2,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S149>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S149>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S151>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S151>/S-Function'

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

  // Expression: int16(DATA_TYPE)
  //  Referenced by: '<S336>/S-Function'

  1,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S161>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S161>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S163>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S163>/S-Function'

  0,

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
  //  Referenced by: '<S175>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S175>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S177>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S177>/S-Function'

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

  // Expression: int16(DATA_TYPE)
  //  Referenced by: '<S340>/S-Function'

  1,

  // Expression: int16(DATA_TYPE)
  //  Referenced by: '<S338>/S-Function'

  1,

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
  //  Referenced by: '<S201>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S201>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S203>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S203>/S-Function'

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

  // Computed Parameter: clk_id_Value
  //  Referenced by: '<S137>/clk_id'

  0,

  // Expression: int16(id)
  //  Referenced by: '<S137>/CLK1'

  0,

  // Expression: int16(DATA_TYPE)
  //  Referenced by: '<S346>/S-Function'

  1,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S199>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S199>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S173>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S173>/S-Function'

  0,

  // Computed Parameter: SFunction_P1
  //  Referenced by: '<S342>/S-Function'

  { 102U, 108U, 117U, 120U, 95U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S342>/S-Function'

  1U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S342>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S342>/S-Function'

  2U,

  // Expression: uint16(ETH_PORT)
  //  Referenced by: '<S342>/S-Function'

  2000U,

  // Computed Parameter: SFunction_P1_k
  //  Referenced by: '<S344>/S-Function'

  { 102U, 108U, 117U, 120U, 95U, 99U, 111U, 110U, 116U, 114U, 111U, 108U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S344>/S-Function'

  1U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S344>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S344>/S-Function'

  2U,

  // Expression: uint16(ETH_PORT)
  //  Referenced by: '<S344>/S-Function'

  2000U,

  // Computed Parameter: SFunction_P1_i
  //  Referenced by: '<S348>/S-Function'

  { 115U, 112U, 101U, 101U, 100U, 95U, 99U, 111U, 110U, 116U, 114U, 111U, 108U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S348>/S-Function'

  1U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S348>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S348>/S-Function'

  2U,

  // Expression: uint16(ETH_PORT)
  //  Referenced by: '<S348>/S-Function'

  2000U,

  // Computed Parameter: SFunction_P1_b
  //  Referenced by: '<S149>/S-Function'

  { 118U, 48U, 95U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S149>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S149>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S149>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_pe
  //  Referenced by: '<S149>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_g
  //  Referenced by: '<S151>/S-Function'

  { 105U, 99U, 114U, 95U, 122U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S151>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S151>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S151>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_d
  //  Referenced by: '<S151>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_k4
  //  Referenced by: '<S153>/S-Function'

  { 105U, 97U, 115U, 95U, 122U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S153>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S153>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S153>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_nb
  //  Referenced by: '<S153>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_g0
  //  Referenced by: '<S155>/S-Function'

  { 105U, 98U, 115U, 95U, 122U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S155>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S155>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S155>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_ps
  //  Referenced by: '<S155>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_c
  //  Referenced by: '<S157>/S-Function'

  { 105U, 99U, 115U, 95U, 122U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S157>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S157>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S157>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_h
  //  Referenced by: '<S157>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_ie
  //  Referenced by: '<S159>/S-Function'

  { 105U, 109U, 100U, 95U, 114U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S159>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S159>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S159>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_j
  //  Referenced by: '<S159>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_p
  //  Referenced by: '<S336>/S-Function'

  { 105U, 110U, 112U, 117U, 116U, 95U, 99U, 111U, 110U, 116U, 114U, 111U, 108U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S336>/S-Function'

  1U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S336>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S336>/S-Function'

  2U,

  // Expression: uint16(ETH_PORT)
  //  Referenced by: '<S336>/S-Function'

  2000U,

  // Computed Parameter: SFunction_P1_n
  //  Referenced by: '<S161>/S-Function'

  { 105U, 80U, 95U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S161>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S161>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S161>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_i
  //  Referenced by: '<S161>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_h
  //  Referenced by: '<S163>/S-Function'

  { 105U, 109U, 113U, 95U, 114U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S163>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S163>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S163>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_c
  //  Referenced by: '<S163>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_d
  //  Referenced by: '<S165>/S-Function'

  { 105U, 109U, 100U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S165>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S165>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S165>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_cg
  //  Referenced by: '<S165>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_g5
  //  Referenced by: '<S167>/S-Function'

  { 105U, 109U, 113U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S167>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S167>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S167>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_b
  //  Referenced by: '<S167>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_j
  //  Referenced by: '<S169>/S-Function'

  { 102U, 108U, 117U, 120U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S169>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S169>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S169>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_ho
  //  Referenced by: '<S169>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_e
  //  Referenced by: '<S171>/S-Function'

  { 105U, 97U, 114U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S171>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S171>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S171>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_f
  //  Referenced by: '<S171>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_f
  //  Referenced by: '<S175>/S-Function'

  { 118U, 100U, 95U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S175>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S175>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S175>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_bb
  //  Referenced by: '<S175>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_kv
  //  Referenced by: '<S177>/S-Function'

  { 118U, 113U, 95U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S177>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S177>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S177>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_ir
  //  Referenced by: '<S177>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_dj
  //  Referenced by: '<S179>/S-Function'

  { 118U, 121U, 95U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S179>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S179>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S179>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_ko
  //  Referenced by: '<S179>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_pn
  //  Referenced by: '<S181>/S-Function'

  { 105U, 103U, 100U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S181>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S181>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S181>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_l
  //  Referenced by: '<S181>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_es
  //  Referenced by: '<S183>/S-Function'

  { 112U, 95U, 109U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S183>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S183>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S183>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_hoz
  //  Referenced by: '<S183>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_pg
  //  Referenced by: '<S185>/S-Function'

  { 105U, 122U, 107U, 112U, 105U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S185>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S185>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S185>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_g
  //  Referenced by: '<S185>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_gv
  //  Referenced by: '<S187>/S-Function'

  { 105U, 115U, 113U, 114U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S187>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S187>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S187>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_n0
  //  Referenced by: '<S187>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_df
  //  Referenced by: '<S189>/S-Function'

  { 105U, 115U, 100U, 114U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S189>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S189>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S189>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_nt
  //  Referenced by: '<S189>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_o
  //  Referenced by: '<S340>/S-Function'

  { 101U, 110U, 97U, 98U, 108U, 101U, 95U, 99U, 99U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S340>/S-Function'

  1U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S340>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S340>/S-Function'

  2U,

  // Expression: uint16(ETH_PORT)
  //  Referenced by: '<S340>/S-Function'

  2000U,

  // Computed Parameter: SFunction_P1_nt
  //  Referenced by: '<S338>/S-Function'

  { 105U, 101U, 95U, 108U, 97U, 109U, 98U, 100U, 97U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S338>/S-Function'

  1U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S338>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S338>/S-Function'

  2U,

  // Expression: uint16(ETH_PORT)
  //  Referenced by: '<S338>/S-Function'

  2000U,

  // Computed Parameter: SFunction_P1_bw
  //  Referenced by: '<S191>/S-Function'

  { 118U, 114U, 95U, 97U, 114U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S191>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S191>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S191>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_ba
  //  Referenced by: '<S191>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_cf
  //  Referenced by: '<S193>/S-Function'

  { 118U, 109U, 97U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S193>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S193>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S193>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_fq
  //  Referenced by: '<S193>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_nw
  //  Referenced by: '<S195>/S-Function'

  { 118U, 109U, 98U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S195>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S195>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S195>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_pr
  //  Referenced by: '<S195>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_m
  //  Referenced by: '<S197>/S-Function'

  { 118U, 109U, 99U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S197>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S197>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S197>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_prh
  //  Referenced by: '<S197>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_a
  //  Referenced by: '<S201>/S-Function'

  { 118U, 114U, 95U, 98U, 114U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S201>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S201>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S201>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_d5
  //  Referenced by: '<S201>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_mi
  //  Referenced by: '<S203>/S-Function'

  { 118U, 114U, 95U, 99U, 114U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S203>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S203>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S203>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_gx
  //  Referenced by: '<S203>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_pm
  //  Referenced by: '<S205>/S-Function'

  { 118U, 114U, 95U, 97U, 115U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S205>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S205>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S205>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_kz
  //  Referenced by: '<S205>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_cff
  //  Referenced by: '<S207>/S-Function'

  { 116U, 104U, 101U, 116U, 97U, 95U, 109U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S207>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S207>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S207>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_gz
  //  Referenced by: '<S207>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_k3
  //  Referenced by: '<S209>/S-Function'

  { 119U, 115U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S209>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S209>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S209>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_e
  //  Referenced by: '<S209>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_kn
  //  Referenced by: '<S211>/S-Function'

  { 118U, 114U, 95U, 98U, 115U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S211>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S211>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S211>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_cf
  //  Referenced by: '<S211>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_l
  //  Referenced by: '<S213>/S-Function'

  { 105U, 115U, 113U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S213>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S213>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S213>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_pn
  //  Referenced by: '<S213>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_ez
  //  Referenced by: '<S215>/S-Function'

  { 105U, 115U, 100U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S215>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S215>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S215>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_a
  //  Referenced by: '<S215>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_bk
  //  Referenced by: '<S217>/S-Function'

  { 105U, 109U, 97U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S217>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S217>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S217>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_lm
  //  Referenced by: '<S217>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_hg
  //  Referenced by: '<S219>/S-Function'

  { 105U, 109U, 98U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S219>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S219>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S219>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_m
  //  Referenced by: '<S219>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_e5
  //  Referenced by: '<S221>/S-Function'

  { 105U, 109U, 99U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S221>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S221>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S221>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_o
  //  Referenced by: '<S221>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_po
  //  Referenced by: '<S223>/S-Function'

  { 105U, 97U, 48U, 95U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S223>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S223>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S223>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_bs
  //  Referenced by: '<S223>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_p1
  //  Referenced by: '<S225>/S-Function'

  { 105U, 98U, 48U, 95U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S225>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S225>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S225>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_gp
  //  Referenced by: '<S225>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_eb
  //  Referenced by: '<S227>/S-Function'

  { 118U, 114U, 95U, 99U, 115U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S227>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S227>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S227>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_fc
  //  Referenced by: '<S227>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_br
  //  Referenced by: '<S229>/S-Function'

  { 105U, 109U, 100U, 95U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S229>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S229>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S229>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_gw
  //  Referenced by: '<S229>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_as
  //  Referenced by: '<S231>/S-Function'

  { 86U, 99U, 95U, 97U, 114U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S231>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S231>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S231>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_jr
  //  Referenced by: '<S231>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_ga
  //  Referenced by: '<S233>/S-Function'

  { 105U, 100U, 99U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S233>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S233>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S233>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_eu
  //  Referenced by: '<S233>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_m4
  //  Referenced by: '<S235>/S-Function'

  { 118U, 99U, 107U, 112U, 105U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S235>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S235>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S235>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_ex
  //  Referenced by: '<S235>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_pmg
  //  Referenced by: '<S237>/S-Function'

  { 86U, 99U, 95U, 98U, 114U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S237>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S237>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S237>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_hf
  //  Referenced by: '<S237>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_he
  //  Referenced by: '<S239>/S-Function'

  { 86U, 99U, 95U, 99U, 114U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S239>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S239>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S239>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_lf
  //  Referenced by: '<S239>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_l3
  //  Referenced by: '<S241>/S-Function'

  { 86U, 99U, 95U, 97U, 115U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S241>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S241>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S241>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_kh
  //  Referenced by: '<S241>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_fn
  //  Referenced by: '<S243>/S-Function'

  { 105U, 98U, 114U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S243>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S243>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S243>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_hfu
  //  Referenced by: '<S243>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_cq
  //  Referenced by: '<S245>/S-Function'

  { 86U, 99U, 95U, 98U, 115U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S245>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S245>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S245>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_mf
  //  Referenced by: '<S245>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_cv
  //  Referenced by: '<S247>/S-Function'

  { 86U, 99U, 95U, 99U, 115U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S247>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S247>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S247>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_iz
  //  Referenced by: '<S247>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_hj
  //  Referenced by: '<S249>/S-Function'

  119U,

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S249>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S249>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S249>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_e1
  //  Referenced by: '<S249>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_mo
  //  Referenced by: '<S251>/S-Function'

  { 105U, 99U, 114U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S251>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S251>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S251>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_pg
  //  Referenced by: '<S251>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_iec
  //  Referenced by: '<S253>/S-Function'

  { 105U, 97U, 115U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S253>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S253>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S253>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_hx
  //  Referenced by: '<S253>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_bd
  //  Referenced by: '<S255>/S-Function'

  { 105U, 98U, 115U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S255>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S255>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S255>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_lb
  //  Referenced by: '<S255>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_dz
  //  Referenced by: '<S257>/S-Function'

  { 105U, 99U, 115U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S257>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S257>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S257>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_km
  //  Referenced by: '<S257>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_m3
  //  Referenced by: '<S259>/S-Function'

  { 105U, 97U, 114U, 95U, 122U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S259>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S259>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S259>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_i0
  //  Referenced by: '<S259>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_gm
  //  Referenced by: '<S261>/S-Function'

  { 105U, 98U, 114U, 95U, 122U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S261>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S261>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S261>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_iu
  //  Referenced by: '<S261>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Expression: uint16(interrupt_pstsclr)
  //  Referenced by: '<S135>/S-Function'

  0U,

  // Expression: uint16(private_adc_delay_ns)
  //  Referenced by: '<S135>/S-Function'

  2000U,

  // Expression: uint16(highest_device_id)
  //  Referenced by: '<S135>/S-Function'

  2U,

  // Computed Parameter: SFunction_P1_gy
  //  Referenced by: '<S346>/S-Function'

  { 119U, 95U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S346>/S-Function'

  1U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S346>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S346>/S-Function'

  2U,

  // Expression: uint16(ETH_PORT)
  //  Referenced by: '<S346>/S-Function'

  2000U,

  // Computed Parameter: SFunction_P1_i0
  //  Referenced by: '<S199>/S-Function'

  { 118U, 100U, 99U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S199>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S199>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S199>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_at
  //  Referenced by: '<S199>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_ep
  //  Referenced by: '<S173>/S-Function'

  { 105U, 109U, 113U, 95U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S173>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S173>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S173>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_izn
  //  Referenced by: '<S173>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

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
  //  Referenced by: '<S267>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S267>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S267>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S269>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S269>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S269>/PWM'

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
  //  Referenced by: '<S279>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S279>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S279>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S281>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S281>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S281>/PWM'

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
  //  Referenced by: '<S291>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S291>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S291>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S293>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S293>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S293>/PWM'

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
  //  Referenced by: '<S303>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S303>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S303>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S305>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S305>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S305>/PWM'

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
  //  Referenced by: '<S315>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S315>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S315>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S317>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S317>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S317>/PWM'

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
  //  Referenced by: '<S328>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S328>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S328>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S330>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S330>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S330>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S332>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S332>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S332>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S334>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S334>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S334>/PWM'

  true,

  // Expression: boolean(usehist)
  //  Referenced by: '<S116>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S116>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S132>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S132>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S110>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S110>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S118>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S118>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S112>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S112>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S114>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S114>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S128>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S128>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S130>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S130>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S120>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S120>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S108>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S108>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S122>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S122>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S124>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S124>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S126>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S126>/ADC'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S342>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S342>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S342>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S342>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S344>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S344>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S344>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S344>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S348>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S348>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S348>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S348>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S149>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S149>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S149>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S149>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S151>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S151>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S151>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S151>/S-Function'

  false,

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
  //  Referenced by: '<S336>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S336>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S336>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S336>/S-Function'

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
  //  Referenced by: '<S340>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S340>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S340>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S340>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S338>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S338>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S338>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S338>/S-Function'

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

  // Expression: boolean(var_freq)
  //  Referenced by: '<S137>/CLK1'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S346>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S346>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S346>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S346>/S-Function'

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

  false
};

//
// End of automatically generated code
// Copyright imperix ltd. Switzerland 2021
// [EOF]
//
