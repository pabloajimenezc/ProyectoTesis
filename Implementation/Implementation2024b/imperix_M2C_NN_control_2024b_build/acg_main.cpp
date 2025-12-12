//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: acg_main.cpp
//
// Code generated for Simulink model 'imperix_M2C_NN_control_2024b'.
// To be implemented on the B-Box RCP or the B-Board PRO.
//
// Model version                  : 19.18
// Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
// C/C++ source code generated on : Thu Dec 11 16:53:45 2025
//
#include "User/user.h"
#include "extern_user.h"
#include "Core/core.h"
#include "imperix_M2C_NN_control_2024b.h"

void VerifySimulinkTaskPeriod(double period);
void RegisterBackgroundCallback(tUserSafe (*userCallback)(void));
tUserSafe UserBackground();
volatile float SubTaskTimer[2];
volatile bool SubTaskFlag[2];
tUserSafe UserInit(void)
{
  SetCodeGeneratedFromAcg();
  VerifySimulinkTaskPeriod(8.3333333333333331E-5);
  RegisterBackgroundCallback(UserBackground);
  SubTaskTimer[0] = 0.0;
  SubTaskTimer[1] = 0.0;
  imperix_M2C_NN_control_2024b_initialize();
  return SAFE;
}

tUserSafe SimulinkInterrupt(void)
{
  imperix_M2C_NN_control_2024b_step0();
  SubTaskTimer[0] += 8.3333333333333331E-5;
  if (SubTaskTimer[0] >= 0.00016666666666666666) {
    SubTaskTimer[0] = SubTaskTimer[0]-0.00016666666666666666;
    SubTaskFlag[0] = true;
  }

  SubTaskTimer[1] += 8.3333333333333331E-5;
  if (SubTaskTimer[1] >= 0.001) {
    SubTaskTimer[1] = SubTaskTimer[1]-0.001;
    SubTaskFlag[1] = true;
  }

  return SAFE;
}

tUserSafe UserBackground()
{
  if (SubTaskFlag[0]) {
    imperix_M2C_NN_control_2024b_step1();
    SubTaskFlag[0] = false;
  } else if (SubTaskFlag[1]) {
    imperix_M2C_NN_control_2024b_step2();
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
