#pragma once
#include "CharaBase.h"
#include "DxLib.h"
class Player : public CharaBase
{
private:
	int Player_img;


public:



	Player();
	~Player();

	void Update();

	void Draw();
};

