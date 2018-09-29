#include "GyroTurn.h"
#include "DriveTrain.h"

GyroTurn::GyroTurn(double anglePoint) {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(CommandBase::drive);
	setvalue = anglePoint;
	TurnValue = CommandBase::drive->getAngle() - setvalue;
}

// Called just before this Command runs the first time
void GyroTurn::Initialize() {
	//CommandBase::drive->resetEncoders();
}

// Called repeatedly when this Command is scheduled to run
void GyroTurn::Execute() {
	if (TurnValue < 0) {
			CommandBase::drive->tankDrive(0.6, 0.3);
	}
	else if (TurnValue > 0) {
			CommandBase::drive->tankDrive(0.3, 0.6);
	}
	TurnValue = CommandBase::drive->getAngle() - setvalue;
}

// Make this return true when this Command no longer needs to run execute()
bool GyroTurn::IsFinished() {
	return (CommandBase::drive->getAngle() - setvalue > 3 || setvalue - CommandBase::drive->getAngle() > 3 ); // 3 is max error
}

// Called once after isFinished returns true
void GyroTurn::End() {
	CommandBase::drive->tankDrive(0,0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void GyroTurn::Interrupted() {

}
