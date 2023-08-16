#pragma once
#include "BulletsSpawner.h"
class NwaySpawner : public BulletsSpawner
{
public:
	int Shoot() override;

	int numBullets;

	int baseAngle;

	int angleDiff;

};

