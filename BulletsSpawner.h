#pragma once
class BulletsSpawner
{
public:
	virtual ~BulletsSpawner() {};

	virtual BulletsSpawner* Shoot() = 0;

	int speed;//‘¬“x
	int angle;//Šp“x
	int acceleration;//‘¬“x‚Ì•Ï‰»—Ê
	int angulVelocity;//Šp“x‚Ì•Ï‰»—Ê
};

