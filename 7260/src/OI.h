/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <Buttons/JoystickButton.h>
#include <Joystick.h>


class OI {
public:
	OI();
	frc::Joystick& GetJoystick();
	frc::Joystick& GetController();

private:
	frc::Joystick m_joystick{0};
	frc::JoystickButton j_12{&m_joystick, 12};
	frc::Joystick m_controller{1};
	frc::JoystickButton c_6{&m_controller, 6};


};
