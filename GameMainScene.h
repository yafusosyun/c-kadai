#pragma once
#include "SceneBase.h"
#include "Player.h"
#include "Bullet.h"
//test
#include "BulletsSpawner.h"


class GamemainScene : public SceneBase
{
public:

	GamemainScene();
	~GamemainScene();
	void HitCheck();

	void SpawnBullet();//弾の配列に新しくデータを作成する


	 SceneBase* Update() override;

	 void Draw()const override;

	
	int life;
	int *enemy[3];
	int* bullets[3];
private:
	Player *player;
	Bullet *bullet;

};

