#include "OI.h"

OI::OI()
	: driveStick(0)
{
}

Joystick* OI::getDriveStick()
{
	return driveStick;
}
