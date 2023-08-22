#pragma once
#include "GameMainScene.h"
#include "DxLib.h"
class BulletManager
{
public:
	BulletManager(int maxBullets);
	~BulletManager();


	void Update();
	void Draw() const;

	void SpawnBullet(int playerX, int playerY);


	int speed = 5;//‘¬“x
	int angle;//Šp“x
	int acceleration;//‘¬“x‚Ì•Ï‰»—Ê
	int angulVelocity;//Šp“x‚Ì•Ï‰»—Ê

	int PadInput;

private:
	int maxBullets;
	Bullet** bullets;
};

