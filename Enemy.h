#pragma once
#include "CharaBase.h"
#include "DxLib.h"
class Enemy : public CharaBase
{
public:

	Enemy();

	float hp = 60.0f;
	int point;
	int weapon;
	


	 void Update()override;

	void Draw()const  override;
};

