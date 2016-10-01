#include "ShootBall.h"

ShootBall::ShootBall()
{
	Requires(shooter);
}

void ShootBall::Initialize()
{
}

void ShootBall::Execute()
{
	shooter->shootBall();
}

bool ShootBall::IsFinished()
{
	return false;
}

void ShootBall::End()
{
}

void ShootBall::Interrupted()
{
}
