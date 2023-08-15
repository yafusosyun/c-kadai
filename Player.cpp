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
}

void Player::Draw()
{
	DrawGraph(200, 200, Player_img, TRUE);
}
