#pragma once
#include "CharaBase.h"
#include "DxLib.h"
class Player : public CharaBase
{
private:


	int PadInput;
public:


	Player();
	~Player();

	void Update()override;

	void Draw()const override;

	void Hit() override;

	int bulletsX = 0;
	int bulletsY;


	int Player_positionX;
	int Player_positionY;

	

	int GetPositionX();

	int GetPositionY();
};

