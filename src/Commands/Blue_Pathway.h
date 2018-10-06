#ifndef Blue_Pathway_H
#define Blue_Pathway_H
#pragma once
#include <Commands/CommandGroup.h>
#include "../DriveForward.cpp"
#include "../GyroTurn.cpp"
#include "RobotMap.h"


class Blue_Pathway : public CommandGroup {
public:
	Blue_Pathway();
};

#endif  // Blue_Pathway_H
