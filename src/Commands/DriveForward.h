#ifndef DriveForward_H
#define DriveForward_H

#include <Commands/Command.h>
#include "../CommandBase.h"
#include "WVPIDController.h"

class DriveForward : public CommandBase {
private:
	WVPIDController* drivingPID;
	double power;

public:
	DriveForward(double distance);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // DriveForward_H
