/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "DriveTrain.h"

#include <cmath>

#include <Joystick.h>

#include "../Commands/DriveWithJoystick.h"

DriveTrain::DriveTrain()
    : frc::Subsystem("DriveTrain") {
	// AddChild("Front Left CIM", m_frontLeftCIM);
	// AddChild("Front Right CIM", m_frontRightCIM);
	// AddChild("Back Left CIM", m_backLeftCIM);
	// AddChild("Back Right CIM", m_backRightCIM);

	// Configure the DifferentialDrive to reflect the fact that all our
	// motors are wired backwards and our drivers sensitivity preferences.
	m_robotDrive.SetSafetyEnabled(false);
	m_robotDrive.SetExpiration(0.1);
	m_robotDrive.SetMaxOutput(1.0);
//	m_leftCIM.SetInverted(true);
//	m_rightCIM.SetInverted(true);


}

void DriveTrain::InitDefaultCommand() {
	SetDefaultCommand(new DriveWithJoystick());
}

void DriveTrain::ArcadeDrive(double leftAxis, double rightAxis) {
	m_robotDrive.ArcadeDrive(leftAxis, rightAxis);
}

void DriveTrain::Stop() {
	m_robotDrive.ArcadeDrive(0.0, 0.0);
}

