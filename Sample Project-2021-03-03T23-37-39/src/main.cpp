/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\cheni                                            */
/*    Created:      Thu Mar 04 2021                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;
controller Controller1;

motor Ldrive(PORT1, ratio18_1);
motor Rdrive(PORT10, ratio18_1);

void MoveMotors(float Iinput, float rInput) {
  Ldrive.spin(fwd, Iinput, pct);
  Rdrive.spin(fwd, rInput, pct);
}

void usercontrol(void)  {
  while (true) {
    MoveMotors(Controller1.Axis3.value(), Controller1.Axis2.value());
  }

}

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  
}
