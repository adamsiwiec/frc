/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <Commands/Subsystem.h>
#include <Drive/DifferentialDrive.h>
#include <Spark.h>
#include <SpeedControllerGroup.h>

namespace frc {
class Joystick;
}  // namespace frc

/**
 * The DriveTrain subsystem controls the robot's chassis and reads in
 * information about it's speed and position.
 */
class DriveTrain : public frc::Subsystem {
public:
	DriveTrain();

	/**
	 * When other commands aren't using the drivetrain, allow tank drive
	 * with
	 * the joystick.
	 */
	void InitDefaultCommand();

	/**
	 * @param leftAxis Left sides value
	 * @param rightAxis Right sides value
	 */
	void ArcadeDrive(double leftAxis, double rightAxis);

	/**
	 * Stop the drivetrain from moving.
	 */
	void Stop();


private:
	// Subsystem devices
	frc::Spark m_leftCIM{1};
	frc::Spark m_rightCIM{2};



	frc::DifferentialDrive m_robotDrive{m_leftCIM, m_rightCIM};

};
