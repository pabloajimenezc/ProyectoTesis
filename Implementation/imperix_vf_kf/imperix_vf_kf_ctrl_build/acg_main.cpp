//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: acg_main.cpp
//
// Code generated for Simulink model 'imperix_vf_kf_ctrl'.
// To be implemented on the B-Box RCP or the B-Board PRO.
//
// Model version                  : 19.101
// Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
// C/C++ source code generated on : Tue Feb  3 17:07:16 2026
//
#include "User/user.h"
#include "extern_user.h"
#include "Core/core.h"
#include "imperix_vf_kf_ctrl.h"

void VerifySimulinkTaskPeriod(double period);
tUserSafe UserInit(void)
{
  SetCodeGeneratedFromAcg();
  VerifySimulinkTaskPeriod(0.00016666666666666666);
  imperix_vf_kf_ctrl_initialize();
  return SAFE;
}

tUserSafe SimulinkInterrupt(void)
{
  imperix_vf_kf_ctrl_step();
  return SAFE;
}

void UserError(tErrorSource source)
{
}

//
// End of automatically generated code
// Copyright imperix ltd. Switzerland 2021
// [EOF]
//
