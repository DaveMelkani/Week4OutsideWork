#ifndef MiddleTop_Pathway_H
#define MiddleTop_Pathway_H
#pragma once
#include <Commands/CommandGroup.h>
#include "../DriveForward.cpp"
#include "../GyroTurn.cpp"
#include "RobotMap.h"


class MiddleTop_Pathway : public CommandGroup {
public:
	MiddleTop_Pathway();
};

#endif  // MiddleTop_Pathway_H
