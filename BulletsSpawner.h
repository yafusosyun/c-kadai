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

	int speed = 5;//速度
	int angle;//角度
	int acceleration;//速度の変化量
	int angulVelocity;//角度の変化量

	int PadInput;
};

