#include "BulletsSpawner.h"

int BulletsSpawner::Shoot()
{
	

	PadInput = GetJoypadInputState(DX_INPUT_KEY_PAD1);
	return 0;
}

void BulletsSpawner::Draw() const
{
	if ((PadInput & PAD_INPUT_2) == 0) {
		DrawCircle(200, 200, 50, 0x00ffff);
	}
}
