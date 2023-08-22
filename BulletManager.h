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


	int speed = 5;//���x
	int angle;//�p�x
	int acceleration;//���x�̕ω���
	int angulVelocity;//�p�x�̕ω���

	int PadInput;

private:
	int maxBullets;
	Bullet** bullets;
};

