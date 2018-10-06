#ifndef RedTop_Pathway_H
#define RedTop_Pathway_H
#include "RobotMap.h"
#include <Commands/CommandGroup.h>
#pragma once
#include "../DriveForward.cpp"
#include "../GyroTurn.cpp"

class RedTop_Pathway : public CommandGroup {
public:
	RedTop_Pathway();
};

#endif  // RedTop_Pathway_H
