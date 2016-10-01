#include "BrakeShooterMotor.h"

BrakeShooterMotor::BrakeShooterMotor()
{
	Requires(shooter);
}

void BrakeShooterMotor::Initialize()
{
}

void BrakeShooterMotor::Execute()
{
	shooter->shootBall();
}

bool BrakeShooterMotor::IsFinished()
{
	return false;
}

void BrakeShooterMotor::End()
{
}

void BrakeShooterMotor::Interrupted()
{
}
