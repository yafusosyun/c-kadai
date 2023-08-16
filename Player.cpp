#include "Player.h"

Player::Player()
{
	Player_img = LoadGraph("images/Player1.png");
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


	/*if (CheckHitKey(KEY_INPUT_D)) {
		player_x++;
	}*/
	/*if (CheckHitKey(KEY_INPUT_A)) {
		player_x--;
	}*/
}


void Player::Draw()const
{	
	DrawGraph(player_x, 200, Player_img, TRUE);
	DrawFormatString(200, 400, 0xffffff, "%d", player_x);
}