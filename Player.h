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

	int bullet_positionX = player_x;
	int bullet_positionY = player_y;

	Player();
	~Player();

	void Update()override;

	void Draw()const override;

	int bulletsX = 0;
	int bulletsY;


	int Player_position;

	void SetPosition(int Position) {
		Player_position = Position;
	}

	int GetPosition() {
		return  Player_position;
	}
};

