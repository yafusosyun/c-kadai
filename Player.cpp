#include "Player.h"
#include "CharaBase.h"
#include "DxLib.h"
Player::Player()
{
	player_img = LoadGraph("images/Player1.png");
}

Player::~Player()
{
}

void Player::Update()
{
}

void Player::Draw() const
{
	DrawGraph(300, 300, player_img,TRUE);
}

void Player::Hit()
{
}


