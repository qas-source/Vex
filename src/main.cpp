/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       qasimebsim                                                */
/*    Created:      Sun Oct 18 2020                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Controller1          controller                    
// Drivetrain           drivetrain    1, 2, 3, 4      
// AllSeeing            vision        5               
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;


void spin () {

  Brain.Screen.print("hello");
}



int main() {
  thread(spin).detach();
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  // Drivetrain.driveFor(forward, 13, mm);
  while (true) {
    Controller1.ButtonDown.pressed(spin);
    wait(0.05, seconds);
  }
  
}
