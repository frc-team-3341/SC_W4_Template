#include "Shooter.h"
#include "../RobotMap.h"

Shooter::Shooter()
	: Subsystem("Shooter"),
	  shooterMotor1(new Talon(SHOOTERMOTOR1)),
	  shooterMotor2(new Talon(SHOOTERMOTOR2))
{
}

Shooter::~Shooter()
{
	delete shooterMotor1;
	delete shooterMotor2;
}

void Shooter::InitDefaultCommand()
{
}

void Shooter::shootBall()
{
	shooterMotor1->Set(1.0);
	shooterMotor2->Set(1.0);
}

void Shooter::brakeShooterMotor()
{
	shooterMotor1->Set(0);
	shooterMotor2->Set(0);
}
