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
// Model version                  : 19.10
// Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
// C/C++ source code generated on : Sat Dec 13 16:25:19 2025
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
  //    '<S16>/Gain'
  //    '<S132>/Gain1'
  //    '<S132>/Gain2'

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
  //    '<S23>/Unit Delay1'
  //    '<S25>/Input format'
  //    '<S25>/Saturation'
  //    '<S25>/White noise'
  //    '<S25>/Gain7'
  //    '<S32>/vx'
  //    '<S35>/Constant1'
  //    '<S36>/Gain'
  //    '<S42>/Gain1'
  //    '<S42>/Gain3'
  //    '<S42>/Gain4'

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
  //    '<S1>/Gain2'
  //    '<S1>/Gain4'
  //    '<S33>/Gain'

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
  //    '<S25>/Input format'
  //    '<S25>/Gain5'

  {
    { 0.66666666666666663, 0.0, -0.33333333333333331, 0.57735026918962573,
      -0.33333333333333331, -0.57735026918962573 },

    { 1.0, -0.5, -0.5, 0.0, 0.8660254037844386, -0.8660254037844386 },

    { 0.0, 1.0, -1.0, 0.0 }
  },

  // Variable: FOC
  //  Referenced by:
  //    '<S1>/IM references'
  //    '<S104>/Kb'
  //    '<S109>/Integral Gain'
  //    '<S117>/Proportional Gain'
  //    '<S119>/Saturation'
  //    '<S218>/Kb'
  //    '<S223>/Integral Gain'
  //    '<S231>/Proportional Gain'
  //    '<S233>/Saturation'

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
  //    '<S292>/Kb'
  //    '<S297>/Integral Gain'
  //    '<S305>/Proportional Gain'
  //    '<S307>/Saturation'
  //    '<S344>/Kb'
  //    '<S349>/Integral Gain'
  //    '<S357>/Proportional Gain'
  //    '<S359>/Saturation'

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
  //    '<S413>/Integral Gain'
  //    '<S421>/Proportional Gain'
  //    '<S423>/Saturation'
  //    '<S408>/DeadZone'

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
  //    '<S23>/Gain1'
  //    '<S23>/Gain2'
  //    '<S169>/Integral Gain'
  //    '<S177>/Proportional Gain'
  //    '<S179>/Saturation'
  //    '<S164>/DeadZone'

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
  //    '<S25>/Input format'
  //    '<S25>/Gain'

  { 10.758793499999992, 10.758793499999992, 10.758793499999992,
    10.758793499999992, 10.758793499999992, 10.758793499999992, 4.2,
    5.3861678880387434, 5.3861678880387434, 165.26330246731402,
    165.26330246731402, 1335.2038392310212, 1335.2038392310212,
    157.07963267948966 },

  // Variable: Ymax
  //  Referenced by: '<S25>/Gain4'

  { 8.5, 8.5, 260.0 },

  // Mask Parameter: AlphaBetaZerotodq0_Alignment
  //  Referenced by: '<S434>/Constant'

  1.0,

  // Mask Parameter: dq0toAlphaBetaZero_Alignment
  //  Referenced by: '<S265>/Constant'

  1.0,

  // Mask Parameter: dq0toAlphaBetaZero_Alignment_k
  //  Referenced by: '<S257>/Constant'

  1.0,

  // Mask Parameter: dq0toAlphaBetaZero1_Alignment
  //  Referenced by: '<S374>/Constant'

  2.0,

  // Mask Parameter: PIDController_InitialConditionF
  //  Referenced by: '<S172>/Integrator'

  0.0,

  // Mask Parameter: PCCPI_InitialConditionForIntegr
  //  Referenced by: '<S416>/Integrator'

  0.0,

  // Mask Parameter: SpeedPI_InitialConditionForInte
  //  Referenced by: '<S226>/Integrator'

  0.0,

  // Mask Parameter: FluxPI_InitialConditionForInteg
  //  Referenced by: '<S112>/Integrator'

  0.0,

  // Mask Parameter: MCCPId_InitialConditionForInteg
  //  Referenced by: '<S300>/Integrator'

  0.0,

  // Mask Parameter: MCCPIq_InitialConditionForInteg
  //  Referenced by: '<S352>/Integrator'

  0.0,

  // Mask Parameter: CompareToConstant_const
  //  Referenced by: '<S436>/Constant'

  1.0,

  // Mask Parameter: CompareToConstant1_const
  //  Referenced by: '<S437>/Constant'

  2.0,

  // Mask Parameter: CompareToConstant_const_h
  //  Referenced by: '<S370>/Constant'

  1.0,

  // Mask Parameter: CompareToConstant1_const_f
  //  Referenced by: '<S371>/Constant'

  2.0,

  // Mask Parameter: CompareToConstant_const_m
  //  Referenced by: '<S258>/Constant'

  1.0,

  // Mask Parameter: CompareToConstant1_const_p
  //  Referenced by: '<S259>/Constant'

  2.0,

  // Mask Parameter: CompareToConstant_const_d
  //  Referenced by: '<S375>/Constant'

  1.0,

  // Mask Parameter: CompareToConstant1_const_l
  //  Referenced by: '<S376>/Constant'

  2.0,

  // Expression: [0,0]
  //  Referenced by: '<S377>/alpha_beta'

  { 0.0, 0.0 },

  // Expression: [0,0]
  //  Referenced by: '<S378>/alpha_beta'

  { 0.0, 0.0 },

  // Expression: [0,0]
  //  Referenced by: '<S438>/dq'

  { 0.0, 0.0 },

  // Expression: [0,0]
  //  Referenced by: '<S439>/dq'

  { 0.0, 0.0 },

  // Expression: 0
  //  Referenced by: '<S162>/Constant1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S406>/Constant1'

  0.0,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S48>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S50>/ADC'

  0.00016666666666666666,

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
  //  Referenced by: '<S58>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S60>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S62>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S64>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S66>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S68>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S70>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S72>/ADC'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S501>/S-Function'

  0.00016666666666666666,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S505>/S-Function'

  0.00016666666666666666,

  // Expression: 1e-3
  //  Referenced by: '<S1>/Add Constant'

  0.001,

  // Expression: double(CTRLPERIOD(1))
  //  Referenced by: '<S503>/S-Function'

  0.00016666666666666666,

  // Expression: 0
  //  Referenced by:

  0.0,

  // Computed Parameter: Integrator_gainval
  //  Referenced by: '<S172>/Integrator'

  0.00016666666666666666,

  // Computed Parameter: Integrator_gainval_m
  //  Referenced by: '<S416>/Integrator'

  0.00016666666666666666,

  // Computed Parameter: Integrator_gainval_k
  //  Referenced by: '<S226>/Integrator'

  0.00016666666666666666,

  // Expression: 0
  //  Referenced by:

  0.0,

  // Computed Parameter: Integrator_gainval_o
  //  Referenced by: '<S112>/Integrator'

  0.00016666666666666666,

  // Expression: -1
  //  Referenced by: '<S37>/Gain2'

  -1.0,

  // Expression: [ 1   -1/2   -1/2; 0   sqrt(3)/2   -sqrt(3)/2; 1/2  1/2  1/2 ]
  //  Referenced by: '<S435>/Gain3'

  { 1.0, 0.0, 0.5, -0.5, 0.8660254037844386, 0.5, -0.5, -0.8660254037844386, 0.5
  },

  // Expression: 2/3
  //  Referenced by: '<S435>/Gain1'

  0.66666666666666663,

  // Expression: 0
  //  Referenced by:

  0.0,

  // Computed Parameter: Integrator_gainval_c
  //  Referenced by: '<S300>/Integrator'

  0.00016666666666666666,

  // Computed Parameter: Integrator_gainval_p
  //  Referenced by: '<S352>/Integrator'

  0.00016666666666666666,

  // Expression: 2
  //  Referenced by: '<S33>/Gain1'

  2.0,

  // Expression: 0
  //  Referenced by: '<S132>/Unit Delay1'

  0.0,

  // Expression: 0
  //  Referenced by:

  0.0,

  // Expression: 0
  //  Referenced by:

  0.0,

  // Expression: 40*10
  //  Referenced by: '<S25>/Switch'

  400.0,

  // Expression: [1; -1]
  //  Referenced by: '<S25>/Gain3'

  { 1.0, -1.0 },

  // Expression: [ 1   0   1; -1/2  sqrt(3)/2   1; -1/2  -sqrt(3)/2  1 ]
  //  Referenced by: '<S262>/Gain3'

  { 1.0, -0.5, -0.5, 0.0, 0.8660254037844386, -0.8660254037844386, 1.0, 1.0, 1.0
  },

  // Expression: M2C.A'
  //  Referenced by: '<S32>/Gain2'

  { 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, -1.0, -0.0, -0.0,
    -1.0, -0.0, -0.0, -0.0, -1.0, -0.0, -0.0, -1.0, -0.0, -0.0, -0.0, -1.0, -0.0,
    -0.0, -1.0 },

  // Expression: 1
  //  Referenced by: '<S1>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S162>/Clamping_zero'

  0.0,

  // Expression: PHASE
  //  Referenced by: '<S27>/phase'

  0.0,

  // Expression: PHASE
  //  Referenced by: '<S244>/phase'

  0.75,

  // Expression: PHASE
  //  Referenced by: '<S245>/phase'

  0.5,

  // Expression: PHASE
  //  Referenced by: '<S246>/phase'

  0.25,

  // Expression: PHASE
  //  Referenced by: '<S247>/phase'

  0.0,

  // Expression: [ 1   0   1; -1/2  sqrt(3)/2   1; -1/2  -sqrt(3)/2  1 ]
  //  Referenced by: '<S256>/Gain3'

  { 1.0, -0.5, -0.5, 0.0, 0.8660254037844386, -0.8660254037844386, 1.0, 1.0, 1.0
  },

  // Expression: -1
  //  Referenced by: '<S31>/Gain'

  -1.0,

  // Expression: -1
  //  Referenced by: '<S31>/Gain8'

  -1.0,

  // Expression: 0
  //  Referenced by: '<S406>/Clamping_zero'

  0.0,

  // Expression: PHASE
  //  Referenced by: '<S440>/phase'

  0.75,

  // Expression: PHASE
  //  Referenced by: '<S441>/phase'

  0.5,

  // Expression: PHASE
  //  Referenced by: '<S442>/phase'

  0.25,

  // Expression: PHASE
  //  Referenced by: '<S443>/phase'

  0.0,

  // Expression: -1
  //  Referenced by: '<S39>/Gain1'

  -1.0,

  // Expression: PHASE
  //  Referenced by: '<S452>/phase'

  0.75,

  // Expression: PHASE
  //  Referenced by: '<S453>/phase'

  0.5,

  // Expression: PHASE
  //  Referenced by: '<S454>/phase'

  0.25,

  // Expression: PHASE
  //  Referenced by: '<S455>/phase'

  0.0,

  // Expression: -1
  //  Referenced by: '<S40>/Gain3'

  -1.0,

  // Expression: PHASE
  //  Referenced by: '<S464>/phase'

  0.75,

  // Expression: PHASE
  //  Referenced by: '<S465>/phase'

  0.5,

  // Expression: PHASE
  //  Referenced by: '<S466>/phase'

  0.25,

  // Expression: PHASE
  //  Referenced by: '<S467>/phase'

  0.0,

  // Expression: -1
  //  Referenced by: '<S41>/Gain3'

  -1.0,

  // Expression: PHASE
  //  Referenced by: '<S476>/phase'

  0.75,

  // Expression: PHASE
  //  Referenced by: '<S477>/phase'

  0.5,

  // Expression: PHASE
  //  Referenced by: '<S478>/phase'

  0.25,

  // Expression: PHASE
  //  Referenced by: '<S479>/phase'

  0.0,

  // Expression: PHASE
  //  Referenced by: '<S488>/phase'

  0.75,

  // Expression: PHASE
  //  Referenced by: '<S489>/phase'

  0.5,

  // Expression: PHASE
  //  Referenced by: '<S490>/phase'

  0.25,

  // Expression: PHASE
  //  Referenced by: '<S491>/phase'

  0.0,

  // Expression: 2/3*pi*0
  //  Referenced by: '<S34>/IC'

  0.0,

  // Expression: single(deadtime)
  //  Referenced by: '<S191>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S191>/PWM'

  1.0F,

  // Expression: single(phase)
  //  Referenced by: '<S191>/PWM'

  0.0F,

  // Expression: single(deadtime)
  //  Referenced by: '<S249>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S249>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S249>/PWM'

  0.75F,

  // Expression: single(deadtime)
  //  Referenced by: '<S251>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S251>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S251>/PWM'

  0.5F,

  // Expression: single(deadtime)
  //  Referenced by: '<S253>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S253>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S253>/PWM'

  0.25F,

  // Expression: single(deadtime)
  //  Referenced by: '<S255>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S255>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S255>/PWM'

  0.0F,

  // Expression: single(deadtime)
  //  Referenced by: '<S445>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S445>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S445>/PWM'

  0.75F,

  // Expression: single(deadtime)
  //  Referenced by: '<S447>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S447>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S447>/PWM'

  0.5F,

  // Expression: single(deadtime)
  //  Referenced by: '<S449>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S449>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S449>/PWM'

  0.25F,

  // Expression: single(deadtime)
  //  Referenced by: '<S451>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S451>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S451>/PWM'

  0.0F,

  // Expression: single(deadtime)
  //  Referenced by: '<S457>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S457>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S457>/PWM'

  0.75F,

  // Expression: single(deadtime)
  //  Referenced by: '<S459>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S459>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S459>/PWM'

  0.5F,

  // Expression: single(deadtime)
  //  Referenced by: '<S461>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S461>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S461>/PWM'

  0.25F,

  // Expression: single(deadtime)
  //  Referenced by: '<S463>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S463>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S463>/PWM'

  0.0F,

  // Expression: single(deadtime)
  //  Referenced by: '<S469>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S469>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S469>/PWM'

  0.75F,

  // Expression: single(deadtime)
  //  Referenced by: '<S471>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S471>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S471>/PWM'

  0.5F,

  // Expression: single(deadtime)
  //  Referenced by: '<S473>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S473>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S473>/PWM'

  0.25F,

  // Expression: single(deadtime)
  //  Referenced by: '<S475>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S475>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S475>/PWM'

  0.0F,

  // Expression: single(deadtime)
  //  Referenced by: '<S481>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S481>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S481>/PWM'

  0.75F,

  // Expression: single(deadtime)
  //  Referenced by: '<S483>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S483>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S483>/PWM'

  0.5F,

  // Expression: single(deadtime)
  //  Referenced by: '<S485>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S485>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S485>/PWM'

  0.25F,

  // Expression: single(deadtime)
  //  Referenced by: '<S487>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S487>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S487>/PWM'

  0.0F,

  // Expression: single(deadtime)
  //  Referenced by: '<S493>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S493>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S493>/PWM'

  0.75F,

  // Expression: single(deadtime)
  //  Referenced by: '<S495>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S495>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S495>/PWM'

  0.5F,

  // Expression: single(deadtime)
  //  Referenced by: '<S497>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S497>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S497>/PWM'

  0.25F,

  // Expression: single(deadtime)
  //  Referenced by: '<S499>/PWM'

  1.0E-6F,

  // Expression: single(duty)
  //  Referenced by: '<S499>/PWM'

  0.0F,

  // Expression: single(phase)
  //  Referenced by: '<S499>/PWM'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S48>/ADC'

  0.00045776F,

  // Expression: single(offset)
  //  Referenced by: '<S48>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S50>/ADC'

  0.027466F,

  // Expression: single(offset)
  //  Referenced by: '<S50>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S52>/ADC'

  0.027466F,

  // Expression: single(offset)
  //  Referenced by: '<S52>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S54>/ADC'

  0.027466F,

  // Expression: single(offset)
  //  Referenced by: '<S54>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S56>/ADC'

  0.027466F,

  // Expression: single(offset)
  //  Referenced by: '<S56>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S58>/ADC'

  0.027466F,

  // Expression: single(offset)
  //  Referenced by: '<S58>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S60>/ADC'

  0.00045776F,

  // Expression: single(offset)
  //  Referenced by: '<S60>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S62>/ADC'

  0.00045776F,

  // Expression: single(offset)
  //  Referenced by: '<S62>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S64>/ADC'

  0.00045776F,

  // Expression: single(offset)
  //  Referenced by: '<S64>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S66>/ADC'

  0.012207F,

  // Expression: single(offset)
  //  Referenced by: '<S66>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S68>/ADC'

  0.00045776F,

  // Expression: single(offset)
  //  Referenced by: '<S68>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S70>/ADC'

  0.00045776F,

  // Expression: single(offset)
  //  Referenced by: '<S70>/ADC'

  0.0F,

  // Expression: single(gain)
  //  Referenced by: '<S72>/ADC'

  0.027466F,

  // Expression: single(offset)
  //  Referenced by: '<S72>/ADC'

  0.0F,

  // Expression: single(INITIALVAL)
  //  Referenced by: '<S501>/S-Function'

  0.0F,

  // Expression: single(VAL_MIN)
  //  Referenced by: '<S501>/S-Function'

  0.0F,

  // Expression: single(VAL_MAX)
  //  Referenced by: '<S501>/S-Function'

  1.0F,

  // Expression: single(0)
  //  Referenced by: '<S501>/S-Function'

  0.0F,

  // Expression: single(0)
  //  Referenced by: '<S501>/S-Function'

  0.0F,

  // Expression: single(INITIALVAL)
  //  Referenced by: '<S505>/S-Function'

  0.0F,

  // Expression: single(VAL_MIN)
  //  Referenced by: '<S505>/S-Function'

  -1.0F,

  // Expression: single(VAL_MAX)
  //  Referenced by: '<S505>/S-Function'

  1.0F,

  // Expression: single(0)
  //  Referenced by: '<S505>/S-Function'

  0.0F,

  // Expression: single(0)
  //  Referenced by: '<S505>/S-Function'

  0.0F,

  // Expression: single(INITIALVAL)
  //  Referenced by: '<S503>/S-Function'

  0.0F,

  // Expression: single(VAL_MIN)
  //  Referenced by: '<S503>/S-Function'

  0.0F,

  // Expression: single(VAL_MAX)
  //  Referenced by: '<S503>/S-Function'

  0.0F,

  // Expression: single(0)
  //  Referenced by: '<S503>/S-Function'

  0.0F,

  // Expression: single(0)
  //  Referenced by: '<S503>/S-Function'

  0.0F,

  // Expression: single(private_nb_oversamples)
  //  Referenced by: '<S75>/S-Function'

  0.0F,

  // Expression: single(interrupt_phase)
  //  Referenced by: '<S75>/S-Function'

  0.5F,

  // Expression: single(frequency)
  //  Referenced by: '<S77>/CLK1'

  6000.0F,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S501>/S-Function'

  1000000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S505>/S-Function'

  1000000U,

  // Expression: uint32(CAN_BAUDRATE)
  //  Referenced by: '<S503>/S-Function'

  1000000U,

  // Expression: int16(lane)
  //  Referenced by: '<S191>/PWM'

  8,

  // Expression: int16(carrier)
  //  Referenced by: '<S191>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S191>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S191>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S191>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S191>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S249>/PWM'

  0,

  // Expression: int16(carrier)
  //  Referenced by: '<S249>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S249>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S249>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S249>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S249>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S251>/PWM'

  1,

  // Expression: int16(carrier)
  //  Referenced by: '<S251>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S251>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S251>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S251>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S251>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S253>/PWM'

  2,

  // Expression: int16(carrier)
  //  Referenced by: '<S253>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S253>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S253>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S253>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S253>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S255>/PWM'

  3,

  // Expression: int16(carrier)
  //  Referenced by: '<S255>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S255>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S255>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S255>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S255>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S445>/PWM'

  8,

  // Expression: int16(carrier)
  //  Referenced by: '<S445>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S445>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S445>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S445>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S445>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S447>/PWM'

  9,

  // Expression: int16(carrier)
  //  Referenced by: '<S447>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S447>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S447>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S447>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S447>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S449>/PWM'

  10,

  // Expression: int16(carrier)
  //  Referenced by: '<S449>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S449>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S449>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S449>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S449>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S451>/PWM'

  11,

  // Expression: int16(carrier)
  //  Referenced by: '<S451>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S451>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S451>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S451>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S451>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S457>/PWM'

  4,

  // Expression: int16(carrier)
  //  Referenced by: '<S457>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S457>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S457>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S457>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S457>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S459>/PWM'

  5,

  // Expression: int16(carrier)
  //  Referenced by: '<S459>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S459>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S459>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S459>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S459>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S461>/PWM'

  6,

  // Expression: int16(carrier)
  //  Referenced by: '<S461>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S461>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S461>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S461>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S461>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S463>/PWM'

  7,

  // Expression: int16(carrier)
  //  Referenced by: '<S463>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S463>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S463>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S463>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S463>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S469>/PWM'

  4,

  // Expression: int16(carrier)
  //  Referenced by: '<S469>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S469>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S469>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S469>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S469>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S471>/PWM'

  5,

  // Expression: int16(carrier)
  //  Referenced by: '<S471>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S471>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S471>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S471>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S471>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S473>/PWM'

  6,

  // Expression: int16(carrier)
  //  Referenced by: '<S473>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S473>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S473>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S473>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S473>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S475>/PWM'

  7,

  // Expression: int16(carrier)
  //  Referenced by: '<S475>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S475>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S475>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S475>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S475>/PWM'

  1,

  // Expression: int16(lane)
  //  Referenced by: '<S481>/PWM'

  12,

  // Expression: int16(carrier)
  //  Referenced by: '<S481>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S481>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S481>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S481>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S481>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S483>/PWM'

  13,

  // Expression: int16(carrier)
  //  Referenced by: '<S483>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S483>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S483>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S483>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S483>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S485>/PWM'

  14,

  // Expression: int16(carrier)
  //  Referenced by: '<S485>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S485>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S485>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S485>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S485>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S487>/PWM'

  15,

  // Expression: int16(carrier)
  //  Referenced by: '<S487>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S487>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S487>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S487>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S487>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S493>/PWM'

  0,

  // Expression: int16(carrier)
  //  Referenced by: '<S493>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S493>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S493>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S493>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S493>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S495>/PWM'

  1,

  // Expression: int16(carrier)
  //  Referenced by: '<S495>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S495>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S495>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S495>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S495>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S497>/PWM'

  2,

  // Expression: int16(carrier)
  //  Referenced by: '<S497>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S497>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S497>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S497>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S497>/PWM'

  0,

  // Expression: int16(lane)
  //  Referenced by: '<S499>/PWM'

  3,

  // Expression: int16(carrier)
  //  Referenced by: '<S499>/PWM'

  0,

  // Expression: int16(rate)
  //  Referenced by: '<S499>/PWM'

  0,

  // Expression: int16(outconf)
  //  Referenced by: '<S499>/PWM'

  1,

  // Expression: int16(outmode)
  //  Referenced by: '<S499>/PWM'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S499>/PWM'

  0,

  // Expression: int16(channel)
  //  Referenced by: '<S48>/ADC'

  3,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S48>/ADC'

  0,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S48>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S48>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S50>/ADC'

  0,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S50>/ADC'

  1,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S50>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S50>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S52>/ADC'

  2,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S52>/ADC'

  1,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S52>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S52>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S54>/ADC'

  3,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S54>/ADC'

  1,

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

  0,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S56>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S56>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S58>/ADC'

  1,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S58>/ADC'

  1,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S58>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S58>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S60>/ADC'

  2,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S60>/ADC'

  0,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S60>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S60>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S62>/ADC'

  4,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S62>/ADC'

  0,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S62>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S62>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S64>/ADC'

  5,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S64>/ADC'

  0,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S64>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S64>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S66>/ADC'

  4,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S66>/ADC'

  1,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S66>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S66>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S68>/ADC'

  0,

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
  //  Referenced by: '<S70>/ADC'

  1,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S70>/ADC'

  0,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S70>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S70>/ADC'

  1,

  // Expression: int16(channel)
  //  Referenced by: '<S72>/ADC'

  7,

  // Expression: int16(nbBbx)
  //  Referenced by: '<S72>/ADC'

  0,

  // Expression: int16(outputwidth)
  //  Referenced by: '<S72>/ADC'

  1,

  // Expression: int16(averagelength)
  //  Referenced by: '<S72>/ADC'

  1,

  // Expression: int16(DATA_TYPE)
  //  Referenced by: '<S501>/S-Function'

  1,

  // Expression: int16(DATA_TYPE)
  //  Referenced by: '<S505>/S-Function'

  1,

  // Expression: int16(DATA_TYPE)
  //  Referenced by: '<S503>/S-Function'

  1,

  // Computed Parameter: clk_id_Value
  //  Referenced by: '<S77>/clk_id'

  0,

  // Expression: int16(id)
  //  Referenced by: '<S77>/CLK1'

  0,

  // Computed Parameter: SFunction_P1
  //  Referenced by: '<S501>/S-Function'

  { 70U, 95U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S501>/S-Function'

  1U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S501>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S501>/S-Function'

  2U,

  // Expression: uint16(ETH_PORT)
  //  Referenced by: '<S501>/S-Function'

  2000U,

  // Computed Parameter: SFunction_P1_f
  //  Referenced by: '<S505>/S-Function'

  { 119U, 95U, 114U, 101U, 102U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S505>/S-Function'

  1U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S505>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S505>/S-Function'

  2U,

  // Expression: uint16(ETH_PORT)
  //  Referenced by: '<S505>/S-Function'

  2000U,

  // Computed Parameter: SFunction_P1_p
  //  Referenced by: '<S503>/S-Function'

  { 100U, 111U, 95U, 99U, 111U, 110U, 116U, 114U, 111U, 108U },

  // Expression: uint16(CAN_MB_ID)
  //  Referenced by: '<S503>/S-Function'

  1U,

  // Expression: uint16(CAN_ADDRESS)
  //  Referenced by: '<S503>/S-Function'

  0U,

  // Expression: uint16(ETH_MB_ID)
  //  Referenced by: '<S503>/S-Function'

  2U,

  // Expression: uint16(ETH_PORT)
  //  Referenced by: '<S503>/S-Function'

  2000U,

  // Expression: uint16(interrupt_pstsclr)
  //  Referenced by: '<S75>/S-Function'

  0U,

  // Expression: uint16(private_adc_delay_ns)
  //  Referenced by: '<S75>/S-Function'

  2000U,

  // Expression: uint16(highest_device_id)
  //  Referenced by: '<S75>/S-Function'

  1U,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S191>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S191>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S191>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S249>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S249>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S249>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S251>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S251>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S251>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S253>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S253>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S253>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S255>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S255>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S255>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S445>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S445>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S445>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S447>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S447>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S447>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S449>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S449>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S449>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S451>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S451>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S451>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S457>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S457>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S457>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S459>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S459>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S459>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S461>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S461>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S461>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S463>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S463>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S463>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S469>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S469>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S469>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S471>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S471>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S471>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S473>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S473>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S473>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S475>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S475>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S475>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S481>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S481>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S481>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S483>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S483>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S483>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S485>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S485>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S485>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S487>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S487>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S487>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S493>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S493>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S493>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S495>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S495>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S495>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S497>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S497>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S497>/PWM'

  true,

  // Expression: boolean(dutyrealtime)
  //  Referenced by: '<S499>/PWM'

  true,

  // Expression: boolean(phaserealtime)
  //  Referenced by: '<S499>/PWM'

  false,

  // Expression: boolean(activaterealtime)
  //  Referenced by: '<S499>/PWM'

  true,

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

  // Expression: boolean(usehist)
  //  Referenced by: '<S52>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S52>/ADC'

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
  //  Referenced by: '<S58>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S58>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S60>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S60>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S62>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S62>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S64>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S64>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S66>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S66>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S68>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S68>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S70>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S70>/ADC'

  false,

  // Expression: boolean(usehist)
  //  Referenced by: '<S72>/ADC'

  false,

  // Expression: boolean(useaverage)
  //  Referenced by: '<S72>/ADC'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S501>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S501>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S501>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S501>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S505>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S505>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S505>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S505>/S-Function'

  false,

  // Expression: boolean(CAN_ENABLED)
  //  Referenced by: '<S503>/S-Function'

  false,

  // Expression: boolean(CAN_BIG_ENDIAN)
  //  Referenced by: '<S503>/S-Function'

  false,

  // Expression: boolean(ETH_ENABLED)
  //  Referenced by: '<S503>/S-Function'

  false,

  // Expression: boolean(ETH_BIG_ENDIAN)
  //  Referenced by: '<S503>/S-Function'

  false,

  // Expression: boolean(var_freq)
  //  Referenced by: '<S77>/CLK1'

  false,

  // Computed Parameter: Constant_Value
  //  Referenced by: '<S162>/Constant'

  1,

  // Computed Parameter: Constant2_Value
  //  Referenced by: '<S162>/Constant2'

  -1,

  // Computed Parameter: Constant3_Value
  //  Referenced by: '<S162>/Constant3'

  1,

  // Computed Parameter: Constant4_Value_j
  //  Referenced by: '<S162>/Constant4'

  -1,

  // Computed Parameter: Constant_Value_i
  //  Referenced by: '<S406>/Constant'

  1,

  // Computed Parameter: Constant2_Value_p
  //  Referenced by: '<S406>/Constant2'

  -1,

  // Computed Parameter: Constant3_Value_g
  //  Referenced by: '<S406>/Constant3'

  1,

  // Computed Parameter: Constant4_Value_c
  //  Referenced by: '<S406>/Constant4'

  -1,

  // Start of '<S265>/Subsystem1'
  {
    // Expression: [0,0]
    //  Referenced by: '<S373>/alpha_beta'

    { 0.0, 0.0 }
  }
  ,

  // End of '<S265>/Subsystem1'

  // Start of '<S265>/Subsystem - pi//2 delay'
  {
    // Expression: [0,0]
    //  Referenced by: '<S372>/alpha_beta'

    { 0.0, 0.0 }
  }
  ,

  // End of '<S265>/Subsystem - pi//2 delay'

  // Start of '<S257>/Subsystem1'
  {
    // Expression: [0,0]
    //  Referenced by: '<S261>/alpha_beta'

    { 0.0, 0.0 }
  }
  ,

  // End of '<S257>/Subsystem1'

  // Start of '<S257>/Subsystem - pi//2 delay'
  {
    // Expression: [0,0]
    //  Referenced by: '<S260>/alpha_beta'

    { 0.0, 0.0 }
  }
  // End of '<S257>/Subsystem - pi//2 delay'
};

//
// End of automatically generated code
// Copyright imperix ltd. Switzerland 2021
// [EOF]
//
