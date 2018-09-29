#ifndef GyroTurn_H
#define GyroTurn_H

#include "../CommandBase.h"

class GyroTurn : public CommandBase {
private:
	double setvalue;
	double TurnValue;
public:
	GyroTurn(double anglePoint);
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;
};

#endif  // GyroTurn_H
