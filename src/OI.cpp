#include "WPILib.h"
#include "Commands/Shooter/ShootBall.h"
#include "Commands/Shooter/BrakeShooterMotor.h"
#include "Commands/Intake/IntakeBall.h"
#include "Commands/Intake/BrakeIntakeMotor.h"


#include "OI.h"

OI::OI()
	: driveStick(0)
{
	JoystickButton* shootButton = new JoystickButton(driveStick, 1);
	shootButton->WhenPressed(new ShootBall());
	shootButton->WhenReleased(new BrakeShooterMotor());

	JoystickButton* intakeButton = new JoystickButton(driveStick, 2);
	intakeButton->WhenPressed(new IntakeBall());
	intakeButton->WhenReleased(new BrakeIntakeMotor());
}

Joystick* OI::getDriveStick()
{
	return driveStick;
}
