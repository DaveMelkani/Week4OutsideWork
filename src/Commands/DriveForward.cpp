#include "DriveForward.h"


DriveForward::DriveForward(double distance) :
drivingPID(new WVPIDController(0.05,0,0,distance,false)) {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(drive);
	power = 0;
	Requires(CommandBase::drive);
}

// Called just before this Command runs the first time
void DriveForward::Initialize() {
		drive->resetEncoders();
		CommandBase::drive->resetEncoders();
}

// Called repeatedly when this Command is scheduled to run
void DriveForward::Execute() {
		drive->tankDrive(0.5,0.5);
		double currentDist = (drive->leftDistance() + drive->rightDistance())/2;
		power = drivingPID->Tick(currentDist);
		CommandBase::drive->tankDrive(power,power);
}

// Make this return true when this Command no longer needs to run execute()
bool DriveForward::IsFinished() {
		double error = (drive->leftDistance() + drive->rightDistance())/2 - drivingPID->GetSetPoint();
		return (error < 3 || error> -3); // Within 3 inches

}

// Called once after isFinished returns true
void DriveForward::End() {
	drive->tankDrive(0,0);
	CommandBase::drive->tankDrive(0,0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveForward::Interrupted() {

}
