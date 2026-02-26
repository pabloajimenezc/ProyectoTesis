//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: acg_main.cpp
//
// Code generated for Simulink model 'imperix_balance_ctrl'.
// To be implemented on the B-Box RCP or the B-Board PRO.
//
// Model version                  : 19.161
// Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
// C/C++ source code generated on : Thu Feb 26 19:55:06 2026
//
#include "User/user.h"
#include "extern_user.h"
#include "Core/core.h"
#include "imperix_balance_ctrl.h"

void VerifySimulinkTaskPeriod(double period);
void RegisterBackgroundCallback(tUserSafe (*userCallback)(void));
tUserSafe UserBackground();
volatile float SubTaskTimer[2];
volatile bool SubTaskFlag[2];
tUserSafe UserInit(void)
{
  SetCodeGeneratedFromAcg();
  VerifySimulinkTaskPeriod(0.00016666666666666666);
  RegisterBackgroundCallback(UserBackground);
  SubTaskTimer[0] = 0.0;
  SubTaskTimer[1] = 0.0;
  imperix_balance_ctrl_initialize();
  return SAFE;
}

tUserSafe SimulinkInterrupt(void)
{
  imperix_balance_ctrl_step0();
  SubTaskTimer[0] += 0.00016666666666666666;
  if (SubTaskTimer[0] >= 0.0016666666666666668) {
    SubTaskTimer[0] = SubTaskTimer[0]-0.0016666666666666668;
    SubTaskFlag[0] = true;
  }

  SubTaskTimer[1] += 0.00016666666666666666;
  if (SubTaskTimer[1] >= 0.0025) {
    SubTaskTimer[1] = SubTaskTimer[1]-0.0025;
    SubTaskFlag[1] = true;
  }

  return SAFE;
}

tUserSafe UserBackground()
{
  if (SubTaskFlag[0]) {
    imperix_balance_ctrl_step1();
    SubTaskFlag[0] = false;
  } else if (SubTaskFlag[1]) {
    imperix_balance_ctrl_step2();
    SubTaskFlag[1] = false;
  }

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
