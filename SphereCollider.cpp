#include "SphereCollider.h"
#include <math.h>
#include "DxLib.h"


void SphereCollider::CheckCollision()
{
	int dx = *player_x ; // プレイヤーのX座標を参照
	int dy = *player_y ; // プレイヤーのY座標を参照
}

void SphereCollider::Draw() const
{
	DrawFormatString(30.50, 0x00ff00, "%d");
}
