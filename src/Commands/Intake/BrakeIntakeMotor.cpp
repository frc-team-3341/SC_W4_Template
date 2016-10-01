#include "BrakeIntakeMotor.h"

BrakeIntakeMotor::BrakeIntakeMotor()
{
	Requires(intake);
}

void BrakeIntakeMotor::Initialize()
{
}

void BrakeIntakeMotor::Execute()
{
	intake->brakeIntakeMotor();
}

bool BrakeIntakeMotor::IsFinished()
{
	return false;
}

void BrakeIntakeMotor::End()
{
}

void BrakeIntakeMotor::Interrupted()
{
}
