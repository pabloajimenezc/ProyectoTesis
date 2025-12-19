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
// Model version                  : 19.33
// Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
// C/C++ source code generated on : Thu Dec 18 17:11:36 2025
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
  //    '<S154>/Gain1'
  //    '<S154>/Gain2'

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
  //    '<S52>/vx'
  //    '<S55>/Constant1'
  //    '<S56>/Gain'
  //    '<S62>/Gain1'
  //    '<S62>/Gain3'
  //    '<S62>/Gain4'

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
  //    '<S1>/Gain1'
  //    '<S1>/Gain2'
  //    '<S1>/Gain4'
  //    '<S53>/Gain'

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
  //    '<S126>/Kb'
  //    '<S131>/Integral Gain'
  //    '<S139>/Proportional Gain'
  //    '<S141>/Saturation'
  //    '<S278>/Kb'
  //    '<S283>/Integral Gain'
  //    '<S291>/Proportional Gain'
  //    '<S293>/Saturation'

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
  //    '<S352>/Kb'
  //    '<S357>/Integral Gain'
  //    '<S365>/Proportional Gain'
  //    '<S367>/Saturation'
  //    '<S404>/Kb'
  //    '<S409>/Integral Gain'
  //    '<S417>/Proportional Gain'
  //    '<S419>/Saturation'

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
  //    '<S473>/Integral Gain'
  //    '<S481>/Proportional Gain'
  //    '<S483>/Saturation'
  //    '<S468>/DeadZone'

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
  //    '<S191>/Integral Gain'
  //    '<S199>/Proportional Gain'
  //    '<S201>/Saturation'
  //    '<S186>/DeadZone'

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
  //  Referenced by: '<S317>/Constant'

  1.0,

  // Mask Parameter: AlphaBetaZerotodq0_Alignment
  //  Referenced by: '<S494>/Constant'

  1.0,

  // Mask Parameter: dq0toAlphaBetaZero_Alignment_g
  //  Referenced by: '<S325>/Constant'

  1.0,

  // Mask Parameter: dq0toAlphaBetaZero1_Alignment
  //  Referenced by: '<S434>/Constant'

  2.0,

  // Mask Parameter: PIDController_InitialConditionF
  //  Referenced by: '<S194>/Integrator'

  0.0,

  // Mask Parameter: FluxPI_InitialConditionForInteg
  //  Referenced by: '<S134>/Integrator'

  0.0,

  // Mask Parameter: SpeedPI_InitialConditionForInte
  //  Referenced by: '<S286>/Integrator'

  0.0,

  // Mask Parameter: MCCPId_InitialConditionForInteg
  //  Referenced by: '<S360>/Integrator'

  0.0,

  // Mask Parameter: MCCPIq_InitialConditionForInteg
  //  Referenced by: '<S412>/Integrator'

  0.0,

  // Mask Parameter: PCCPI_InitialConditionForIntegr
  //  Referenced by: '<S476>/Integrator'

  0.0,

  // Mask Parameter: CompareToConstant_const
  //  Referenced by: '<S318>/Constant'

  1.0,

  // Mask Parameter: CompareToConstant1_const
  //  Referenced by: '<S319>/Constant'

  2.0,

  // Mask Parameter: CompareToConstant_const_l
  //  Referenced by: '<S496>/Constant'

  1.0,

  // Mask Parameter: CompareToConstant1_const_k
  //  Referenced by: '<S497>/Constant'

  2.0,

  // Mask Parameter: CompareToConstant_const_h
  //  Referenced by: '<S430>/Constant'

  1.0,

  // Mask Parameter: CompareToConstant1_const_f
  //  Referenced by: '<S431>/Constant'

  2.0,

  // Mask Parameter: CompareToConstant_const_d
  //  Referenced by: '<S435>/Constant'

  1.0,

  // Mask Parameter: CompareToConstant1_const_l
  //  Referenced by: '<S436>/Constant'

  2.0,

  // Expression: [0,0]
  //  Referenced by: '<S437>/alpha_beta'

  { 0.0, 0.0 },

  // Expression: [0,0]
  //  Referenced by: '<S438>/alpha_beta'

  { 0.0, 0.0 },

  // Expression: [0,0]
  //  Referenced by: '<S498>/dq'

  { 0.0, 0.0 },

  // Expression: [0,0]
  //  Referenced by: '<S499>/dq'

  { 0.0, 0.0 },

  // Expression: 0
  //  Referenced by: '<S184>/Constant1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S466>/Constant1'

  0.0,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S90>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S92>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S80>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S68>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S82>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S84>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S76>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S94>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S70>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S78>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S72>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S74>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S86>/ADC'

  0.00016666666666666666,

  // Expression: 0
  //  Referenced by: '<S154>/Unit Delay1'

  0.0,

  // Expression: 0
  //  Referenced by:

  0.0,

  // Expression: 0
  //  Referenced by:

  0.0,

  // Computed Parameter: Integrator_gainval
  //  Referenced by: '<S194>/Integrator'

  0.00016666666666666666,

  // Expression: [1; -1]
  //  Referenced by: '<S26>/Gain3'

  { 1.0, -1.0 },

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S561>/S-Function'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S565>/S-Function'

  0.00016666666666666666,

  // Expression: 0
  //  Referenced by:

  0.0,

  // Computed Parameter: Integrator_gainval_o
  //  Referenced by: '<S134>/Integrator'

  0.00016666666666666666,

  // Computed Parameter: Integrator_gainval_k
  //  Referenced by: '<S286>/Integrator'

  0.00016666666666666666,

  // Expression: 0
  //  Referenced by:

  0.0,

  // Expression: 1e-3
  //  Referenced by: '<S1>/Add Constant'

  0.001,

  // Expression: -1
  //  Referenced by: '<S57>/Gain2'

  -1.0,

  // Expression: [ 1   -1/2   -1/2; 0   sqrt(3)/2   -sqrt(3)/2; 1/2  1/2  1/2 ]
  //  Referenced by: '<S495>/Gain3'

  { 1.0, 0.0, 0.5, -0.5, 0.8660254037844386, 0.5, -0.5, -0.8660254037844386, 0.5
  },

  // Expression: 2/3
  //  Referenced by: '<S495>/Gain1'

  0.66666666666666663,

  // Computed Parameter: Integrator_gainval_c
  //  Referenced by: '<S360>/Integrator'

  0.00016666666666666666,

  // Computed Parameter: Integrator_gainval_p
  //  Referenced by: '<S412>/Integrator'

  0.00016666666666666666,

  // Expression: [ 1   0   1; -1/2  sqrt(3)/2   1; -1/2  -sqrt(3)/2  1 ]
  //  Referenced by: '<S322>/Gain3'

  { 1.0, -0.5, -0.5, 0.0, 0.8660254037844386, -0.8660254037844386, 1.0, 1.0, 1.0
  },

  // Expression: M2C.A'
  //  Referenced by: '<S52>/Gain2'

  { 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, -1.0, -0.0, -0.0,
    -1.0, -0.0, -0.0, -0.0, -1.0, -0.0, -0.0, -1.0, -0.0, -0.0, -0.0, -1.0, -0.0,
    -0.0, -1.0 },

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S563>/S-Function'

  0.00016666666666666666,

  // Computed Parameter: Integrator_gainval_m
  //  Referenced by: '<S476>/Integrator'

  0.00016666666666666666,

  // Expression: 2
  //  Referenced by: '<S53>/Gain1'

  2.0,

  // Expression: 1
  //  Referenced by: '<S1>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S184>/Clamping_zero'

  0.0,

  // Expression: PHASE
  //  Referenced by: '<S28>/phase'

  0.0,

  // Expression: PHASE
  //  Referenced by: '<S304>/phase'

  0.75,

  // Expression: PHASE
  //  Referenced by: '<S305>/phase'

  0.5,

  // Expression: PHASE
  //  Referenced by: '<S306>/phase'

  0.25,

  // Expression: PHASE
  //  Referenced by: '<S307>/phase'

  0.0,

  // Expression: [ 1   0   1; -1/2  sqrt(3)/2   1; -1/2  -sqrt(3)/2  1 ]
  //  Referenced by: '<S316>/Gain3'

  { 1.0, -0.5, -0.5, 0.0, 0.8660254037844386, -0.8660254037844386, 1.0, 1.0, 1.0
  },

  // Expression: -1
  //  Referenced by: '<S51>/Gain'

  -1.0,

  // Expression: -1
  //  Referenced by: '<S51>/Gain8'

  -1.0,

  // Expression: 0
  //  Referenced by: '<S466>/Clamping_zero'

  0.0,

  // Expression: PHASE
  //  Referenced by: '<S500>/phase'

  0.75,

  // Expression: PHASE
  //  Referenced by: '<S501>/phase'

  0.5,

  // Expression: PHASE
  //  Referenced by: '<S502>/phase'

  0.25,

  // Expression: PHASE
  //  Referenced by: '<S503>/phase'

  0.0,

  // Expression: PHASE
  //  Referenced by: '<S512>/phase'

  0.75,

  // Expression: PHASE
  //  Referenced by: '<S513>/phase'

  0.5,

  // Expression: PHASE
  //  Referenced by: '<S514>/phase'

  0.25,

  // Expression: PHASE
  //  Referenced by: '<S515>/phase'

  0.0,

  // Expression: PHASE
  //  Referenced by: '<S524>/phase'

  0.75,

  // Expression: PHASE
  //  Referenced by: '<S525>/phase'

  0.5,

  // Expression: PHASE
  //  Referenced by: '<S526>/phase'

  0.25,

  // Expression: PHASE
  //  Referenced by: '<S527>/phase'

  0.0,

  // Expression: PHASE
  //  Referenced by: '<S536>/phase'

  0.75,

  // Expression: PHASE
  //  Referenced by: '<S537>/phase'

  0.5,

  // Expression: PHASE
  //  Referenced by: '<S538>/phase'

  0.25,

  // Expression: PHASE
  //  Referenced by: '<S539>/phase'

  0.0,

  // Expression: PHASE
  //  Referenced by: '<S548>/phase'

  0.75,

  // Expression: PHASE
  //  Referenced by: '<S549>/phase'

  0.5,

  // Expression: PHASE
  //  Referenced by: '<S550>/phase'

  0.25,

  // Expression: PHASE
  //  Referenced by: '<S551>/phase'

  0.0,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S88>/ADC'

  0.00016666666666666666,

  // Expression: 0
  //  Referenced by: '<S1>/Unit Delay'

  0.0,

  // Expression: 2/3*pi*0
  //  Referenced by: '<S54>/IC'

  0.0,

  // Expression: single(deadtime)
  //  Referenced by: '<S213>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S213>/PWM'

  1.0F,

  // Expression: single(phase)
  //  Referenced by: '<S213>/PWM'

  0.0F,

  // Expression: single(deadtime)
  //  Referenced by: '<S309>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S309>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S309>/PWM'

  0.75F,

  // Expression: single(deadtime)
  //  Referenced by: '<S311>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S311>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S311>/PWM'

  0.5F,

  // Expression: single(deadtime)
  //  Referenced by: '<S313>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S313>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S313>/PWM'

  0.25F,

  // Expression: single(deadtime)
  //  Referenced by: '<S315>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S315>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S315>/PWM'

  0.0F,

  // Expression: single(deadtime)
  //  Referenced by: '<S505>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S505>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S505>/PWM'

  0.75F,

  // Expression: single(deadtime)
  //  Referenced by: '<S507>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S507>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S507>/PWM'

  0.5F,

  // Expression: single(deadtime)
  //  Referenced by: '<S509>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S509>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S509>/PWM'

  0.25F,

  // Expression: single(deadtime)
  //  Referenced by: '<S511>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S511>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S511>/PWM'

  0.0F,

  // Expression: single(deadtime)
  //  Referenced by: '<S517>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S517>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S517>/PWM'

  0.75F,

  // Expression: single(deadtime)
  //  Referenced by: '<S519>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S519>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S519>/PWM'

  0.5F,

  // Expression: single(deadtime)
  //  Referenced by: '<S521>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S521>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S521>/PWM'

  0.25F,

  // Expression: single(deadtime)
  //  Referenced by: '<S523>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S523>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S523>/PWM'

  0.0F,

  // Expression: single(deadtime)
  //  Referenced by: '<S529>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S529>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S529>/PWM'

  0.75F,

  // Expression: single(deadtime)
  //  Referenced by: '<S531>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S531>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S531>/PWM'

  0.5F,

  // Expression: single(deadtime)
  //  Referenced by: '<S533>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S533>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S533>/PWM'

  0.25F,

  // Expression: single(deadtime)
  //  Referenced by: '<S535>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S535>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S535>/PWM'

  0.0F,

  // Expression: single(deadtime)
  //  Referenced by: '<S541>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S541>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S541>/PWM'

  0.75F,

  // Expression: single(deadtime)
  //  Referenced by: '<S543>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S543>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S543>/PWM'

  0.5F,

  // Expression: single(deadtime)
  //  Referenced by: '<S545>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S545>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S545>/PWM'

  0.25F,

  // Expression: single(deadtime)
  //  Referenced by: '<S547>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S547>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S547>/PWM'

  0.0F,

  // Expression: single(deadtime)
  //  Referenced by: '<S553>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S553>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S553>/PWM'

  0.75F,

  // Expression: single(deadtime)
  //  Referenced by: '<S555>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S555>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S555>/PWM'

  0.5F,

  // Expression: single(deadtime)
  //  Referenced by: '<S557>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S557>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S557>/PWM'

  0.25F,

  // Expression: single(deadtime)
  //  Referenced by: '<S559>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S559>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S559>/PWM'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S90>/ADC'

  0.00045776F,

  // Expression: single(offset)
  //  Referenced by: '<S90>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S92>/ADC'

  0.00045776F,

  // Expression: single(offset)
  //  Referenced by: '<S92>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S80>/ADC'

  0.00045776F,

  // Expression: single(offset)
  //  Referenced by: '<S80>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S68>/ADC'

  0.00045776F,

  // Expression: single(offset)
  //  Referenced by: '<S68>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S82>/ADC'

  0.00045776F,

  // Expression: single(offset)
  //  Referenced by: '<S82>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S84>/ADC'

  0.00045776F,

  // Expression: single(offset)
  //  Referenced by: '<S84>/ADC'

  0.0F,

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

  // Expression: single(gain)
  //  Referenced by: '<S76>/ADC'

  0.027466F,

  // Expression: single(offset)
  //  Referenced by: '<S76>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S94>/ADC'

  0.027466F,

  // Expression: single(offset)
  //  Referenced by: '<S94>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S70>/ADC'

  0.027466F,

  // Expression: single(offset)
  //  Referenced by: '<S70>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S78>/ADC'

  0.027466F,

  // Expression: single(offset)
  //  Referenced by: '<S78>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S72>/ADC'

  0.027466F,

  // Expression: single(offset)
  //  Referenced by: '<S72>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S74>/ADC'

  0.027466F,

  // Expression: single(offset)
  //  Referenced by: '<S74>/ADC'

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

  // Expression: single(gain)
  //  Referenced by: '<S86>/ADC'

  0.012207F,

  // Expression: single(offset)
  //  Referenced by: '<S86>/ADC'

  0.0F,

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

  // Expression: single(INITIALVAL)
  //  Referenced by: '<S561>/S-Function'

  0.0F,

  // Expression: single(VAL_MIN)
  //  Referenced by: '<S561>/S-Function'

  0.0F,

  // Expression: single(VAL_MAX)
  //  Referenced by: '<S561>/S-Function'

  1.0F,

  // Expression: single(0)
  //  Referenced by: '<S561>/S-Function'

  0.0F,

  // Expression: single(0)
  //  Referenced by: '<S561>/S-Function'

  0.0F,

  // Expression: single(INITIALVAL)
  //  Referenced by: '<S565>/S-Function'

  0.0F,

  // Expression: single(VAL_MIN)
  //  Referenced by: '<S565>/S-Function'

  -1.0F,

  // Expression: single(VAL_MAX)
  //  Referenced by: '<S565>/S-Function'

  1.0F,

  // Expression: single(0)
  //  Referenced by: '<S565>/S-Function'

  0.0F,

  // Expression: single(0)
  //  Referenced by: '<S565>/S-Function'

  0.0F,

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

  // Expression: single(INITIALVAL)
  //  Referenced by: '<S563>/S-Function'

  0.0F,

  // Expression: single(VAL_MIN)
  //  Referenced by: '<S563>/S-Function'

  0.0F,

  // Expression: single(VAL_MAX)
  //  Referenced by: '<S563>/S-Function'

  0.0F,

  // Expression: single(0)
  //  Referenced by: '<S563>/S-Function'

  0.0F,

  // Expression: single(0)
  //  Referenced by: '<S563>/S-Function'

  0.0F,

  // Expression: single(private_nb_oversamples)
  //  Referenced by: '<S97>/S-Function'

  0.0F,

  // Expression: single(interrupt_phase)
  //  Referenced by: '<S97>/S-Function'

  0.5F,

  // Expression: single(frequency)
  //  Referenced by: '<S99>/CLK1'

  6000.0F,

  // Expression: single(gain)
  //  Referenced by: '<S88>/ADC'

  0.012207F,

  // Expression: single(offset)
  //  Referenced by: '<S88>/ADC'

  0.0F,

  // Expression: single(CAN_TX_FREQ)
  //  Referenced by: '<S235>/S-Function'

  10.0F,

  // Expression: single(ETH_TX_FREQ)
  //  Referenced by: '<S235>/S-Function'

  10.0F,

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
  //  Referenced by: '<S561>/S-Function'

  1000000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S565>/S-Function'

  1000000U,

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
  //  Referenced by: '<S563>/S-Function'

  1000000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S235>/S-Function'

  1000000U,

  // Expression: uint32(ETH_PORT)
  //  Referenced by: '<S235>/S-Function'

  2000U,

  // Expression: int16(lane)
  //  Referenced by: '<S213>/PWM'

  8,

  // Expression: int16(carrier)
  //  Referenced by: '<S213>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S213>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S213>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S213>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S213>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S309>/PWM'

  0,

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

  1,

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

  2,

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
  //  Referenced by: '<S315>/PWM'

  3,

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

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S505>/PWM'

  8,

  // Expression: int16(carrier)
  //  Referenced by: '<S505>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S505>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S505>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S505>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S505>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S507>/PWM'

  9,

  // Expression: int16(carrier)
  //  Referenced by: '<S507>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S507>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S507>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S507>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S507>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S509>/PWM'

  10,

  // Expression: int16(carrier)
  //  Referenced by: '<S509>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S509>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S509>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S509>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S509>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S511>/PWM'

  11,

  // Expression: int16(carrier)
  //  Referenced by: '<S511>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S511>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S511>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S511>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S511>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S517>/PWM'

  4,

  // Expression: int16(carrier)
  //  Referenced by: '<S517>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S517>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S517>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S517>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S517>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S519>/PWM'

  5,

  // Expression: int16(carrier)
  //  Referenced by: '<S519>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S519>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S519>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S519>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S519>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S521>/PWM'

  6,

  // Expression: int16(carrier)
  //  Referenced by: '<S521>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S521>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S521>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S521>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S521>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S523>/PWM'

  7,

  // Expression: int16(carrier)
  //  Referenced by: '<S523>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S523>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S523>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S523>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S523>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S529>/PWM'

  4,

  // Expression: int16(carrier)
  //  Referenced by: '<S529>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S529>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S529>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S529>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S529>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S531>/PWM'

  5,

  // Expression: int16(carrier)
  //  Referenced by: '<S531>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S531>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S531>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S531>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S531>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S533>/PWM'

  6,

  // Expression: int16(carrier)
  //  Referenced by: '<S533>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S533>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S533>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S533>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S533>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S535>/PWM'

  7,

  // Expression: int16(carrier)
  //  Referenced by: '<S535>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S535>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S535>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S535>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S535>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S541>/PWM'

  12,

  // Expression: int16(carrier)
  //  Referenced by: '<S541>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S541>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S541>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S541>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S541>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S543>/PWM'

  13,

  // Expression: int16(carrier)
  //  Referenced by: '<S543>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S543>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S543>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S543>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S543>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S545>/PWM'

  14,

  // Expression: int16(carrier)
  //  Referenced by: '<S545>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S545>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S545>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S545>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S545>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S547>/PWM'

  15,

  // Expression: int16(carrier)
  //  Referenced by: '<S547>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S547>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S547>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S547>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S547>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S553>/PWM'

  0,

  // Expression: int16(carrier)
  //  Referenced by: '<S553>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S553>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S553>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S553>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S553>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S555>/PWM'

  1,

  // Expression: int16(carrier)
  //  Referenced by: '<S555>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S555>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S555>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S555>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S555>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S557>/PWM'

  2,

  // Expression: int16(carrier)
  //  Referenced by: '<S557>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S557>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S557>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S557>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S557>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S559>/PWM'

  3,

  // Expression: int16(carrier)
  //  Referenced by: '<S559>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S559>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S559>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S559>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S559>/PWM'

  0,

  // Expression: int16(channel)
  //  Referenced by: '<S90>/ADC'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S90>/ADC'

  0,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S90>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S90>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S92>/ADC'

  1,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S92>/ADC'

  0,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S92>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S92>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S80>/ADC'

  2,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S80>/ADC'

  0,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S80>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S80>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S68>/ADC'

  3,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S68>/ADC'

  0,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S68>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S68>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S82>/ADC'

  4,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S82>/ADC'

  0,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S82>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S82>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S84>/ADC'

  5,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S84>/ADC'

  0,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S84>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S84>/ADC'

  1,

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

  // Expression: int16(channel)
  //  Referenced by: '<S76>/ADC'

  6,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S76>/ADC'

  0,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S76>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S76>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S94>/ADC'

  7,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S94>/ADC'

  0,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S94>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S94>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S70>/ADC'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S70>/ADC'

  1,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S70>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S70>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S78>/ADC'

  1,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S78>/ADC'

  1,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S78>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S78>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S72>/ADC'

  2,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S72>/ADC'

  1,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S72>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S72>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S74>/ADC'

  3,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S74>/ADC'

  1,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S74>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S74>/ADC'

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

  // Expression: int16(channel)
  //  Referenced by: '<S86>/ADC'

  4,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S86>/ADC'

  1,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S86>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S86>/ADC'

  1,

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

  // Expression: int16(DATA_TYPE)
  //  Referenced by: '<S561>/S-Function'

  1,

  // Expression: int16(DATA_TYPE)
  //  Referenced by: '<S565>/S-Function'

  1,

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

  // Expression: int16(DATA_TYPE)
  //  Referenced by: '<S563>/S-Function'

  1,

  // Computed Parameter: clk_id_Value
  //  Referenced by: '<S99>/clk_id'

  0,

  // Expression: int16(id)
  //  Referenced by: '<S99>/CLK1'

  0,

  // Expression: int16(channel)
  //  Referenced by: '<S88>/ADC'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S88>/ADC'

  2,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S88>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S88>/ADC'

  1,

  // Expression: int16(DATATYPE)
  //  Referenced by: '<S235>/S-Function'

  1,

  // Expression: int16(0)
  //  Referenced by: '<S235>/S-Function'

  0,

  // Computed Parameter: SFunction_P1
  //  Referenced by: '<S215>/S-Function'

  { 105U, 115U, 49U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S215>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S215>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S215>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14
  //  Referenced by: '<S215>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_m
  //  Referenced by: '<S217>/S-Function'

  { 105U, 115U, 50U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S217>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S217>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S217>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_c
  //  Referenced by: '<S217>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_b
  //  Referenced by: '<S219>/S-Function'

  { 86U, 99U, 53U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S219>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S219>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S219>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_f
  //  Referenced by: '<S219>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_d
  //  Referenced by: '<S221>/S-Function'

  { 86U, 99U, 54U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S221>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S221>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S221>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_e
  //  Referenced by: '<S221>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_n
  //  Referenced by: '<S223>/S-Function'

  { 119U, 109U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S223>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S223>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S223>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_h
  //  Referenced by: '<S223>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_c
  //  Referenced by: '<S225>/S-Function'

  { 105U, 101U, 49U },

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

  // Computed Parameter: SFunction_P1_k
  //  Referenced by: '<S227>/S-Function'

  { 105U, 101U, 50U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S227>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S227>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S227>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_ff
  //  Referenced by: '<S227>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_i
  //  Referenced by: '<S561>/S-Function'

  { 70U, 95U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S561>/S-Function'

  1U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S561>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S561>/S-Function'

  2U,

  // Expression: uint16(ETH_PORT)
  //  Referenced by: '<S561>/S-Function'

  2000U,

  // Computed Parameter: SFunction_P1_f
  //  Referenced by: '<S565>/S-Function'

  { 119U, 95U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S565>/S-Function'

  1U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S565>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S565>/S-Function'

  2U,

  // Expression: uint16(ETH_PORT)
  //  Referenced by: '<S565>/S-Function'

  2000U,

  // Computed Parameter: SFunction_P1_a
  //  Referenced by: '<S229>/S-Function'

  { 105U, 101U, 95U, 114U, 49U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S229>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S229>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S229>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_l
  //  Referenced by: '<S229>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_g
  //  Referenced by: '<S231>/S-Function'

  { 105U, 101U, 95U, 114U, 50U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S231>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S231>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S231>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_b5
  //  Referenced by: '<S231>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_gh
  //  Referenced by: '<S233>/S-Function'

  { 118U, 111U, 95U, 114U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S233>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S233>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S233>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_bg
  //  Referenced by: '<S233>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_gl
  //  Referenced by: '<S237>/S-Function'

  { 105U, 115U, 51U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S237>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S237>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S237>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_ef
  //  Referenced by: '<S237>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_cj
  //  Referenced by: '<S239>/S-Function'

  { 105U, 115U, 52U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S239>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S239>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S239>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_a
  //  Referenced by: '<S239>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_av
  //  Referenced by: '<S241>/S-Function'

  { 105U, 115U, 53U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S241>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S241>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S241>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_cs
  //  Referenced by: '<S241>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_nx
  //  Referenced by: '<S243>/S-Function'

  { 105U, 115U, 54U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S243>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S243>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S243>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_p
  //  Referenced by: '<S243>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_l
  //  Referenced by: '<S245>/S-Function'

  { 86U, 99U, 49U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S245>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S245>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S245>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_d
  //  Referenced by: '<S245>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_cv
  //  Referenced by: '<S247>/S-Function'

  { 86U, 99U, 50U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S247>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S247>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S247>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_fg
  //  Referenced by: '<S247>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_ce
  //  Referenced by: '<S249>/S-Function'

  { 86U, 99U, 51U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S249>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S249>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S249>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_k
  //  Referenced by: '<S249>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_cu
  //  Referenced by: '<S251>/S-Function'

  { 86U, 99U, 52U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S251>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S251>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S251>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_cu
  //  Referenced by: '<S251>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Computed Parameter: SFunction_P1_p
  //  Referenced by: '<S563>/S-Function'

  { 101U, 110U, 97U, 98U, 108U, 101U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S563>/S-Function'

  1U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S563>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S563>/S-Function'

  2U,

  // Expression: uint16(ETH_PORT)
  //  Referenced by: '<S563>/S-Function'

  2000U,

  // Expression: uint16(interrupt_pstsclr)
  //  Referenced by: '<S97>/S-Function'

  0U,

  // Expression: uint16(private_adc_delay_ns)
  //  Referenced by: '<S97>/S-Function'

  2000U,

  // Expression: uint16(highest_device_id)
  //  Referenced by: '<S97>/S-Function'

  2U,

  // Computed Parameter: SFunction_P1_lu
  //  Referenced by: '<S235>/S-Function'

  { 70U, 114U, 100U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S235>/S-Function'

  0U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S235>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S235>/S-Function'

  1U,

  // Computed Parameter: SFunction_P14_hg
  //  Referenced by: '<S235>/S-Function'

  { 101U, 109U, 112U, 116U, 121U },

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S213>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S213>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S213>/PWM'

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
  //  Referenced by: '<S315>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S315>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S315>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S505>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S505>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S505>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S507>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S507>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S507>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S509>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S509>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S509>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S511>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S511>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S511>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S517>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S517>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S517>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S519>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S519>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S519>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S521>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S521>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S521>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S523>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S523>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S523>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S529>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S529>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S529>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S531>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S531>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S531>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S533>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S533>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S533>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S535>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S535>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S535>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S541>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S541>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S541>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S543>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S543>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S543>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S545>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S545>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S545>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S547>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S547>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S547>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S553>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S553>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S553>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S555>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S555>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S555>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S557>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S557>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S557>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S559>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S559>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S559>/PWM'

  true,

  // Expression: boolean(usehist)
  //  Referenced by: '<S90>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S90>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S92>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S92>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S80>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S80>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S68>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S68>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S82>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S82>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S84>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S84>/ADC'

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

  // Expression: boolean(usehist)
  //  Referenced by: '<S76>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S76>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S94>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S94>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S70>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S70>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S78>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S78>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S72>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S72>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S74>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S74>/ADC'

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

  // Expression: boolean(usehist)
  //  Referenced by: '<S86>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S86>/ADC'

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
  //  Referenced by: '<S561>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S561>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S561>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S561>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S565>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S565>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S565>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S565>/S-Function'

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
  //  Referenced by: '<S563>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S563>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S563>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S563>/S-Function'

  false,

  // Expression: boolean(var_freq)
  //  Referenced by: '<S99>/CLK1'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S88>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S88>/ADC'

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

  // Computed Parameter: Constant_Value
  //  Referenced by: '<S184>/Constant'

  1,

  // Computed Parameter: Constant2_Value
  //  Referenced by: '<S184>/Constant2'

  -1,

  // Computed Parameter: Constant3_Value
  //  Referenced by: '<S184>/Constant3'

  1,

  // Computed Parameter: Constant4_Value_j
  //  Referenced by: '<S184>/Constant4'

  -1,

  // Computed Parameter: Constant_Value_i
  //  Referenced by: '<S466>/Constant'

  1,

  // Computed Parameter: Constant2_Value_p
  //  Referenced by: '<S466>/Constant2'

  -1,

  // Computed Parameter: Constant3_Value_g
  //  Referenced by: '<S466>/Constant3'

  1,

  // Computed Parameter: Constant4_Value_c
  //  Referenced by: '<S466>/Constant4'

  -1,

  // Start of '<S325>/Subsystem1'
  {
    // Expression: [0,0]
    //  Referenced by: '<S433>/alpha_beta'

    { 0.0, 0.0 }
  }
  ,

  // End of '<S325>/Subsystem1'

  // Start of '<S325>/Subsystem - pi//2 delay'
  {
    // Expression: [0,0]
    //  Referenced by: '<S432>/alpha_beta'

    { 0.0, 0.0 }
  }
  ,

  // End of '<S325>/Subsystem - pi//2 delay'

  // Start of '<S317>/Subsystem1'
  {
    // Expression: [0,0]
    //  Referenced by: '<S321>/alpha_beta'

    { 0.0, 0.0 }
  }
  ,

  // End of '<S317>/Subsystem1'

  // Start of '<S317>/Subsystem - pi//2 delay'
  {
    // Expression: [0,0]
    //  Referenced by: '<S320>/alpha_beta'

    { 0.0, 0.0 }
  }
  // End of '<S317>/Subsystem - pi//2 delay'
};

//
// End of automatically generated code
// Copyright imperix ltd. Switzerland 2021
// [EOF]
//
