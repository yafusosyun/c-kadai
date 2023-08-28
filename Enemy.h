#pragma once
#include "CharaBase.h"
#include "DxLib.h"
class Enemy : public CharaBase
{
public:

	Enemy();

	int hp;
	int point;
	int weapon;
	

	int enemy_x;
	int enemy_y;
	 void Update()override;

	void Draw()const  override;
};

