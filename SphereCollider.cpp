#include "SphereCollider.h"
#include <math.h>
#include "DxLib.h"


void SphereCollider::CheckCollision()
{
	int dx = *player_x ; // �v���C���[��X���W���Q��
	int dy = *player_y ; // �v���C���[��Y���W���Q��
}

void SphereCollider::Draw() const
{
	DrawFormatString(30.50, 0x00ff00, "%d");
}
