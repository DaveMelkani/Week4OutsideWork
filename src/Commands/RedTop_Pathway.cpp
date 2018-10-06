#include "RedTop_Pathway.h"
#include "RobotMap.h"
#include "CommandBase.h"
RedTop_Pathway::RedTop_Pathway() {

	AddSequential(new DriveForward(Red));
	AddSequential(new GyroTurn(90));
	AddSequential(new DriveForward(turnRightTopRed1));
	AddSequential(new GyroTurn(90));
	AddSequential(new DriveForward(turnRightTopRed2));
	AddSequential(new GyroTurn(90));
	AddSequential(new DriveForward(turnRightTopRed3));




	// Add Commands here:
	// e.g. AddSequential(new Command1());
	//      AddSequential(new Command2());
	// these will run in order.

	// To run multiple commands at the same time,
	// use AddParallel()
	// e.g. AddParallel(new Command1());
	//      AddSequential(new Command2());
	// Command1 and Command2 will run in parallel.

	// A command group will require all of the subsystems that each member
	// would require.
	// e.g. if Command1 requires chassis, and Command2 requires arm,
	// a CommandGroup containing them would require both the chassis and the
	// arm.
}
