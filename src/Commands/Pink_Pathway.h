#ifndef Pink_Pathway_H
#define Pink_Pathway_H
#pragma once
#include <Commands/CommandGroup.h>
#include "../DriveForward.cpp"
#include "../GyroTurn.cpp"
#include "RobotMap.h"


class Pink_Pathway : public CommandGroup {
public:
	Pink_Pathway();
};

#endif  // Pink_Pathway_H
