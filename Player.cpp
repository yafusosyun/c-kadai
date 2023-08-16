#include "Player.h"
#include "DxLib.h"
Player::Player()
{
	Player_img = LoadGraph("images/Player1.png");
}

Player::~Player()
{
}

void Player::Update()
{
	if (CheckHitKey(KEY_INPUT_D)) {
		player_x++;
	}
	if (CheckHitKey(KEY_INPUT_A)) {
		player_x--;
	}
	
}

void Player::Draw()
{
	DrawGraph(player_x, 200, Player_img, TRUE);
	DrawFormatString(200, 400, 0xffffff, "%d", player_x);
}
