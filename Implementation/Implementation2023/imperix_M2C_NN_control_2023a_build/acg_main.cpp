//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: acg_main.cpp
//
// Code generated for Simulink model 'imperix_M2C_NN_control_2023a'.
// To be implemented on the B-Box RCP or the B-Board PRO.
//
// Model version                  : 15.0
// Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
// C/C++ source code generated on : Mon Aug  4 22:20:24 2025
//
#include "User/user.h"
#include "extern_user.h"
#include "Core/core.h"
#include "imperix_M2C_NN_control_2023a.h"

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
  imperix_M2C_NN_control_2023a_initialize();
  return SAFE;
}

tUserSafe SimulinkInterrupt(void)
{
  imperix_M2C_NN_control_2023a_step0();
  SubTaskTimer[0] += 0.00016666666666666666;
  if (SubTaskTimer[0] >= 0.001) {
    SubTaskTimer[0] = SubTaskTimer[0]-0.001;
    SubTaskFlag[0] = true;
  }

  return SAFE;
}

tUserSafe UserBackground()
{
  if (SubTaskFlag[0]) {
    imperix_M2C_NN_control_2023a_step1();
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
