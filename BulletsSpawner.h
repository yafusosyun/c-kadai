#pragma once
class BulletsSpawner
{
public:
	virtual ~BulletsSpawner() {};

	virtual BulletsSpawner* Shoot() = 0;

	int speed;//速度
	int angle;//角度
	int acceleration;//速度の変化量
	int angulVelocity;//角度の変化量
};

