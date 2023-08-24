#include "Player.h"



Player::Player()
{
	Player_img = LoadGraph("images/player3.png");
	player_x = 600;
	player_y = 600;
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
	DrawRotaGraph(player_x +2, player_y,0.5,0.0, Player_img, TRUE);

	DrawFormatString(50, 50, 0xffffff, "%d", a);
}

