#ifndef RedBottom_Pathway_H
#define RedBottom_Pathway_H
#pragma once
#include <Commands/CommandGroup.h>
#include "../DriveForward.cpp"
#include "../GyroTurn.cpp"
#include "RobotMap.h"

class RedBottom_Pathway : public CommandGroup {
public:
	RedBottom_Pathway();
};

#endif  // RedBottom_Pathway_H
