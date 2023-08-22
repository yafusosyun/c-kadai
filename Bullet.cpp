#include "Bullet.h"
#include "DxLib.h"
#include "Player.h"
Bullet::Bullet() : active(false),x(0), y(0)
{
		
}
void Bullet::Update()
{
    if (CheckHitKey(KEY_INPUT_S)) {
        Bullets_flg = 1;
        bulletsx = x;
        bulletsy = y;
    }
    else {
        Bullets_flg = 0;
    }

    if (Bullets_flg == 1) {
        Bulets_speed--;
    }
    }


void Bullet::Draw() const
{
    if (active) {
        if (Bullets_flg == 1) {
            DrawCircle(bulletsx/* + 10*/, bulletsy + Bulets_speed, 10, 0x000fff, TRUE);
        }
    }
}

void Bullet::Spawn(int playerX, int playerY)
{
    active = true;
    x = playerX;
    y = playerY;
}

bool Bullet::IsActive() const
{
    return active;
}
