/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "OI.h"

#include "Commands/DriveForward.h"
#include "Commands/Lift.h"
#include "Commands/DriveWithJoystick.h"
#include "SmartDashboard/SmartDashboard.h"


OI::OI() {
	c_6.toggleWhenPressed(new Lift());
	j_12.toggleWhenPressed(new DriveWithJoystick());


	// SmartDashboard Buttons
	frc::SmartDashboard::PutData("Drive Forward", new DriveForward(2.25));
	frc::SmartDashboard::PutData("Drive Backward", new DriveForward(-2.25));
	}

frc::Joystick& OI::GetJoystick() {
	return m_joystick;
}

frc::Joystick& OI::GetController(){
	return m_controller;
}
