#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
motor leftMotorA = motor(PORT7, ratio18_1, false);
motor leftMotorB = motor(PORT8, ratio18_1, false);
motor leftMotorC = motor(PORT9, ratio18_1, false);
motor leftMotorD = motor(PORT10, ratio18_1, false);
motor_group LeftDrive = motor_group(leftMotorA, leftMotorB, leftMotorC, leftMotorD);

motor rightMotorA = motor(PORT1, ratio18_1, true); 
motor rightMotorB = motor(PORT2, ratio18_1, true); 
motor rightMotorC = motor(PORT3, ratio18_1, true);
motor rightMotorD = motor(PORT4, ratio18_1, true);
motor_group RightDrive = motor_group(rightMotorA, rightMotorB, rightMotorC, rightMotorD);

motor intakeL = motor(PORT20, ratio18_1, true);
motor intakeR = motor(PORT11, ratio18_1, false);

controller Controller1 = controller();
// VEXcode generated functions



/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  
}