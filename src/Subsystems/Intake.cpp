#include "Intake.h"
#include "../RobotMap.h"

Intake::Intake()
	: Subsystem("Intake"),
	  intakeMotor(new Talon(INTAKEMOTOR))
{
}

void Intake::InitDefaultCommand()
{
}

void Intake::intakeBall()
{
	intakeMotor->Set(-0.4);
}

void Intake::brakeIntakeMotor()
{
	intakeMotor->Set(0);
}
