#pragma once
#include "SceneBase.h"
#include "Player.h"
#include "Bullet.h"
//test
#include "BulletsSpawner.h"
#include "SphereCollider.h"
class GamemainScene : public SceneBase
{
public:

	GamemainScene() {
		collider.player_x = &player.player_x;
		collider.player_y = &player.player_y;
		collider.bullet_x = &bullet.x;
		collider.bullet_y = &bullet.y;
	}
	~GamemainScene();
	void HitCheck();

	void SpawnBullet();//�e�̔z��ɐV�����f�[�^���쐬����


	 SceneBase* Update() override;

	 void Draw()const override;

	
	int life;
	int *enemy[3];
	int *bullets[3];

	int a;

private:
	Player player;
	Bullet bullet;

	SphereCollider collider;
};

