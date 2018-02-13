/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include <Commands/DriveAutonomous.h>
#include "../Robot.h"
#include "DriveForward.h"

DriveAutonomous::DriveAutonomous() {

	AddSequential(new DriveForward(0.3));
}
