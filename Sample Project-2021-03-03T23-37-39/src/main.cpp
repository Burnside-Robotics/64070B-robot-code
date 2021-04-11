/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\willi                                            */
/*    Created:      Sat Apr 10 2021                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Controller1          controller                    
// motor_left           motor         1               
// motor_right          motor         10              
// ---- END VEXCODE CONFIGURED DEVICES ----

// VEX V5 C++ Project
#include "vex.h"





//#region config_globals

//#endregion config_globals

using namespace vex;

int main(void) {
    while(true) {
        motor_left.spin(vex::directionType::fwd, Controller1.Axis3.position(vex::percentUnits::pct), vex::velocityUnits::pct);
        motor_right.spin(vex::directionType::rev, Controller1.Axis2.position(vex::percentUnits::pct), vex::velocityUnits::pct);
    }
}

