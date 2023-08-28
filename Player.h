#pragma once
#include "CharaBase.h"
#include "DxLib.h"
class Player : public CharaBase
{
private:
	int Player_img;

	int PadInput;
public:


	int player_x;
	int player_y;



	Player();
	~Player();

	void Update()override;

	void Draw()const override;

	int bulletsX = 0;
	int bulletsY;


	int Player_positionX;
	int Player_positionY;

	

	int GetPositionX();

	int GetPositionY();
};

