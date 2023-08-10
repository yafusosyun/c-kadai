#include "Player.h"
#include "DxLib.h"
#include "CharaBase.h"
#include "SphereCollider.h"

void Player::Update()
{
	playerimg = LoadGraph("images/Player1.png");
	position_x += 5;
	/*if (CheckHitKey(KEY_INPUT_D)) {

		position_x += 5;
	}*/
}
void Player::Draw()const
{
}










