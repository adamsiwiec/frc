/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <Commands/Command.h>

/**
 * This command drives the robot over a given distance with simple proportional
 * control This command will drive a given distance limiting to a maximum speed.
 */
class DriveForward : public frc::Command {
public:
	DriveForward();
	//explicit DriveForward(double dist);
	//DriveForward(double dist, double maxSpeed);
	explicit DriveForward(double maxSpeed);
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;

private:
	double m_driveForwardSpeed;


	void init(double maxSpeed);
};
