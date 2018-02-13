/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Robot.h"

#include <iostream>
//#include <Scheduler.h>
#include <Commands/DriveForward.h>
#include <LiveWindow/LiveWindow.h>
#include <SmartDashboard/SmartDashboard.h>

DriveTrain Robot::drivetrain;
Pneumatics Robot::pneumatics;
OI Robot::oi;
Command* autonomous;
void Robot::RobotInit() {
	// Show what command your subsystem is running on the SmartDashboard
	frc::SmartDashboard::PutData(&drivetrain);
	frc::SmartDashboard::PutData(&pneumatics);
	autonomous = new DriveForward();

}

void Robot::AutonomousInit() {
	autonomous->Start();
}

void Robot::AutonomousPeriodic() {
//	frc::Scheduler::GetInstance()->Run();
	Log();
}

void Robot::TeleopInit() {
	// This makes sure that the autonomous stops running when
	// teleop starts running. If you want the autonomous to
	// continue until interrupted by another command, remove
	// this line or comment it out.
	if (autonomous != nullptr) {
		autonomous->Cancel();
	}
	std::cout << "Starting Teleop" << std::endl;
}

void Robot::TeleopPeriodic() {
//	frc::Scheduler::GetInstance()->Run();
	Log();
}

void Robot::TestPeriodic() {}

void Robot::DisabledInit() {
}

void Robot::DisabledPeriodic() {
	Log();
}

/**
 * Log interesting values to the SmartDashboard.
 */
void Robot::Log() {
	}

START_ROBOT_CLASS(Robot)
