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
}

void Bullet::Draw()const
{
		if (Bullets_flg == 1) {

			DrawCircle(bulletsx + 10, bulletsy + Bulets_speed, Bullets_radius, 0x000fff, TRUE);

		}
}


Bullet::~Bullet()
{
}

void Bullet::GetDamage()
{
}
