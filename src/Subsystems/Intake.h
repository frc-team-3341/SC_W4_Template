#ifndef Intake_H
#define Intake_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Intake: public Subsystem
{
private:
	Talon* intakeMotor;
public:
	Intake();
	void InitDefaultCommand();

	void intakeBall();
	void brakeIntakeMotor();
};

#endif
