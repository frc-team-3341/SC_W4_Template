#ifndef Shooter_H
#define Shooter_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Shooter: public Subsystem
{
private:
	Talon* shooterMotor1;
	Talon* shooterMotor2;
public:
	Shooter();
	void InitDefaultCommand();

	void shootBall();
	void brakeShooterMotor();
};

#endif
