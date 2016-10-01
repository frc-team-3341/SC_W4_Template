#ifndef SRC_SUBSYSTEMS_DRIVETRAIN_H_
#define SRC_SUBSYSTEMS_DRIVETRAIN_H_

#include <Commands/Subsystem.h>
#include "WPILib.h"

class DriveTrain: public Subsystem {
public:
	DriveTrain();
	virtual ~DriveTrain();
	void arcadeDrive(float move, float rotate);
	static float Limit(float num, float max);

	void InitDefaultCommand();

private:
	Talon* leftMotor;
	Talon* rightMotor;
};

#endif /* SRC_SUBSYSTEMS_DRIVETRAIN_H_ */
