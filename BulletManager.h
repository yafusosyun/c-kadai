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


	int speed = 5;//速度
	int angle;//角度
	int acceleration;//速度の変化量
	int angulVelocity;//角度の変化量

	int PadInput;

private:
	int maxBullets;
	Bullet** bullets;
};

