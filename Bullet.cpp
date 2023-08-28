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


		//�e��flg��300,600,999�ŕ����ă��Z�b�g
		if (i == 300) {
			for (int j = 600; j < BULLETS_MAX; j++) {
				bullets[j].flg = 0;
			}
		}


		if (i == 600) {
			for (int j = 0; j < 300; j++) {
				bullets[j].flg = 0;
			}
		}

		if (i == 999){
			for (int j = 300; j < 600; j++) {
				bullets[j].flg = 0;
			}
		}
}

void Bullet::Draw()const
{
	for (int i = 0; i < BULLETS_MAX; i++) {
		if (bullets[i].flg == 1) {

			DrawCircle(bullets[i].x , bullets[i].y, Bullets_radius, 0x000fff, TRUE);

		}
	}


	DrawFormatString(200, 200, 0xffffff, "%d", i);

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

