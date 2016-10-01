#include "CommandBase.h"
#include "Subsystems/DriveTrain.h"
#include "Commands/Scheduler.h"

// Initialize a single static instance of all of your subsystems to NULL
DriveTrain* CommandBase::drive = NULL;
Intake* CommandBase::intake = NULL;
Shooter* CommandBase::shooter = NULL;
OI* CommandBase::oi = NULL;

CommandBase::CommandBase(const std::string &name) :
		Command(name)
{
}

CommandBase::CommandBase() :
		Command()
{

}

void CommandBase::init()
{
	// Create a single static instance of all of your subsystems. The following
	// line should be repeated for each subsystem in the project.
	drive = new DriveTrain();
	intake = new Intake();
	shooter = new Shooter();
	oi = new OI();
}
