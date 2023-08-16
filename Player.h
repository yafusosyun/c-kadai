#pragma once
#include "CharaBase.h"
#include "DxLib.h"
class Player : public CharaBase
{
private:
	int Player_img;

	int PadInput;
public:

	int player_x = 200;

	Player();
	~Player();

	void Update()override;

	void Draw()const override;
};

