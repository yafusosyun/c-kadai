#include "Bullet.h"
#include "DxLib.h"
#include "Player.h"

Bullet::Bullet(int px,int py)
{
	x = px;
	y = py;
	radius = 2;
	speed = 3;
}
void Bullet::Update()
{
		y = y - speed;
}

void Bullet::Draw()const
{
			DrawCircle(x , y,radius, 0x000fff, TRUE);

}


Bullet::~Bullet()
{
}

void Bullet::GetDamage()
{
}

void Bullet::SetLocationX(int _x)
{
	P_x = _x;
}

void Bullet::SetLocationY(int _y)
{
	P_y = _y;
}

