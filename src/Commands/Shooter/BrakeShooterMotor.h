#ifndef BrakeShooterMotor_H
#define BrakeShooterMotor_H

#include "../../CommandBase.h"
#include "WPILib.h"

class BrakeShooterMotor: public CommandBase
{
public:
	BrakeShooterMotor();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
