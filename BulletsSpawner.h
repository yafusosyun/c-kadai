#pragma once
class BulletsSpawner
{
public:
	virtual ~BulletsSpawner() {};

	virtual BulletsSpawner* Shoot() = 0;

	int speed;//���x
	int angle;//�p�x
	int acceleration;//���x�̕ω���
	int angulVelocity;//�p�x�̕ω���
};

