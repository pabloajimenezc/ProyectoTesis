//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: imperix_control_data.cpp
//
// Code generated for Simulink model 'imperix_control'.
// To be implemented on the B-Box RCP or the B-Board PRO.
//
// Model version                  : 19.31
// Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
// C/C++ source code generated on : Wed Dec 17 15:44:39 2025
//
#include "imperix_control.h"

// Block parameters (default storage)
P_imperix_control_T imperix_control_P = {
  // Variable: CEMPC
  //  Referenced by: '<S1>/Energy balance'

  {
    0.0016666666666666668,
    10.0,
    3.0,

    { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 },

    { 1.0, -1.0, -0.0, -1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 1.0, -0.0, -1.0, -1.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,
      -1.0, -0.0, -1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 1.0, -0.0, -1.0, -1.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, -1.0,
      -0.0, -1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 1.0, -0.0, -1.0, -1.0, 0.0, 1.0 },

    { 0.83333333333333337, -0.16666666666666666, -0.16666666666666666,
      -0.16666666666666666, -0.16666666666666666, -0.16666666666666666, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.16666666666666666,
      0.83333333333333337, -0.16666666666666666, -0.16666666666666666,
      -0.16666666666666666, -0.16666666666666666, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.16666666666666666, -0.16666666666666666,
      0.83333333333333337, -0.16666666666666666, -0.16666666666666666,
      -0.16666666666666666, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, -0.16666666666666666, -0.16666666666666666, -0.16666666666666666,
      0.83333333333333337, -0.16666666666666666, -0.16666666666666666, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.16666666666666666,
      -0.16666666666666666, -0.16666666666666666, -0.16666666666666666,
      0.83333333333333337, -0.16666666666666666, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.16666666666666666, -0.16666666666666666,
      -0.16666666666666666, -0.16666666666666666, -0.16666666666666666,
      0.83333333333333337, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.83333333333333337,
      -0.16666666666666666, -0.16666666666666666, -0.16666666666666666,
      -0.16666666666666666, -0.16666666666666666, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.16666666666666666, 0.83333333333333337,
      -0.16666666666666666, -0.16666666666666666, -0.16666666666666666,
      -0.16666666666666666, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, -0.16666666666666666, -0.16666666666666666, 0.83333333333333337,
      -0.16666666666666666, -0.16666666666666666, -0.16666666666666666, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.16666666666666666,
      -0.16666666666666666, -0.16666666666666666, 0.83333333333333337,
      -0.16666666666666666, -0.16666666666666666, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.16666666666666666, -0.16666666666666666,
      -0.16666666666666666, -0.16666666666666666, 0.83333333333333337,
      -0.16666666666666666, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, -0.16666666666666666, -0.16666666666666666, -0.16666666666666666,
      -0.16666666666666666, -0.16666666666666666, 0.83333333333333337, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.83333333333333337, -0.16666666666666666, -0.16666666666666666,
      -0.16666666666666666, -0.16666666666666666, -0.16666666666666666, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.16666666666666666,
      0.83333333333333337, -0.16666666666666666, -0.16666666666666666,
      -0.16666666666666666, -0.16666666666666666, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.16666666666666666, -0.16666666666666666,
      0.83333333333333337, -0.16666666666666666, -0.16666666666666666,
      -0.16666666666666666, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, -0.16666666666666666, -0.16666666666666666, -0.16666666666666666,
      0.83333333333333337, -0.16666666666666666, -0.16666666666666666, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.16666666666666666,
      -0.16666666666666666, -0.16666666666666666, -0.16666666666666666,
      0.83333333333333337, -0.16666666666666666, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.16666666666666666, -0.16666666666666666,
      -0.16666666666666666, -0.16666666666666666, -0.16666666666666666,
      0.83333333333333337 },

    { 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0 },

    { 0.11072664359861592, 0.05536332179930796, 0.0, 0.0, 0.0, 0.0,
      0.05536332179930796, 0.11072664359861592, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.11072664359861592, 0.05536332179930796, 0.0, 0.0, 0.0, 0.0,
      0.05536332179930796, 0.11072664359861592, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.11072664359861592, 0.05536332179930796, 0.0, 0.0, 0.0, 0.0,
      0.05536332179930796, 0.11072664359861592 },

    { 1.0, -1.0, -0.0, -1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, -1.0, 1.0, 0.0, 1.0, -1.0, -0.0, -0.0, -0.0, -0.0,
      -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 1.0, -0.0, -1.0,
      -1.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      -1.0, 0.0, 1.0, 1.0, -0.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
      -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, -1.0,
      -0.0, -1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0, -0.0, -0.0, -0.0,
      -0.0, -0.0, -1.0, 1.0, 0.0, 1.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
      -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, -0.0, -1.0, -1.0, 0.0, 1.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, 0.0,
      1.0, 1.0, -0.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, -1.0, -0.0, -1.0, 1.0,
      0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
      -0.0, -1.0, 1.0, 0.0, 1.0, -1.0, -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 1.0, -0.0, -1.0, -1.0, 0.0, 1.0, -0.0, -0.0, -0.0,
      -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, 0.0, 1.0, 1.0,
      -0.0, -1.0 },

    { 2.9585798816568047e-5, 0.0, 0.0, 0.0, 2.9585798816568047e-5, 0.0, 0.0, 0.0,
      2.9585798816568047e-5 },

    { 1.0, 0.0, 0.0, -1.0, -0.0, -0.0, 0.0, 1.0, 0.0, -0.0, -1.0, -0.0, 0.0, 0.0,
      1.0, -0.0, -0.0, -1.0 },
    0.60000000000000009,
    1.2000000000000002
  },

  // Variable: CCMPC
  //  Referenced by:
  //    '<S1>/LICCs control'
  //    '<S17>/Gain'
  //    '<S153>/Gain1'
  //    '<S153>/Gain2'

  {
    { -0.5, -0.66666666666666663, -0.0, -0.16666666666666669,
      -0.16666666666666663, -0.5, 0.33333333333333331, -0.57735026918962573,
      0.33333333333333326, -0.16666666666666657, -0.5, 0.33333333333333331,
      0.57735026918962573, -0.16666666666666663, 0.33333333333333326, 0.5,
      -0.66666666666666663, -0.0, 0.16666666666666666, 0.16666666666666666, 0.5,
      0.33333333333333331, -0.57735026918962573, -0.33333333333333331,
      0.16666666666666663, 0.5, 0.33333333333333331, 0.57735026918962573,
      0.16666666666666663, -0.33333333333333326 },

    { -0.33333333333333348, -0.33333333333333343, -0.33333333333333343,
      0.33333333333333343, 0.33333333333333343, 0.33333333333333343,
      -0.50000000000000011, 0.24999999999999986, 0.24999999999999989,
      -0.50000000000000044, 0.25000000000000017, 0.25000000000000006,
      -1.0149809463711964e-16, -0.43301270189221946, 0.43301270189221935,
      3.6642960250248791e-17, -0.43301270189221935, 0.43301270189221924, -1.0,
      0.99999999999999989, -5.7872731254768273e-16, 0.99999999999999933,
      -0.99999999999999989, 1.0172373706244883e-15, -0.99999999999999978,
      -5.7872731254768273e-16, 1.0000000000000002, 0.99999999999999956,
      7.3573655841606032e-16, -0.99999999999999967 },
    0.00016666666666666666,
    2.0,
    2.0,

    { -40.0, -0.0, -0.0, -40.0 },

    { 200.0, 0.0, 0.0, 200.0 },

    { 0.99335550625503444, 0.0, 0.0, 0.0, -0.0, 0.99335550625503444, 0.0, 0.0,
      0.033222468724827925, 0.0, 1.0, 0.0, 0.0, 0.033222468724827925, 0.0, 1.0 },

    { 0.99335550625503444, 0.0, 0.9867551618071958, 0.0, -0.0,
      0.99335550625503444, 0.0, 0.9867551618071958 },

    { 0.033222468724827925, 0.0, 0.033001722239193489, 0.0, 0.0,
      0.033222468724827925, 0.0, 0.033001722239193489, 0.0, 0.0,
      0.033222468724827925, 0.0, 0.0, 0.0, 0.0, 0.033222468724827925 },

    { 6.070162211557226e-5, 0.0, 3.0350136607807998e-5, 0.0, 0.0,
      6.070162211557226e-5, 0.0, 3.0350136607807998e-5, 3.0350136607807998e-5,
      0.0, 3.0553146800613695e-5, 0.0, 0.0, 3.0350136607807998e-5, 0.0,
      3.0553146800613695e-5 },

    { 7.3964497041420118e-6, 0.0, 0.0, 0.0, 0.0, 7.3964497041420118e-6, 0.0, 0.0,
      0.0, 0.0, 7.3964497041420118e-6, 0.0, 0.0, 0.0, 0.0, 7.3964497041420118e-6
    },
    10.0,

    { 0.00013466611915699238, 0.0, 3.0350136607807998e-5, 0.0, 0.0,
      0.00013466611915699238, 0.0, 3.0350136607807998e-5, 3.0350136607807998e-5,
      0.0, 0.00010451764384203382, 0.0, 0.0, 3.0350136607807998e-5, 0.0,
      0.00010451764384203382 },

    { -1.0, 0.99999999999999989, -5.7872731254768273e-16, 0.99999999999999933,
      -0.99999999999999989, 1.0172373706244883e-15, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      1.0, -0.99999999999999989, 5.7872731254768273e-16, -0.99999999999999933,
      0.99999999999999989, -1.0172373706244883e-15, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      -0.99999999999999978, -5.7872731254768273e-16, 1.0000000000000002,
      0.99999999999999956, 7.3573655841606032e-16, -0.99999999999999967, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.99999999999999978, 5.7872731254768273e-16,
      -1.0000000000000002, -0.99999999999999956, -7.3573655841606032e-16,
      0.99999999999999967, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, -1.0, 0.99999999999999989, -5.7872731254768273e-16,
      0.99999999999999933, -0.99999999999999989, 1.0172373706244883e-15, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 1.0, -0.99999999999999989, 5.7872731254768273e-16,
      -0.99999999999999933, 0.99999999999999989, -1.0172373706244883e-15, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, -0.99999999999999978, -5.7872731254768273e-16,
      1.0000000000000002, 0.99999999999999956, 7.3573655841606032e-16,
      -0.99999999999999967, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.99999999999999978,
      5.7872731254768273e-16, -1.0000000000000002, -0.99999999999999956,
      -7.3573655841606032e-16, 0.99999999999999967 },
    0.00016666666666666669,
    0.36787944117144233
  },

  // Variable: M2C
  //  Referenced by:
  //    '<S1>/Energy balance'
  //    '<S1>/LICCs control'
  //    '<S1>/Constant5'
  //    '<S24>/Unit Delay1'
  //    '<S26>/Input format'
  //    '<S26>/Saturation'
  //    '<S26>/White noise'
  //    '<S26>/Gain7'
  //    '<S51>/vx'
  //    '<S54>/Constant1'
  //    '<S55>/Gain'
  //    '<S61>/Gain1'
  //    '<S61>/Gain3'
  //    '<S61>/Gain4'

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

  // Variable: KF
  //  Referenced by: '<S1>/Kalman Filter'

  {
    0.0016666666666666668,
    6.0,
    2.0,
    3.0,
    10.0,
    0.1,
    10.0,
    1.0,
    0.001,

    { 10.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 10.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.1, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.1, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 10.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0 },

    { 0.001, 0.0, 0.0, 0.0, 0.001, 0.0, 0.0, 0.0, 0.001 },

    { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

    { 0.001, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.001, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.001, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.001, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.001, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.001 },

    { -0.14757038073284323, 0.0, 0.0029671855279764419, 0.0, 1.648436404431356,
      0.0, 0.0, -0.14757038073284323, 0.0, 0.0029671855279764419,
      -1.648436404431356, 0.0, 2.4137588897374553, -0.31875027116144056,
      0.987379049221708, 0.0016666666666666668, 0.0, 0.0, 0.31875027116144056,
      2.4137588897374553, -0.0016666666666666668, 0.987379049221708, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.55555555555555558,
      1.0 },

    { -0.14757038073284323, 0.0, 0.0029671855279764419, 0.0, 1.648436404431356,
      0.0, 0.0, -0.14757038073284323, 0.0, 0.0029671855279764419,
      -1.648436404431356, 0.0, 2.4137588897374553, -0.31875027116144056,
      0.987379049221708, 0.0016666666666666668, -1.648436404431356, 0.0,
      0.31875027116144056, 2.4137588897374553, -0.0016666666666666668,
      0.987379049221708, 1.648436404431356, 0.0, 0.31875027116144056,
      -0.31875027116144056, -0.0016666666666666668, 0.0016666666666666668, 1.0,
      0.0, 0.0, 0.0, 0.0, 0.0, -0.55555555555555558, 1.0 },

    { 0.32227536986420419, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.32227536986420419,
      0.0, 0.0, 0.0, 0.0 },

    { 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,
      0.0, 0.0, 0.0 }
  },

  // Variable: IM
  //  Referenced by:
  //    '<S1>/IM references'
  //    '<S1>/Kalman Filter'
  //    '<S1>/Gain'
  //    '<S1>/Gain2'
  //    '<S1>/Gain4'
  //    '<S52>/Gain'

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
    0.006,
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

  // Variable: RFT
  //  Referenced by:
  //    '<S1>/Energy balance'
  //    '<S26>/Input format'
  //    '<S26>/Gain5'

  {
    { 0.66666666666666663, 0.0, -0.33333333333333331, 0.57735026918962573,
      -0.33333333333333331, -0.57735026918962573 },

    { 1.0, -0.5, -0.5, 0.0, 0.8660254037844386, -0.8660254037844386 },

    { 0.0, 1.0, -1.0, 0.0 }
  },

  // Variable: FOC
  //  Referenced by:
  //    '<S1>/IM references'
  //    '<S125>/Kb'
  //    '<S130>/Integral Gain'
  //    '<S138>/Proportional Gain'
  //    '<S140>/Saturation'
  //    '<S275>/Kb'
  //    '<S280>/Integral Gain'
  //    '<S288>/Proportional Gain'
  //    '<S290>/Saturation'

  {
    0.00016666666666666666,
    67.4857030833085,
    0.70710678118654746,
    5.3861678880387434,
    49.354641107576604,
    2558.1593947685192,
    488.40662479746294,
    0.19540929979456417,
    9.3248532870271816
  },

  // Variable: MCC
  //  Referenced by:
  //    '<S349>/Kb'
  //    '<S354>/Integral Gain'
  //    '<S362>/Proportional Gain'
  //    '<S364>/Saturation'
  //    '<S401>/Kb'
  //    '<S406>/Integral Gain'
  //    '<S414>/Proportional Gain'
  //    '<S416>/Saturation'

  {
    0.00016666666666666666,
    3.6608379914865665,
    0.0076715607909128864,
    0.0020955750592496652,
    0.70710678118654746,
    674.857030833085,
    3.6608379914865665,
    3493.8743666832484,
    165.26330246731402
  },

  // Variable: PCC
  //  Referenced by:
  //    '<S470>/Integral Gain'
  //    '<S478>/Proportional Gain'
  //    '<S480>/Saturation'
  //    '<S465>/DeadZone'

  {
    0.00016666666666666666,
    0.2,
    0.005,
    0.024999999999999998,
    0.70710678118654746,
    282.84271247461908,
    1.8000000000000005,
    400.00000000000023,
    4.2
  },

  // Variable: TEB
  //  Referenced by:
  //    '<S24>/Gain1'
  //    '<S24>/Gain2'
  //    '<S190>/Integral Gain'
  //    '<S198>/Proportional Gain'
  //    '<S200>/Saturation'
  //    '<S185>/DeadZone'

  {
    0.00016666666666666666,
    675.44748395812223,
    0.70710678118654746,
    56.568542494923818,
    0.083749727163734716,
    1.9623781730987766,
    4.2,
    0.00732233047033631,
    0.97749566320717973
  },

  // Variable: Xmax
  //  Referenced by:
  //    '<S26>/Input format'
  //    '<S26>/Gain'

  { 10.758793499999992, 10.758793499999992, 10.758793499999992,
    10.758793499999992, 10.758793499999992, 10.758793499999992, 4.2,
    5.3861678880387434, 5.3861678880387434, 165.26330246731402,
    165.26330246731402, 1335.2038392310212, 1335.2038392310212,
    157.07963267948966 },

  // Variable: Ymax
  //  Referenced by: '<S26>/Gain4'

  { 8.5, 8.5, 260.0 },

  // Mask Parameter: dq0toAlphaBetaZero_Alignment
  //  Referenced by: '<S314>/Constant'

  1.0,

  // Mask Parameter: AlphaBetaZerotodq0_Alignment
  //  Referenced by: '<S491>/Constant'

  1.0,

  // Mask Parameter: dq0toAlphaBetaZero_Alignment_g
  //  Referenced by: '<S322>/Constant'

  1.0,

  // Mask Parameter: dq0toAlphaBetaZero1_Alignment
  //  Referenced by: '<S431>/Constant'

  2.0,

  // Mask Parameter: PIDController_InitialConditionF
  //  Referenced by: '<S193>/Integrator'

  0.0,

  // Mask Parameter: FluxPI_InitialConditionForInteg
  //  Referenced by: '<S133>/Integrator'

  0.0,

  // Mask Parameter: SpeedPI_InitialConditionForInte
  //  Referenced by: '<S283>/Integrator'

  0.0,

  // Mask Parameter: MCCPId_InitialConditionForInteg
  //  Referenced by: '<S357>/Integrator'

  0.0,

  // Mask Parameter: MCCPIq_InitialConditionForInteg
  //  Referenced by: '<S409>/Integrator'

  0.0,

  // Mask Parameter: PCCPI_InitialConditionForIntegr
  //  Referenced by: '<S473>/Integrator'

  0.0,

  // Mask Parameter: CompareToConstant_const
  //  Referenced by: '<S315>/Constant'

  1.0,

  // Mask Parameter: CompareToConstant1_const
  //  Referenced by: '<S316>/Constant'

  2.0,

  // Mask Parameter: CompareToConstant_const_l
  //  Referenced by: '<S493>/Constant'

  1.0,

  // Mask Parameter: CompareToConstant1_const_k
  //  Referenced by: '<S494>/Constant'

  2.0,

  // Mask Parameter: CompareToConstant_const_h
  //  Referenced by: '<S427>/Constant'

  1.0,

  // Mask Parameter: CompareToConstant1_const_f
  //  Referenced by: '<S428>/Constant'

  2.0,

  // Mask Parameter: CompareToConstant_const_d
  //  Referenced by: '<S432>/Constant'

  1.0,

  // Mask Parameter: CompareToConstant1_const_l
  //  Referenced by: '<S433>/Constant'

  2.0,

  // Expression: [0,0]
  //  Referenced by: '<S434>/alpha_beta'

  { 0.0, 0.0 },

  // Expression: [0,0]
  //  Referenced by: '<S435>/alpha_beta'

  { 0.0, 0.0 },

  // Expression: [0,0]
  //  Referenced by: '<S495>/dq'

  { 0.0, 0.0 },

  // Expression: [0,0]
  //  Referenced by: '<S496>/dq'

  { 0.0, 0.0 },

  // Expression: 0
  //  Referenced by: '<S183>/Constant1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S463>/Constant1'

  0.0,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S89>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S91>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S79>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S67>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S81>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S83>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S75>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S93>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S69>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S77>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S71>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S73>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S85>/ADC'

  0.00016666666666666666,

  // Expression: 0
  //  Referenced by: '<S153>/Unit Delay1'

  0.0,

  // Expression: 0
  //  Referenced by:

  0.0,

  // Expression: 0
  //  Referenced by:

  0.0,

  // Computed Parameter: Integrator_gainval
  //  Referenced by: '<S193>/Integrator'

  0.00016666666666666666,

  // Expression: [1; -1]
  //  Referenced by: '<S26>/Gain3'

  { 1.0, -1.0 },

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S558>/S-Function'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S562>/S-Function'

  0.00016666666666666666,

  // Expression: 0
  //  Referenced by:

  0.0,

  // Computed Parameter: Integrator_gainval_o
  //  Referenced by: '<S133>/Integrator'

  0.00016666666666666666,

  // Computed Parameter: Integrator_gainval_k
  //  Referenced by: '<S283>/Integrator'

  0.00016666666666666666,

  // Expression: 0
  //  Referenced by:

  0.0,

  // Expression: 1e-3
  //  Referenced by: '<S1>/Add Constant'

  0.001,

  // Expression: -1
  //  Referenced by: '<S56>/Gain2'

  -1.0,

  // Expression: [ 1   -1/2   -1/2; 0   sqrt(3)/2   -sqrt(3)/2; 1/2  1/2  1/2 ]
  //  Referenced by: '<S492>/Gain3'

  { 1.0, 0.0, 0.5, -0.5, 0.8660254037844386, 0.5, -0.5, -0.8660254037844386, 0.5
  },

  // Expression: 2/3
  //  Referenced by: '<S492>/Gain1'

  0.66666666666666663,

  // Computed Parameter: Integrator_gainval_c
  //  Referenced by: '<S357>/Integrator'

  0.00016666666666666666,

  // Computed Parameter: Integrator_gainval_p
  //  Referenced by: '<S409>/Integrator'

  0.00016666666666666666,

  // Expression: [ 1   0   1; -1/2  sqrt(3)/2   1; -1/2  -sqrt(3)/2  1 ]
  //  Referenced by: '<S319>/Gain3'

  { 1.0, -0.5, -0.5, 0.0, 0.8660254037844386, -0.8660254037844386, 1.0, 1.0, 1.0
  },

  // Expression: M2C.A'
  //  Referenced by: '<S51>/Gain2'

  { 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, -1.0, -0.0, -0.0,
    -1.0, -0.0, -0.0, -0.0, -1.0, -0.0, -0.0, -1.0, -0.0, -0.0, -0.0, -1.0, -0.0,
    -0.0, -1.0 },

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S560>/S-Function'

  0.00016666666666666666,

  // Computed Parameter: Integrator_gainval_m
  //  Referenced by: '<S473>/Integrator'

  0.00016666666666666666,

  // Expression: 2
  //  Referenced by: '<S52>/Gain1'

  2.0,

  // Expression: 1
  //  Referenced by: '<S1>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S183>/Clamping_zero'

  0.0,

  // Expression: PHASE
  //  Referenced by: '<S28>/phase'

  0.0,

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

  // Expression: [ 1   0   1; -1/2  sqrt(3)/2   1; -1/2  -sqrt(3)/2  1 ]
  //  Referenced by: '<S313>/Gain3'

  { 1.0, -0.5, -0.5, 0.0, 0.8660254037844386, -0.8660254037844386, 1.0, 1.0, 1.0
  },

  // Expression: -1
  //  Referenced by: '<S50>/Gain'

  -1.0,

  // Expression: -1
  //  Referenced by: '<S50>/Gain8'

  -1.0,

  // Expression: 0
  //  Referenced by: '<S463>/Clamping_zero'

  0.0,

  // Expression: PHASE
  //  Referenced by: '<S497>/phase'

  0.75,

  // Expression: PHASE
  //  Referenced by: '<S498>/phase'

  0.5,

  // Expression: PHASE
  //  Referenced by: '<S499>/phase'

  0.25,

  // Expression: PHASE
  //  Referenced by: '<S500>/phase'

  0.0,

  // Expression: -1
  //  Referenced by: '<S58>/Gain1'

  -1.0,

  // Expression: PHASE
  //  Referenced by: '<S509>/phase'

  0.75,

  // Expression: PHASE
  //  Referenced by: '<S510>/phase'

  0.5,

  // Expression: PHASE
  //  Referenced by: '<S511>/phase'

  0.25,

  // Expression: PHASE
  //  Referenced by: '<S512>/phase'

  0.0,

  // Expression: -1
  //  Referenced by: '<S59>/Gain3'

  -1.0,

  // Expression: PHASE
  //  Referenced by: '<S521>/phase'

  0.75,

  // Expression: PHASE
  //  Referenced by: '<S522>/phase'

  0.5,

  // Expression: PHASE
  //  Referenced by: '<S523>/phase'

  0.25,

  // Expression: PHASE
  //  Referenced by: '<S524>/phase'

  0.0,

  // Expression: -1
  //  Referenced by: '<S60>/Gain3'

  -1.0,

  // Expression: PHASE
  //  Referenced by: '<S533>/phase'

  0.75,

  // Expression: PHASE
  //  Referenced by: '<S534>/phase'

  0.5,

  // Expression: PHASE
  //  Referenced by: '<S535>/phase'

  0.25,

  // Expression: PHASE
  //  Referenced by: '<S536>/phase'

  0.0,

  // Expression: PHASE
  //  Referenced by: '<S545>/phase'

  0.75,

  // Expression: PHASE
  //  Referenced by: '<S546>/phase'

  0.5,

  // Expression: PHASE
  //  Referenced by: '<S547>/phase'

  0.25,

  // Expression: PHASE
  //  Referenced by: '<S548>/phase'

  0.0,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S87>/ADC'

  0.00016666666666666666,

  // Expression: 0
  //  Referenced by: '<S1>/Unit Delay'

  0.0,

  // Expression: 2/3*pi*0
  //  Referenced by: '<S53>/IC'

  0.0,

  // Expression: single(deadtime)
  //  Referenced by: '<S212>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S212>/PWM'

  1.0F,

  // Expression: single(phase)
  //  Referenced by: '<S212>/PWM'

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
  //  Referenced by: '<S502>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S502>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S502>/PWM'

  0.75F,

  // Expression: single(deadtime)
  //  Referenced by: '<S504>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S504>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S504>/PWM'

  0.5F,

  // Expression: single(deadtime)
  //  Referenced by: '<S506>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S506>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S506>/PWM'

  0.25F,

  // Expression: single(deadtime)
  //  Referenced by: '<S508>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S508>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S508>/PWM'

  0.0F,

  // Expression: single(deadtime)
  //  Referenced by: '<S514>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S514>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S514>/PWM'

  0.75F,

  // Expression: single(deadtime)
  //  Referenced by: '<S516>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S516>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S516>/PWM'

  0.5F,

  // Expression: single(deadtime)
  //  Referenced by: '<S518>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S518>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S518>/PWM'

  0.25F,

  // Expression: single(deadtime)
  //  Referenced by: '<S520>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S520>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S520>/PWM'

  0.0F,

  // Expression: single(deadtime)
  //  Referenced by: '<S526>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S526>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S526>/PWM'

  0.75F,

  // Expression: single(deadtime)
  //  Referenced by: '<S528>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S528>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S528>/PWM'

  0.5F,

  // Expression: single(deadtime)
  //  Referenced by: '<S530>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S530>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S530>/PWM'

  0.25F,

  // Expression: single(deadtime)
  //  Referenced by: '<S532>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S532>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S532>/PWM'

  0.0F,

  // Expression: single(deadtime)
  //  Referenced by: '<S538>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S538>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S538>/PWM'

  0.75F,

  // Expression: single(deadtime)
  //  Referenced by: '<S540>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S540>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S540>/PWM'

  0.5F,

  // Expression: single(deadtime)
  //  Referenced by: '<S542>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S542>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S542>/PWM'

  0.25F,

  // Expression: single(deadtime)
  //  Referenced by: '<S544>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S544>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S544>/PWM'

  0.0F,

  // Expression: single(deadtime)
  //  Referenced by: '<S550>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S550>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S550>/PWM'

  0.75F,

  // Expression: single(deadtime)
  //  Referenced by: '<S552>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S552>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S552>/PWM'

  0.5F,

  // Expression: single(deadtime)
  //  Referenced by: '<S554>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S554>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S554>/PWM'

  0.25F,

  // Expression: single(deadtime)
  //  Referenced by: '<S556>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S556>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S556>/PWM'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S89>/ADC'

  0.00045776F,

  // Expression: single(offset)
  //  Referenced by: '<S89>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S91>/ADC'

  0.00045776F,

  // Expression: single(offset)
  //  Referenced by: '<S91>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S79>/ADC'

  0.00045776F,

  // Expression: single(offset)
  //  Referenced by: '<S79>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S67>/ADC'

  0.00045776F,

  // Expression: single(offset)
  //  Referenced by: '<S67>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S81>/ADC'

  0.00045776F,

  // Expression: single(offset)
  //  Referenced by: '<S81>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S83>/ADC'

  0.00045776F,

  // Expression: single(offset)
  //  Referenced by: '<S83>/ADC'

  0.0F,

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

  // Expression: single(gain)
  //  Referenced by: '<S75>/ADC'

  0.027466F,

  // Expression: single(offset)
  //  Referenced by: '<S75>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S93>/ADC'

  0.027466F,

  // Expression: single(offset)
  //  Referenced by: '<S93>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S69>/ADC'

  0.027466F,

  // Expression: single(offset)
  //  Referenced by: '<S69>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S77>/ADC'

  0.027466F,

  // Expression: single(offset)
  //  Referenced by: '<S77>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S71>/ADC'

  0.027466F,

  // Expression: single(offset)
  //  Referenced by: '<S71>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S73>/ADC'

  0.027466F,

  // Expression: single(offset)
  //  Referenced by: '<S73>/ADC'

  0.0F,

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

  // Expression: single(gain)
  //  Referenced by: '<S85>/ADC'

  0.012207F,

  // Expression: single(offset)
  //  Referenced by: '<S85>/ADC'

  0.0F,

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

  // Expression: single(INITIALVAL)
  //  Referenced by: '<S558>/S-Function'

  0.0F,

  // Expression: single(VAL_MIN)
  //  Referenced by: '<S558>/S-Function'

  0.0F,

  // Expression: single(VAL_MAX)
  //  Referenced by: '<S558>/S-Function'

  1.0F,

  // Expression: single(0)
  //  Referenced by: '<S558>/S-Function'

  0.0F,

  // Expression: single(0)
  //  Referenced by: '<S558>/S-Function'

  0.0F,

  // Expression: single(INITIALVAL)
  //  Referenced by: '<S562>/S-Function'

  0.0F,

  // Expression: single(VAL_MIN)
  //  Referenced by: '<S562>/S-Function'

  -1.0F,

  // Expression: single(VAL_MAX)
  //  Referenced by: '<S562>/S-Function'

  1.0F,

  // Expression: single(0)
  //  Referenced by: '<S562>/S-Function'

  0.0F,

  // Expression: single(0)
  //  Referenced by: '<S562>/S-Function'

  0.0F,

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

  // Expression: single(INITIALVAL)
  //  Referenced by: '<S560>/S-Function'

  0.0F,

  // Expression: single(VAL_MIN)
  //  Referenced by: '<S560>/S-Function'

  0.0F,

  // Expression: single(VAL_MAX)
  //  Referenced by: '<S560>/S-Function'

  0.0F,

  // Expression: single(0)
  //  Referenced by: '<S560>/S-Function'

  0.0F,

  // Expression: single(0)
  //  Referenced by: '<S560>/S-Function'

  0.0F,

  // Expression: single(private_nb_oversamples)
  //  Referenced by: '<S96>/S-Function'

  0.0F,

  // Expression: single(interrupt_phase)
  //  Referenced by: '<S96>/S-Function'

  0.5F,

  // Expression: single(frequency)
  //  Referenced by: '<S98>/CLK1'

  6000.0F,

  // Expression: single(gain)
  //  Referenced by: '<S87>/ADC'

  0.012207F,

  // Expression: single(offset)
  //  Referenced by: '<S87>/ADC'

  0.0F,

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
  //  Referenced by: '<S558>/S-Function'

  1000000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S562>/S-Function'

  1000000U,

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
  //  Referenced by: '<S560>/S-Function'

  1000000U,

  // Expression: int16(lane)
  //  Referenced by: '<S212>/PWM'

  8,

  // Expression: int16(carrier)
  //  Referenced by: '<S212>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S212>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S212>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S212>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S212>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S306>/PWM'

  0,

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

  1,

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

  2,

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

  3,

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
  //  Referenced by: '<S502>/PWM'

  8,

  // Expression: int16(carrier)
  //  Referenced by: '<S502>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S502>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S502>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S502>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S502>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S504>/PWM'

  9,

  // Expression: int16(carrier)
  //  Referenced by: '<S504>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S504>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S504>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S504>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S504>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S506>/PWM'

  10,

  // Expression: int16(carrier)
  //  Referenced by: '<S506>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S506>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S506>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S506>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S506>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S508>/PWM'

  11,

  // Expression: int16(carrier)
  //  Referenced by: '<S508>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S508>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S508>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S508>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S508>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S514>/PWM'

  4,

  // Expression: int16(carrier)
  //  Referenced by: '<S514>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S514>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S514>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S514>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S514>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S516>/PWM'

  5,

  // Expression: int16(carrier)
  //  Referenced by: '<S516>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S516>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S516>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S516>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S516>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S518>/PWM'

  6,

  // Expression: int16(carrier)
  //  Referenced by: '<S518>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S518>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S518>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S518>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S518>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S520>/PWM'

  7,

  // Expression: int16(carrier)
  //  Referenced by: '<S520>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S520>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S520>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S520>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S520>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S526>/PWM'

  4,

  // Expression: int16(carrier)
  //  Referenced by: '<S526>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S526>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S526>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S526>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S526>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S528>/PWM'

  5,

  // Expression: int16(carrier)
  //  Referenced by: '<S528>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S528>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S528>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S528>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S528>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S530>/PWM'

  6,

  // Expression: int16(carrier)
  //  Referenced by: '<S530>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S530>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S530>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S530>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S530>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S532>/PWM'

  7,

  // Expression: int16(carrier)
  //  Referenced by: '<S532>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S532>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S532>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S532>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S532>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S538>/PWM'

  12,

  // Expression: int16(carrier)
  //  Referenced by: '<S538>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S538>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S538>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S538>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S538>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S540>/PWM'

  13,

  // Expression: int16(carrier)
  //  Referenced by: '<S540>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S540>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S540>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S540>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S540>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S542>/PWM'

  14,

  // Expression: int16(carrier)
  //  Referenced by: '<S542>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S542>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S542>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S542>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S542>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S544>/PWM'

  15,

  // Expression: int16(carrier)
  //  Referenced by: '<S544>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S544>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S544>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S544>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S544>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S550>/PWM'

  0,

  // Expression: int16(carrier)
  //  Referenced by: '<S550>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S550>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S550>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S550>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S550>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S552>/PWM'

  1,

  // Expression: int16(carrier)
  //  Referenced by: '<S552>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S552>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S552>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S552>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S552>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S554>/PWM'

  2,

  // Expression: int16(carrier)
  //  Referenced by: '<S554>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S554>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S554>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S554>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S554>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S556>/PWM'

  3,

  // Expression: int16(carrier)
  //  Referenced by: '<S556>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S556>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S556>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S556>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S556>/PWM'

  0,

  // Expression: int16(channel)
  //  Referenced by: '<S89>/ADC'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S89>/ADC'

  0,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S89>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S89>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S91>/ADC'

  1,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S91>/ADC'

  0,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S91>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S91>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S79>/ADC'

  2,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S79>/ADC'

  0,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S79>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S79>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S67>/ADC'

  3,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S67>/ADC'

  0,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S67>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S67>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S81>/ADC'

  4,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S81>/ADC'

  0,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S81>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S81>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S83>/ADC'

  5,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S83>/ADC'

  0,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S83>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S83>/ADC'

  1,

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

  // Expression: int16(channel)
  //  Referenced by: '<S75>/ADC'

  6,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S75>/ADC'

  0,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S75>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S75>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S93>/ADC'

  7,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S93>/ADC'

  0,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S93>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S93>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S69>/ADC'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S69>/ADC'

  1,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S69>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S69>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S77>/ADC'

  1,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S77>/ADC'

  1,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S77>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S77>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S71>/ADC'

  2,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S71>/ADC'

  1,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S71>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S71>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S73>/ADC'

  3,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S73>/ADC'

  1,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S73>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S73>/ADC'

  1,

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

  // Expression: int16(channel)
  //  Referenced by: '<S85>/ADC'

  4,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S85>/ADC'

  1,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S85>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S85>/ADC'

  1,

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

  // Expression: int16(DATA_TYPE)
  //  Referenced by: '<S558>/S-Function'

  1,

  // Expression: int16(DATA_TYPE)
  //  Referenced by: '<S562>/S-Function'

  1,

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

  // Expression: int16(DATA_TYPE)
  //  Referenced by: '<S560>/S-Function'

  1,

  // Computed Parameter: clk_id_Value
  //  Referenced by: '<S98>/clk_id'

  0,

  // Expression: int16(id)
  //  Referenced by: '<S98>/CLK1'

  0,

  // Expression: int16(channel)
  //  Referenced by: '<S87>/ADC'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S87>/ADC'

  2,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S87>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S87>/ADC'

  1,

  // Computed Parameter: SFunction_P1
  //  Referenced by: '<S214>/S-Function'

  { 105U, 115U, 49U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S214>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S214>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S214>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14
  //  Referenced by: '<S214>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_m
  //  Referenced by: '<S216>/S-Function'

  { 105U, 115U, 50U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S216>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S216>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S216>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_c
  //  Referenced by: '<S216>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_b
  //  Referenced by: '<S218>/S-Function'

  { 86U, 99U, 53U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S218>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S218>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S218>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_f
  //  Referenced by: '<S218>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_d
  //  Referenced by: '<S220>/S-Function'

  { 86U, 99U, 54U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S220>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S220>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S220>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_e
  //  Referenced by: '<S220>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_n
  //  Referenced by: '<S222>/S-Function'

  { 119U, 109U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S222>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S222>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S222>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_h
  //  Referenced by: '<S222>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_c
  //  Referenced by: '<S224>/S-Function'

  { 105U, 101U, 49U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S224>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S224>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S224>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_b
  //  Referenced by: '<S224>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_k
  //  Referenced by: '<S226>/S-Function'

  { 105U, 101U, 50U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S226>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S226>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S226>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_ff
  //  Referenced by: '<S226>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_i
  //  Referenced by: '<S558>/S-Function'

  { 70U, 95U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S558>/S-Function'

  1U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S558>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S558>/S-Function'

  2U,

  // Expression: uint16(ETH_PORT)
  //  Referenced by: '<S558>/S-Function'

  2000U,

  // Computed Parameter: SFunction_P1_f
  //  Referenced by: '<S562>/S-Function'

  { 119U, 95U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S562>/S-Function'

  1U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S562>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S562>/S-Function'

  2U,

  // Expression: uint16(ETH_PORT)
  //  Referenced by: '<S562>/S-Function'

  2000U,

  // Computed Parameter: SFunction_P1_a
  //  Referenced by: '<S228>/S-Function'

  { 105U, 101U, 95U, 114U, 49U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S228>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S228>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S228>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_l
  //  Referenced by: '<S228>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_g
  //  Referenced by: '<S230>/S-Function'

  { 105U, 101U, 95U, 114U, 50U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S230>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S230>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S230>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_b5
  //  Referenced by: '<S230>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_gh
  //  Referenced by: '<S232>/S-Function'

  { 118U, 111U, 95U, 114U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S232>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S232>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S232>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_bg
  //  Referenced by: '<S232>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_gl
  //  Referenced by: '<S234>/S-Function'

  { 105U, 115U, 51U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S234>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S234>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S234>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_ef
  //  Referenced by: '<S234>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_cj
  //  Referenced by: '<S236>/S-Function'

  { 105U, 115U, 52U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S236>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S236>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S236>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_a
  //  Referenced by: '<S236>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_av
  //  Referenced by: '<S238>/S-Function'

  { 105U, 115U, 53U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S238>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S238>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S238>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_cs
  //  Referenced by: '<S238>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_nx
  //  Referenced by: '<S240>/S-Function'

  { 105U, 115U, 54U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S240>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S240>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S240>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_p
  //  Referenced by: '<S240>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_l
  //  Referenced by: '<S242>/S-Function'

  { 86U, 99U, 49U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S242>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S242>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S242>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_d
  //  Referenced by: '<S242>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_cv
  //  Referenced by: '<S244>/S-Function'

  { 86U, 99U, 50U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S244>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S244>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S244>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_fg
  //  Referenced by: '<S244>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_ce
  //  Referenced by: '<S246>/S-Function'

  { 86U, 99U, 51U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S246>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S246>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S246>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_k
  //  Referenced by: '<S246>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_cu
  //  Referenced by: '<S248>/S-Function'

  { 86U, 99U, 52U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S248>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S248>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S248>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_cu
  //  Referenced by: '<S248>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_p
  //  Referenced by: '<S560>/S-Function'

  { 101U, 110U, 97U, 98U, 108U, 101U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S560>/S-Function'

  1U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S560>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S560>/S-Function'

  2U,

  // Expression: uint16(ETH_PORT)
  //  Referenced by: '<S560>/S-Function'

  2000U,

  // Expression: uint16(interrupt_pstsclr)
  //  Referenced by: '<S96>/S-Function'

  0U,

  // Expression: uint16(private_adc_delay_ns)
  //  Referenced by: '<S96>/S-Function'

  2000U,

  // Expression: uint16(highest_device_id)
  //  Referenced by: '<S96>/S-Function'

  2U,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S212>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S212>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S212>/PWM'

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
  //  Referenced by: '<S502>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S502>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S502>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S504>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S504>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S504>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S506>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S506>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S506>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S508>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S508>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S508>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S514>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S514>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S514>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S516>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S516>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S516>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S518>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S518>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S518>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S520>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S520>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S520>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S526>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S526>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S526>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S528>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S528>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S528>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S530>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S530>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S530>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S532>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S532>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S532>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S538>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S538>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S538>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S540>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S540>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S540>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S542>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S542>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S542>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S544>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S544>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S544>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S550>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S550>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S550>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S552>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S552>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S552>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S554>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S554>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S554>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S556>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S556>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S556>/PWM'

  true,

  // Expression: boolean(usehist)
  //  Referenced by: '<S89>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S89>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S91>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S91>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S79>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S79>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S67>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S67>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S81>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S81>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S83>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S83>/ADC'

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

  // Expression: boolean(usehist)
  //  Referenced by: '<S75>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S75>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S93>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S93>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S69>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S69>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S77>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S77>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S71>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S71>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S73>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S73>/ADC'

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

  // Expression: boolean(usehist)
  //  Referenced by: '<S85>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S85>/ADC'

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
  //  Referenced by: '<S558>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S558>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S558>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S558>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S562>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S562>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S562>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S562>/S-Function'

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
  //  Referenced by: '<S560>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S560>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S560>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S560>/S-Function'

  false,

  // Expression: boolean(var_freq)
  //  Referenced by: '<S98>/CLK1'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S87>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S87>/ADC'

  false,

  // Computed Parameter: Constant_Value
  //  Referenced by: '<S183>/Constant'

  1,

  // Computed Parameter: Constant2_Value
  //  Referenced by: '<S183>/Constant2'

  -1,

  // Computed Parameter: Constant3_Value
  //  Referenced by: '<S183>/Constant3'

  1,

  // Computed Parameter: Constant4_Value_j
  //  Referenced by: '<S183>/Constant4'

  -1,

  // Computed Parameter: Constant_Value_i
  //  Referenced by: '<S463>/Constant'

  1,

  // Computed Parameter: Constant2_Value_p
  //  Referenced by: '<S463>/Constant2'

  -1,

  // Computed Parameter: Constant3_Value_g
  //  Referenced by: '<S463>/Constant3'

  1,

  // Computed Parameter: Constant4_Value_c
  //  Referenced by: '<S463>/Constant4'

  -1,

  // Start of '<S322>/Subsystem1'
  {
    // Expression: [0,0]
    //  Referenced by: '<S430>/alpha_beta'

    { 0.0, 0.0 }
  }
  ,

  // End of '<S322>/Subsystem1'

  // Start of '<S322>/Subsystem - pi//2 delay'
  {
    // Expression: [0,0]
    //  Referenced by: '<S429>/alpha_beta'

    { 0.0, 0.0 }
  }
  ,

  // End of '<S322>/Subsystem - pi//2 delay'

  // Start of '<S314>/Subsystem1'
  {
    // Expression: [0,0]
    //  Referenced by: '<S318>/alpha_beta'

    { 0.0, 0.0 }
  }
  ,

  // End of '<S314>/Subsystem1'

  // Start of '<S314>/Subsystem - pi//2 delay'
  {
    // Expression: [0,0]
    //  Referenced by: '<S317>/alpha_beta'

    { 0.0, 0.0 }
  }
  // End of '<S314>/Subsystem - pi//2 delay'
};

//
// End of automatically generated code
// Copyright imperix ltd. Switzerland 2021
// [EOF]
//
