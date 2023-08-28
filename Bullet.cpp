#include "Bullet.h"
#include "DxLib.h"
#include "Player.h"

Bullet::Bullet()
{
}
void Bullet::Update()
{
	count++;
				if (bullets[i].flg == 0) {
					bullets[i].x = P_x;
					bullets[i].y = P_y;
				}

			
				if (bullets[i].y < 0) bullets[i].flg = 0;

		if (CheckHitKey(KEY_INPUT_S)) {
			bullets[i].flg = 1;
			if (count % 5 == 0) i++;
		}
		if (i == BULLETS_MAX) i = 0;


		if (bullets[i].flg == 1){
	for (int i = 0; i < BULLETS_MAX; i++) {
		
			bullets[i].y -= 2.0f;
		}
		
	}
}

void Bullet::Draw()const
{
	for (int i = 0; i < BULLETS_MAX; i++) {
		if (bullets[i].flg == 1) {

			DrawCircle(bullets[i].x , bullets[i].y, Bullets_radius, 0x000fff, TRUE);

		}
		DrawFormatString(200,200,0xffffff,"%d", bullets[0].x);
	}


	


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

