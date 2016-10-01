#include "IntakeBall.h"

IntakeBall::IntakeBall()
{
	Requires(intake);
}

void IntakeBall::Initialize()
{
}

void IntakeBall::Execute()
{
	intake->intakeBall();
}

bool IntakeBall::IsFinished()
{
	return false;
}

void IntakeBall::End()
{
}

void IntakeBall::Interrupted()
{
}
