#include "ArcadeDrive.h"

ArcadeDrive::ArcadeDrive()
{
	Requires(drive);
}

void ArcadeDrive::Initialize()
{
}

void ArcadeDrive::Execute()
{
	double moveVal = oi->getDriveStick()->GetY();
	double rotVal = oi->getDriveStick()->GetZ();

	drive->arcadeDrive(moveVal, rotVal);
}

bool ArcadeDrive::IsFinished()
{
	return false;
}

void ArcadeDrive::End()
{
}

void ArcadeDrive::Interrupted()
{
}
