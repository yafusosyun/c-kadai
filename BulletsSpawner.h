#pragma once
#include "GameMainScene.h"
#include "DxLib.h"
class BulletsSpawner
{
public:
	 ~BulletsSpawner() {};

	virtual int Shoot();

	//test
	void Draw()const;

	int speed;//‘¬“x
	int angle;//Šp“x
	int acceleration;//‘¬“x‚Ì•Ï‰»—Ê
	int angulVelocity;//Šp“x‚Ì•Ï‰»—Ê

	int PadInput;
};

