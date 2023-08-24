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

	void SetPosition(int player_x) {
		Player_positionX = player_x;
	}

	int GetPosition() {
		return  Player_positionX;
	}
};

