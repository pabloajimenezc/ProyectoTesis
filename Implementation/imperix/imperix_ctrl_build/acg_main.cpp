//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: acg_main.cpp
//
// Code generated for Simulink model 'imperix_ctrl'.
// To be implemented on the B-Box RCP or the B-Board PRO.
//
// Model version                  : 19.24
// Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
// C/C++ source code generated on : Wed Jan  7 19:32:35 2026
//
#include "User/user.h"
#include "extern_user.h"
#include "Core/core.h"
#include "imperix_ctrl.h"

void VerifySimulinkTaskPeriod(double period);
void RegisterBackgroundCallback(tUserSafe (*userCallback)(void));
tUserSafe UserBackground();
volatile float SubTaskTimer[1];
volatile bool SubTaskFlag[1];
tUserSafe UserInit(void)
{
  SetCodeGeneratedFromAcg();
  VerifySimulinkTaskPeriod(0.00016666666666666666);
  RegisterBackgroundCallback(UserBackground);
  SubTaskTimer[0] = 0.0;
  imperix_ctrl_initialize();
  return SAFE;
}

tUserSafe SimulinkInterrupt(void)
{
  imperix_ctrl_step0();
  SubTaskTimer[0] += 0.00016666666666666666;
  if (SubTaskTimer[0] >= 0.0016666666666666668) {
    SubTaskTimer[0] = SubTaskTimer[0]-0.0016666666666666668;
    SubTaskFlag[0] = true;
  }

  return SAFE;
}

tUserSafe UserBackground()
{
  if (SubTaskFlag[0]) {
    imperix_ctrl_step1();
    SubTaskFlag[0] = false;
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
