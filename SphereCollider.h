#pragma once
#include "DxLib.h"
#include <math.h>
//#include "Player.h"
class SphereCollider
{
public:
	SphereCollider();

	int a;
	void Update();

	void Draw()const;

	int radius;//”¼Œa

	int x;
	int y;

	int location = 0;//’†SÀ•W
	int length = 0;

	bool CheckCollision(SphereCollider* spherecollider);


private:

	float distance;

};

