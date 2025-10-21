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
// Model version                  : 19.10
// Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
// C/C++ source code generated on : Tue Oct 21 15:31:07 2025
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

  // Expression: 0
  //  Referenced by: '<S29>/Constant'

  0.0,

  // Expression: [ 1   0   1; -1/2  sqrt(3)/2   1; -1/2  -sqrt(3)/2  1 ]
  //  Referenced by: '<S145>/Gain3'

  { 1.0, -0.5, -0.5, 0.0, 0.8660254037844386, -0.8660254037844386, 1.0, 1.0, 1.0
  },

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

  // Expression: -1
  //  Referenced by: '<S1>/Gain31'

  -1.0,

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

  // Expression: 0.5
  //  Referenced by: '<S1>/Gain84'

  0.5,

  // Expression: 0
  //  Referenced by: '<S29>/Constant1'

  0.0,

  // Expression: [ 1   0   1; -1/2  sqrt(3)/2   1; -1/2  -sqrt(3)/2  1 ]
  //  Referenced by: '<S146>/Gain3'

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

  // Expression: 3
  //  Referenced by: '<S1>/Gain54'

  3.0,

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

  // Expression: 1/4
  //  Referenced by: '<S1>/Gain9'

  0.25,

  // Expression: PHASE
  //  Referenced by: '<S32>/phase'

  0.0,

  // Expression: PHASE
  //  Referenced by: '<S265>/phase'

  0.75,

  // Expression: PHASE
  //  Referenced by: '<S266>/phase'

  0.5,

  // Expression: PHASE
  //  Referenced by: '<S267>/phase'

  0.25,

  // Expression: PHASE
  //  Referenced by: '<S268>/phase'

  0.0,

  // Expression: PHASE
  //  Referenced by: '<S277>/phase'

  0.75,

  // Expression: PHASE
  //  Referenced by: '<S278>/phase'

  0.5,

  // Expression: PHASE
  //  Referenced by: '<S279>/phase'

  0.25,

  // Expression: PHASE
  //  Referenced by: '<S280>/phase'

  0.0,

  // Expression: -1
  //  Referenced by: '<S93>/Gain1'

  -1.0,

  // Expression: PHASE
  //  Referenced by: '<S289>/phase'

  0.75,

  // Expression: PHASE
  //  Referenced by: '<S290>/phase'

  0.5,

  // Expression: PHASE
  //  Referenced by: '<S291>/phase'

  0.25,

  // Expression: PHASE
  //  Referenced by: '<S292>/phase'

  0.0,

  // Expression: -1
  //  Referenced by: '<S94>/Gain3'

  -1.0,

  // Expression: PHASE
  //  Referenced by: '<S301>/phase'

  0.75,

  // Expression: PHASE
  //  Referenced by: '<S302>/phase'

  0.5,

  // Expression: PHASE
  //  Referenced by: '<S303>/phase'

  0.25,

  // Expression: PHASE
  //  Referenced by: '<S304>/phase'

  0.0,

  // Expression: -1
  //  Referenced by: '<S95>/Gain3'

  -1.0,

  // Expression: PHASE
  //  Referenced by: '<S313>/phase'

  0.75,

  // Expression: PHASE
  //  Referenced by: '<S314>/phase'

  0.5,

  // Expression: PHASE
  //  Referenced by: '<S315>/phase'

  0.25,

  // Expression: PHASE
  //  Referenced by: '<S316>/phase'

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
  //  Referenced by: '<S150>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S150>/PWM'

  1.0F,

  // Expression: single(phase)
  //  Referenced by: '<S150>/PWM'

  0.0F,

  // Expression: single(deadtime)
  //  Referenced by: '<S270>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S270>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S270>/PWM'

  0.75F,

  // Expression: single(deadtime)
  //  Referenced by: '<S272>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S272>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S272>/PWM'

  0.5F,

  // Expression: single(deadtime)
  //  Referenced by: '<S274>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S274>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S274>/PWM'

  0.25F,

  // Expression: single(deadtime)
  //  Referenced by: '<S276>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S276>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S276>/PWM'

  0.0F,

  // Expression: single(deadtime)
  //  Referenced by: '<S282>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S282>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S282>/PWM'

  0.75F,

  // Expression: single(deadtime)
  //  Referenced by: '<S284>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S284>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S284>/PWM'

  0.5F,

  // Expression: single(deadtime)
  //  Referenced by: '<S286>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S286>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S286>/PWM'

  0.25F,

  // Expression: single(deadtime)
  //  Referenced by: '<S288>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S288>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S288>/PWM'

  0.0F,

  // Expression: single(deadtime)
  //  Referenced by: '<S294>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S294>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S294>/PWM'

  0.75F,

  // Expression: single(deadtime)
  //  Referenced by: '<S296>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S296>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S296>/PWM'

  0.5F,

  // Expression: single(deadtime)
  //  Referenced by: '<S298>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S298>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S298>/PWM'

  0.25F,

  // Expression: single(deadtime)
  //  Referenced by: '<S300>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S300>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S300>/PWM'

  0.0F,

  // Expression: single(deadtime)
  //  Referenced by: '<S306>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S306>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S306>/PWM'

  0.75F,

  // Expression: single(deadtime)
  //  Referenced by: '<S308>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S308>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S308>/PWM'

  0.5F,

  // Expression: single(deadtime)
  //  Referenced by: '<S310>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S310>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S310>/PWM'

  0.25F,

  // Expression: single(deadtime)
  //  Referenced by: '<S312>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S312>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S312>/PWM'

  0.0F,

  // Expression: single(deadtime)
  //  Referenced by: '<S318>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S318>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S318>/PWM'

  0.75F,

  // Expression: single(deadtime)
  //  Referenced by: '<S320>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S320>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S320>/PWM'

  0.5F,

  // Expression: single(deadtime)
  //  Referenced by: '<S322>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S322>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S322>/PWM'

  0.25F,

  // Expression: single(deadtime)
  //  Referenced by: '<S324>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S324>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S324>/PWM'

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
  //  Referenced by: '<S152>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S152>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S154>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S154>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S156>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S156>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S158>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S158>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S160>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S160>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S162>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S162>/S-Function'

  10.0F,

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
  //  Referenced by: '<S164>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S164>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S166>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S166>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S168>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S168>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S170>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S170>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S172>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S172>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S174>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S174>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S178>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S178>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S180>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S180>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S182>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S182>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S184>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S184>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S186>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S186>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S188>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S188>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S190>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S190>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S192>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S192>/S-Function'

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
  //  Referenced by: '<S194>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S194>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S196>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S196>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S198>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S198>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S200>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S200>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S204>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S204>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S206>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S206>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S208>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S208>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S210>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S210>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S212>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S212>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S214>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S214>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S216>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S216>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S218>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S218>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S220>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S220>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S222>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S222>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S224>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S224>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S226>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S226>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S228>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S228>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S230>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S230>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S232>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S232>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S234>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S234>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S236>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S236>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S238>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S238>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S240>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S240>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S242>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S242>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S244>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S244>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S246>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S246>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S248>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S248>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S250>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S250>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S252>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S252>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S254>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S254>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S256>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S256>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S258>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S258>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S260>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S260>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S262>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S262>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S264>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S264>/S-Function'

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
  //  Referenced by: '<S202>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S202>/S-Function'

  10.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S176>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S176>/S-Function'

  10.0F,

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
  //  Referenced by: '<S152>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S152>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S154>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S154>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S156>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S156>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S158>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S158>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S160>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S160>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S162>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S162>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S339>/S-Function'

  1000000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S164>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S164>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S166>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S166>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S168>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S168>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S170>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S170>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S172>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S172>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S174>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S174>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S178>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S178>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S180>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S180>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S182>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S182>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S184>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S184>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S186>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S186>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S188>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S188>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S190>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S190>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S192>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S192>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S343>/S-Function'

  1000000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S341>/S-Function'

  1000000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S194>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S194>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S196>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S196>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S198>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S198>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S200>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S200>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S204>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S204>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S206>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S206>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S208>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S208>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S210>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S210>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S212>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S212>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S214>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S214>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S216>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S216>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S218>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S218>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S220>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S220>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S222>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S222>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S224>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S224>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S226>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S226>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S228>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S228>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S230>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S230>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S232>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S232>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S234>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S234>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S236>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S236>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S238>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S238>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S240>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S240>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S242>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S242>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S244>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S244>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S246>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S246>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S248>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S248>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S250>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S250>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S252>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S252>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S254>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S254>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S256>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S256>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S258>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S258>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S260>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S260>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S262>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S262>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S264>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S264>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S349>/S-Function'

  1000000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S202>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S202>/S-Function'

  2000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S176>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S176>/S-Function'

  2000U,

  // Expression: int16(lane)
  //  Referenced by: '<S150>/PWM'

  8,

  // Expression: int16(carrier)
  //  Referenced by: '<S150>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S150>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S150>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S150>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S150>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S270>/PWM'

  0,

  // Expression: int16(carrier)
  //  Referenced by: '<S270>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S270>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S270>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S270>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S270>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S272>/PWM'

  1,

  // Expression: int16(carrier)
  //  Referenced by: '<S272>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S272>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S272>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S272>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S272>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S274>/PWM'

  2,

  // Expression: int16(carrier)
  //  Referenced by: '<S274>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S274>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S274>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S274>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S274>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S276>/PWM'

  3,

  // Expression: int16(carrier)
  //  Referenced by: '<S276>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S276>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S276>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S276>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S276>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S282>/PWM'

  8,

  // Expression: int16(carrier)
  //  Referenced by: '<S282>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S282>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S282>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S282>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S282>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S284>/PWM'

  9,

  // Expression: int16(carrier)
  //  Referenced by: '<S284>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S284>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S284>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S284>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S284>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S286>/PWM'

  10,

  // Expression: int16(carrier)
  //  Referenced by: '<S286>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S286>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S286>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S286>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S286>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S288>/PWM'

  11,

  // Expression: int16(carrier)
  //  Referenced by: '<S288>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S288>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S288>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S288>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S288>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S294>/PWM'

  4,

  // Expression: int16(carrier)
  //  Referenced by: '<S294>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S294>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S294>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S294>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S294>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S296>/PWM'

  5,

  // Expression: int16(carrier)
  //  Referenced by: '<S296>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S296>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S296>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S296>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S296>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S298>/PWM'

  6,

  // Expression: int16(carrier)
  //  Referenced by: '<S298>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S298>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S298>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S298>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S298>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S300>/PWM'

  7,

  // Expression: int16(carrier)
  //  Referenced by: '<S300>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S300>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S300>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S300>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S300>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S306>/PWM'

  4,

  // Expression: int16(carrier)
  //  Referenced by: '<S306>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S306>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S306>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S306>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S306>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S308>/PWM'

  5,

  // Expression: int16(carrier)
  //  Referenced by: '<S308>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S308>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S308>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S308>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S308>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S310>/PWM'

  6,

  // Expression: int16(carrier)
  //  Referenced by: '<S310>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S310>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S310>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S310>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S310>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S312>/PWM'

  7,

  // Expression: int16(carrier)
  //  Referenced by: '<S312>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S312>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S312>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S312>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S312>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S318>/PWM'

  12,

  // Expression: int16(carrier)
  //  Referenced by: '<S318>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S318>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S318>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S318>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S318>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S320>/PWM'

  13,

  // Expression: int16(carrier)
  //  Referenced by: '<S320>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S320>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S320>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S320>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S320>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S322>/PWM'

  14,

  // Expression: int16(carrier)
  //  Referenced by: '<S322>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S322>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S322>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S322>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S322>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S324>/PWM'

  15,

  // Expression: int16(carrier)
  //  Referenced by: '<S324>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S324>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S324>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S324>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S324>/PWM'

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
  //  Referenced by: '<S152>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S152>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S154>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S154>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S156>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S156>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S158>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S158>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S160>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S160>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S162>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S162>/S-Function'

  0,

  // Expression: int16(DATA_TYPE)
  //  Referenced by: '<S339>/S-Function'

  1,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S164>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S164>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S166>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S166>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S168>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S168>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S170>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S170>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S172>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S172>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S174>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S174>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S178>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S178>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S180>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S180>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S182>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S182>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S184>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S184>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S186>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S186>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S188>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S188>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S190>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S190>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S192>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S192>/S-Function'

  0,

  // Expression: int16(DATA_TYPE)
  //  Referenced by: '<S343>/S-Function'

  1,

  // Expression: int16(DATA_TYPE)
  //  Referenced by: '<S341>/S-Function'

  1,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S194>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S194>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S196>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S196>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S198>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S198>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S200>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S200>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S204>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S204>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S206>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S206>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S208>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S208>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S210>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S210>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S212>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S212>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S214>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S214>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S216>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S216>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S218>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S218>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S220>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S220>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S222>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S222>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S224>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S224>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S226>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S226>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S228>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S228>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S230>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S230>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S232>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S232>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S234>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S234>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S236>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S236>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S238>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S238>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S240>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S240>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S242>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S242>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S244>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S244>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S246>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S246>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S248>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S248>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S250>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S250>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S252>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S252>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S254>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S254>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S256>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S256>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S258>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S258>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S260>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S260>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S262>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S262>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S264>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S264>/S-Function'

  0,

  // Computed Parameter: clk_id_Value
  //  Referenced by: '<S140>/clk_id'

  0,

  // Expression: int16(id)
  //  Referenced by: '<S140>/CLK1'

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
  //  Referenced by: '<S202>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S202>/S-Function'

  0,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S176>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S176>/S-Function'

  0,

  // Computed Parameter: SFunction_P1
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

  // Computed Parameter: SFunction_P1_k
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

  // Computed Parameter: SFunction_P1_b
  //  Referenced by: '<S152>/S-Function'

  { 118U, 48U, 95U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S152>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S152>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S152>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_pe
  //  Referenced by: '<S152>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_g
  //  Referenced by: '<S154>/S-Function'

  { 105U, 99U, 114U, 95U, 122U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S154>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S154>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S154>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_d
  //  Referenced by: '<S154>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_k4
  //  Referenced by: '<S156>/S-Function'

  { 105U, 97U, 115U, 95U, 122U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S156>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S156>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S156>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_nb
  //  Referenced by: '<S156>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_g0
  //  Referenced by: '<S158>/S-Function'

  { 105U, 98U, 115U, 95U, 122U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S158>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S158>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S158>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_ps
  //  Referenced by: '<S158>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_c
  //  Referenced by: '<S160>/S-Function'

  { 105U, 99U, 115U, 95U, 122U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S160>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S160>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S160>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_h
  //  Referenced by: '<S160>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_ie
  //  Referenced by: '<S162>/S-Function'

  { 105U, 109U, 100U, 95U, 114U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S162>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S162>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S162>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_j
  //  Referenced by: '<S162>/S-Function'

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
  //  Referenced by: '<S164>/S-Function'

  { 105U, 80U, 95U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S164>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S164>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S164>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_i
  //  Referenced by: '<S164>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_h
  //  Referenced by: '<S166>/S-Function'

  { 105U, 109U, 113U, 95U, 114U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S166>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S166>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S166>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_c
  //  Referenced by: '<S166>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_d
  //  Referenced by: '<S168>/S-Function'

  { 105U, 109U, 100U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S168>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S168>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S168>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_cg
  //  Referenced by: '<S168>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_g5
  //  Referenced by: '<S170>/S-Function'

  { 105U, 109U, 113U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S170>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S170>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S170>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_b
  //  Referenced by: '<S170>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_j
  //  Referenced by: '<S172>/S-Function'

  { 102U, 108U, 117U, 120U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S172>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S172>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S172>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_ho
  //  Referenced by: '<S172>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_e
  //  Referenced by: '<S174>/S-Function'

  { 105U, 97U, 114U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S174>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S174>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S174>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_f
  //  Referenced by: '<S174>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_f
  //  Referenced by: '<S178>/S-Function'

  { 118U, 100U, 95U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S178>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S178>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S178>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_bb
  //  Referenced by: '<S178>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_kv
  //  Referenced by: '<S180>/S-Function'

  { 118U, 113U, 95U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S180>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S180>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S180>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_ir
  //  Referenced by: '<S180>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_dj
  //  Referenced by: '<S182>/S-Function'

  { 118U, 121U, 95U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S182>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S182>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S182>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_ko
  //  Referenced by: '<S182>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_pn
  //  Referenced by: '<S184>/S-Function'

  { 105U, 103U, 100U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S184>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S184>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S184>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_l
  //  Referenced by: '<S184>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_es
  //  Referenced by: '<S186>/S-Function'

  { 112U, 95U, 109U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S186>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S186>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S186>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_hoz
  //  Referenced by: '<S186>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_pg
  //  Referenced by: '<S188>/S-Function'

  { 105U, 122U, 107U, 112U, 105U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S188>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S188>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S188>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_g
  //  Referenced by: '<S188>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_gv
  //  Referenced by: '<S190>/S-Function'

  { 105U, 115U, 113U, 114U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S190>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S190>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S190>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_n0
  //  Referenced by: '<S190>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_df
  //  Referenced by: '<S192>/S-Function'

  { 105U, 115U, 100U, 114U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S192>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S192>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S192>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_nt
  //  Referenced by: '<S192>/S-Function'

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

  // Computed Parameter: SFunction_P1_bw
  //  Referenced by: '<S194>/S-Function'

  { 118U, 114U, 95U, 97U, 114U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S194>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S194>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S194>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_ba
  //  Referenced by: '<S194>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_cf
  //  Referenced by: '<S196>/S-Function'

  { 118U, 109U, 97U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S196>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S196>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S196>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_fq
  //  Referenced by: '<S196>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_nw
  //  Referenced by: '<S198>/S-Function'

  { 118U, 109U, 98U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S198>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S198>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S198>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_pr
  //  Referenced by: '<S198>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_m
  //  Referenced by: '<S200>/S-Function'

  { 118U, 109U, 99U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S200>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S200>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S200>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_prh
  //  Referenced by: '<S200>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_a
  //  Referenced by: '<S204>/S-Function'

  { 118U, 114U, 95U, 98U, 114U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S204>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S204>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S204>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_d5
  //  Referenced by: '<S204>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_mi
  //  Referenced by: '<S206>/S-Function'

  { 118U, 114U, 95U, 99U, 114U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S206>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S206>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S206>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_gx
  //  Referenced by: '<S206>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_pm
  //  Referenced by: '<S208>/S-Function'

  { 118U, 114U, 95U, 97U, 115U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S208>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S208>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S208>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_kz
  //  Referenced by: '<S208>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_cff
  //  Referenced by: '<S210>/S-Function'

  { 116U, 104U, 101U, 116U, 97U, 95U, 109U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S210>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S210>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S210>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_gz
  //  Referenced by: '<S210>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_k3
  //  Referenced by: '<S212>/S-Function'

  { 119U, 115U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S212>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S212>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S212>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_e
  //  Referenced by: '<S212>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_kn
  //  Referenced by: '<S214>/S-Function'

  { 118U, 114U, 95U, 98U, 115U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S214>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S214>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S214>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_cf
  //  Referenced by: '<S214>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_l
  //  Referenced by: '<S216>/S-Function'

  { 105U, 115U, 113U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S216>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S216>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S216>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_pn
  //  Referenced by: '<S216>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_ez
  //  Referenced by: '<S218>/S-Function'

  { 105U, 115U, 100U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S218>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S218>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S218>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_a
  //  Referenced by: '<S218>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_bk
  //  Referenced by: '<S220>/S-Function'

  { 105U, 109U, 97U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S220>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S220>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S220>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_lm
  //  Referenced by: '<S220>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_hg
  //  Referenced by: '<S222>/S-Function'

  { 105U, 109U, 98U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S222>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S222>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S222>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_m
  //  Referenced by: '<S222>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_e5
  //  Referenced by: '<S224>/S-Function'

  { 105U, 109U, 99U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S224>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S224>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S224>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_o
  //  Referenced by: '<S224>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_po
  //  Referenced by: '<S226>/S-Function'

  { 105U, 97U, 48U, 95U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S226>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S226>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S226>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_bs
  //  Referenced by: '<S226>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_p1
  //  Referenced by: '<S228>/S-Function'

  { 105U, 98U, 48U, 95U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S228>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S228>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S228>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_gp
  //  Referenced by: '<S228>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_eb
  //  Referenced by: '<S230>/S-Function'

  { 118U, 114U, 95U, 99U, 115U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S230>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S230>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S230>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_fc
  //  Referenced by: '<S230>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_br
  //  Referenced by: '<S232>/S-Function'

  { 105U, 109U, 100U, 95U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S232>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S232>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S232>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_gw
  //  Referenced by: '<S232>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_as
  //  Referenced by: '<S234>/S-Function'

  { 86U, 99U, 95U, 97U, 114U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S234>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S234>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S234>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_jr
  //  Referenced by: '<S234>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_ga
  //  Referenced by: '<S236>/S-Function'

  { 105U, 100U, 99U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S236>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S236>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S236>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_eu
  //  Referenced by: '<S236>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_m4
  //  Referenced by: '<S238>/S-Function'

  { 118U, 99U, 107U, 112U, 105U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S238>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S238>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S238>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_ex
  //  Referenced by: '<S238>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_pmg
  //  Referenced by: '<S240>/S-Function'

  { 86U, 99U, 95U, 98U, 114U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S240>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S240>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S240>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_hf
  //  Referenced by: '<S240>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_he
  //  Referenced by: '<S242>/S-Function'

  { 86U, 99U, 95U, 99U, 114U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S242>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S242>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S242>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_lf
  //  Referenced by: '<S242>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_l3
  //  Referenced by: '<S244>/S-Function'

  { 86U, 99U, 95U, 97U, 115U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S244>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S244>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S244>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_kh
  //  Referenced by: '<S244>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_fn
  //  Referenced by: '<S246>/S-Function'

  { 105U, 98U, 114U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S246>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S246>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S246>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_hfu
  //  Referenced by: '<S246>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_cq
  //  Referenced by: '<S248>/S-Function'

  { 86U, 99U, 95U, 98U, 115U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S248>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S248>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S248>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_mf
  //  Referenced by: '<S248>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_cv
  //  Referenced by: '<S250>/S-Function'

  { 86U, 99U, 95U, 99U, 115U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S250>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S250>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S250>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_iz
  //  Referenced by: '<S250>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_hj
  //  Referenced by: '<S252>/S-Function'

  119U,

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S252>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S252>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S252>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_e1
  //  Referenced by: '<S252>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_mo
  //  Referenced by: '<S254>/S-Function'

  { 105U, 99U, 114U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S254>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S254>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S254>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_pg
  //  Referenced by: '<S254>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_iec
  //  Referenced by: '<S256>/S-Function'

  { 105U, 97U, 115U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S256>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S256>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S256>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_hx
  //  Referenced by: '<S256>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_bd
  //  Referenced by: '<S258>/S-Function'

  { 105U, 98U, 115U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S258>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S258>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S258>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_lb
  //  Referenced by: '<S258>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_dz
  //  Referenced by: '<S260>/S-Function'

  { 105U, 99U, 115U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S260>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S260>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S260>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_km
  //  Referenced by: '<S260>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_m3
  //  Referenced by: '<S262>/S-Function'

  { 105U, 97U, 114U, 95U, 122U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S262>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S262>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S262>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_i0
  //  Referenced by: '<S262>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_gm
  //  Referenced by: '<S264>/S-Function'

  { 105U, 98U, 114U, 95U, 122U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S264>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S264>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S264>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_iu
  //  Referenced by: '<S264>/S-Function'

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
  //  Referenced by: '<S202>/S-Function'

  { 118U, 100U, 99U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S202>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S202>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S202>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_at
  //  Referenced by: '<S202>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_ep
  //  Referenced by: '<S176>/S-Function'

  { 105U, 109U, 113U, 95U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S176>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S176>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S176>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_izn
  //  Referenced by: '<S176>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S150>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S150>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S150>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S270>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S270>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S270>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S272>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S272>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S272>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S274>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S274>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S274>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S276>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S276>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S276>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S282>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S282>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S282>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S284>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S284>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S284>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S286>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S286>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S286>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S288>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S288>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S288>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S294>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S294>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S294>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S296>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S296>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S296>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S298>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S298>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S298>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S300>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S300>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S300>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S306>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S306>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S306>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S308>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S308>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S308>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S310>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S310>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S310>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S312>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S312>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S312>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S318>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S318>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S318>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S320>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S320>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S320>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S322>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S322>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S322>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S324>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S324>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S324>/PWM'

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
  //  Referenced by: '<S152>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S152>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S152>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S152>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S154>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S154>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S154>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S154>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S156>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S156>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S156>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S156>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S158>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S158>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S158>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S158>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S160>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S160>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S160>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S160>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S162>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S162>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S162>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S162>/S-Function'

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
  //  Referenced by: '<S164>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S164>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S164>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S164>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S166>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S166>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S166>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S166>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S168>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S168>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S168>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S168>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S170>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S170>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S170>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S170>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S172>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S172>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S172>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S172>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S174>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S174>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S174>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S174>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S178>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S178>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S178>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S178>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S180>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S180>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S180>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S180>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S182>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S182>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S182>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S182>/S-Function'

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
  //  Referenced by: '<S190>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S190>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S190>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S190>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S192>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S192>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S192>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S192>/S-Function'

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
  //  Referenced by: '<S194>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S194>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S194>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S194>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S196>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S196>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S196>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S196>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S198>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S198>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S198>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S198>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S200>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S200>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S200>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S200>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S204>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S204>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S204>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S204>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S206>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S206>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S206>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S206>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S208>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S208>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S208>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S208>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S210>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S210>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S210>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S210>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S212>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S212>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S212>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S212>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S214>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S214>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S214>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S214>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S216>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S216>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S216>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S216>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S218>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S218>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S218>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S218>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S220>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S220>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S220>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S220>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S222>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S222>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S222>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S222>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S224>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S224>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S224>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S224>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S226>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S226>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S226>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S226>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S228>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S228>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S228>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S228>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S230>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S230>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S230>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S230>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S232>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S232>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S232>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S232>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S234>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S234>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S234>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S234>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S236>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S236>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S236>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S236>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S238>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S238>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S238>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S238>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S240>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S240>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S240>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S240>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S242>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S242>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S242>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S242>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S244>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S244>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S244>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S244>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S246>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S246>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S246>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S246>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S248>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S248>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S248>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S248>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S250>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S250>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S250>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S250>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S252>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S252>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S252>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S252>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S254>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S254>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S254>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S254>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S256>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S256>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S256>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S256>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S258>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S258>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S258>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S258>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S260>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S260>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S260>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S260>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S262>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S262>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S262>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S262>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S264>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S264>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S264>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S264>/S-Function'

  false,

  // Expression: boolean(var_freq)
  //  Referenced by: '<S140>/CLK1'

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
  //  Referenced by: '<S202>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S202>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S202>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S202>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S176>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S176>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S176>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S176>/S-Function'

  false
};

//
// End of automatically generated code
// Copyright imperix ltd. Switzerland 2021
// [EOF]
//
