#include "Player.h"
#include "PadInput.h"


Player::Player()
{
	radius = 15;

	x = 600;
	y = 600;
}

Player::~Player()
{
}

void Player::Update()
{

	
	int PadInput;

	PadInput = GetJoypadInputState(DX_INPUT_KEY_PAD1);

	if ((PadInput & PAD_INPUT_LEFT) == 0) {
		x += speed;
	}

	if ((PadInput & PAD_INPUT_RIGHT) == 0) {
		x -= speed;
	}

	if ((PadInput & PAD_INPUT_UP) == 0) {
		y += speed;
	}

	if ((PadInput & PAD_INPUT_DOWN) == 0) {
		y -= speed;
	}

	Player_positionX = x;
	Player_positionY = y;
}


void Player::Draw()const
{
	DrawRotaGraph(x +2, y,0.1,0.0, Player_img, TRUE);
}

void Player::Hit()
{
}

int Player::GetPositionY()
{
	return y;
}

int Player::GetPositionX()
{
	return x;
}

