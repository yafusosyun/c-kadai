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

	int speed;//���x
	int angle;//�p�x
	int acceleration;//���x�̕ω���
	int angulVelocity;//�p�x�̕ω���

	int PadInput;
};

