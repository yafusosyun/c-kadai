#include "Bullet.h"
#include "DxLib.h"
#include "Player.h"
Bullet::Bullet()
{
		player = new Player;

		x = player->player_x;
		y = player->player_y;
	
}
void Bullet::Update()
{
	

	if (CheckHitKey(KEY_INPUT_S)) {

		Bullets_flg = 1;

			bulletsx = x;
			bulletsy = y;
	}
	if (Bullets_flg == 1) Bulets_speed--;

	/*if (y - Bulets_speed < 0) Bullets_flg = 0;*/



	//player.cpp‚Å‚à“¯‚¶‚±‚Æ‘‚¢‚Ä‚é‚©‚çÁ‚µ‚½‚¢
	PadInput = GetJoypadInputState(DX_INPUT_KEY_PAD1);

	

		if ((PadInput & PAD_INPUT_LEFT) == 0) {
			x++;
		}
		
		if ((PadInput & PAD_INPUT_RIGHT) == 0) {
			x--;
		}

		if ((PadInput & PAD_INPUT_UP) == 0) {
			y++;
		}

		if ((PadInput & PAD_INPUT_DOWN) == 0) {
			y--;
		}
	

		for (int i = 0; i < BULLETS_MAX; i++) {
			if (Bullets_flg[i].flg == 1) {
				bubble[i].frameCounter++;
				if (bubble[i].flg >= 20) bubble[i].flg = 0;
				else if (bubble[i].flg == 10) {
					bubble[i].anim = 3;
					bubble[i].flg = 11;
				}
				else if (bubble[i].flg >= 11) bubble[i].flg++;
				else if (bubble[i].y < -70) bubble[i].flg = 0;
				else {
					bubble[i].y--;

					float swingMax = 100.0f;
					float moveX = swingMax * sin(2 * M_PI * bubble[i].frameCounter / 240.0f);

					if (bubble[i].flg == 1) bubble[i].drawX = bubble[i].x + moveX;
					else bubble[i].drawX = bubble[i].x - moveX;

					if (bubble[i].frameCounter % 30 == 0) {
						if (bubble[i].anim >= 2) bubble[i].anim = 0;
						else bubble[i].anim++;
					};
				};
			};
		};


}

void Bullet::Draw()const
{
		if (Bullets_flg == 1) {

			DrawCircle(bulletsx + 10, bulletsy + Bulets_speed, Bullets_radius, 0x000fff, TRUE);

		}
	DrawFormatString(200, 200, 0xfffff,"%d",Bullets_flg);

	DrawFormatString(200, 230, 0xffffff, "%d", x);
}


Bullet::~Bullet()
{
	delete player;
}

void Bullet::GetDamage()
{
}
