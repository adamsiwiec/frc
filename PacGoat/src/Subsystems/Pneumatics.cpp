/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Pneumatics.h"
#include <Solenoid.h>
#include <SmartDashboard/SmartDashboard.h>

Pneumatics::Pneumatics()
    : frc::Subsystem("Pneumatics") {
}

/**
 * No default command
 */
void Pneumatics::InitDefaultCommand() {}

/**
 * Start the compressor going. The compressor automatically starts and stops as
 * it goes above and below maximum pressure.
 */
void Pneumatics::Start(double yAxis) {
	m_compressor.Start();
	m_lift.Set(yAxis);
	p_lift.Set(true);

}

void Pneumatics::Stop() {
	m_lift.Set(0);
	p_lift.Set(false);
}


