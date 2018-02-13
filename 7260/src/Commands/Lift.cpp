/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Lift.h"
#include "../Robot.h"

Lift::Lift() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(&Robot::pneumatics);

}

// Called just before this Command runs the first time
void Lift::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void Lift::Execute() {
	auto& controller = Robot::oi.GetController();
	Robot::pneumatics.Start(controller.GetRawAxis(5));




}

// Make this return true when this Command no longer needs to run execute()
bool Lift::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void Lift::End() {
	Robot::pneumatics.Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Lift::Interrupted() {

}
