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
		player_x++;
	}

	if ((PadInput & PAD_INPUT_RIGHT) == 0) {
		player_x--;
	}

	if ((PadInput & PAD_INPUT_UP) == 0) {
		player_y++;
	}

	if ((PadInput & PAD_INPUT_DOWN) == 0) {
		player_y--;
	}

	Player_position = player_x;
}


void Player::Draw()const
{
	DrawGraph(player_x, player_y, Player_img, TRUE);
	DrawFormatString(200, 400, 0xffffff, "%d", player_x);
	DrawFormatString(200, 400, 0xffffff, "%d", Player_position);
}