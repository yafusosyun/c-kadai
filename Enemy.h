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
	


	 void Update()override;

	void Draw()const  override;
};

