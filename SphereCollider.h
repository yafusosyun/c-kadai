#pragma once
#include "DxLib.h"
#include <math.h>

class SphereCollider
{
public:

	int a;

	void Draw()const;

	int radius;//���a

	int location = 0;//���S���W
	int length = 0;

	void CheckCollision();


private:

};

