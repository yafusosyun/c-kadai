#include "Player.h"

Player::Player()
{
	Player_img = LoadGraph("images/Player1.png");
	player_x = 200;
	player_y = 500;
}

Player::~Player()
{
}

void Player::Update()
{

	PadInput = GetJoypadInputState(DX_INPUT_KEY_PAD1);

	if ((PadInput & PAD_INPUT_LEFT) == 0) {
		player_x += speed;
	}

	if ((PadInput & PAD_INPUT_RIGHT) == 0) {
		player_x -= speed;
	}

	if ((PadInput & PAD_INPUT_UP) == 0) {
		player_y += speed;
	}

	if ((PadInput & PAD_INPUT_DOWN) == 0) {
		player_y -= speed;
	}

	Player_positionX = player_x;
	Player_positionY = player_y;
}


void Player::Draw()const
{
	DrawGraph(player_x, player_y, Player_img, TRUE);
	DrawFormatString(300, 300, 0xffffff, "%d", Player_positionX);
}