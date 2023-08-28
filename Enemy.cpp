#include "Enemy.h"
#include "SphereCollider.h"

Enemy::Enemy()
{
	radius = 50;

	x = 600;
	y = 50;
	speed - 40;
}

void Enemy::Update()
{

	x += speed;
	if (x < 20) {
		speed *= -1;
	}
	else if (x > 1200) {
		 speed*= -1;
	}

}

void Enemy::Draw() const
{
	DrawBox(x, y, x + 60, y + 60, 0xff0000, TRUE);

	//デバック用
	//DrawCircle(enemy_x + 30, enemy_y + 30,radius, 0xffffff, 0);
}
