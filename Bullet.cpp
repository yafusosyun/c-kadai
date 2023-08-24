#include "Bullet.h"
#include "DxLib.h"
#include "Player.h"
Bullet::Bullet()
{
		

		x = player.player_x;
		y = player.player_y;
	
}
void Bullet::Update()
{
	count++;

	

				if (bullets[i].flg == 0) {
					bullets[i].x = x;
					bullets[i].y = y;
				}

			
				if (bullets[i].y < 0) bullets[i].flg = 0;

		if (CheckHitKey(KEY_INPUT_S)) {
			bullets[i].flg = 1;
			if (count % 10 == 0) i++;
			if (i == BULLETS_MAX) i = 0;
		}

		if (bullets[i].flg == 1){
	for (int i = 0; i < BULLETS_MAX; i++) {
		
			bullets[i].y -= 2;
		}
		
	}

	



	//player.cpp‚©‚çÀ•WŽ‚Á‚Ä‚«‚½‚¢
	PadInput = GetJoypadInputState(DX_INPUT_KEY_PAD1);

	

		if ((PadInput & PAD_INPUT_LEFT) == 0) {
			x+= 2;
		}
		
		if ((PadInput & PAD_INPUT_RIGHT) == 0) {
			x-= 2;
		}

		if ((PadInput & PAD_INPUT_UP) == 0) {
			y+= 2;
		}

		if ((PadInput & PAD_INPUT_DOWN) == 0) {
			y-= 2;
		}
}

void Bullet::Draw()const
{
	for (int i = 0; i < BULLETS_MAX; i++) {
		if (bullets[i].flg == 1) {

			DrawCircle(bullets[i].x  + 100, bullets[i].y, Bullets_radius, 0x000fff, TRUE);

		}
	}

	DrawFormatString(200, 220, 0xffffff, "%d", player.player_y);
	


}


Bullet::~Bullet()
{
}

void Bullet::GetDamage()
{
}
