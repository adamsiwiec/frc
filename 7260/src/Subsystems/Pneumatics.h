/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <AnalogInput.h>
#include <Commands/Subsystem.h>
#include <Compressor.h>
#include <Solenoid.h>
#include <DoubleSolenoid.h>
#include <Spark.h>

/**
 * The Pneumatics subsystem contains the compressor and a pressure sensor.
 *
 * NOTE: The simulator currently doesn't support the compressor or pressure
 * sensors.
 */
class Pneumatics : public frc::Subsystem {
public:
	Pneumatics();

	/**
	 * No default command
	 */
	void InitDefaultCommand() override;

	/**
	 * Start the compressor going. The compressor automatically starts and
	 * stops as it goes above and below maximum pressure.
	 */
	void Start(double yAxis);

	/**
	 * @return Whether or not the system is fully pressurized.
	 */
	void Stop();

private:
	frc::DoubleSolenoid p_lift{1, 2};
	frc::Spark m_lift{3};



};
