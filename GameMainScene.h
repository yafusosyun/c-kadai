#pragma once
#include "SceneBase.h"
#include "Player.h"
#include "Bullet.h"
//test
#include "BulletsSpawner.h"
#include "SphereCollider.h"
#include "Enemy.h"
class GamemainScene : public SceneBase
{
public:

	GamemainScene();
	~GamemainScene();
	void HitCheck();

	void SpawnBullet();//�e�̔z��ɐV�����f�[�^��쐬����


	 SceneBase* Update() override;

	 void Draw()const override;

	
	int life;
	/*int *enemy[3];*/
	int *bullets[3];

	int count = 0;

	int time = 30;

private:
	Player* player;
	Bullet* bullet[BULLETS_MAX];

	Enemy* enemy;

	int bullet_num;

	int boxX, boxY;


	int fps = 0;

	int PadInput;

	int g_OldKey;
	int g_NowKey;
	int g_KeyFlg;

};


