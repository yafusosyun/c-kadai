#include "Enemy.h"
#include "SphereCollider.h"

Enemy::Enemy()
{
	radius = 50;

	enemy_x = 600;
	enemy_y = 50;
}

void Enemy::Update()
{
}

void Enemy::Draw() const
{
	DrawBox(enemy_x, enemy_y, enemy_x + 60, enemy_y + 60, 0xff0000, TRUE);

	//デバック用
	DrawCircle(enemy_x + 30, enemy_y + 30,radius, 0xffffff, 0);
}
