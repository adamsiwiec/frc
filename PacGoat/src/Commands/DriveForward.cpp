/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "DriveForward.h"

#include <cmath>
#include <Timer.h>

#include "../Robot.h"

void DriveForward::init(double maxSpeed) {
	Requires(&Robot::drivetrain);
	m_driveForwardSpeed = maxSpeed;
	Timer time = new Timer();
}

DriveForward::DriveForward() {
	init(0.5);
}

DriveForward::DriveForward(double maxSpeed) {
	init(speed);
}


// Called just before this Command runs the first time
void DriveForward::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void DriveForward::Execute() {

		time.Start();
		Robot::drivetrain.ArcadeDrive(m_driveForwardSpeed, m_driveForwardSpeed);

}

// Make this return true when this Command no longer needs to run execute()
bool DriveForward::IsFinished() {
	return time.Get() > 5;
}

// Called once after isFinished returns true
void DriveForward::End() {
	Robot::drivetrain.Stop();
}
