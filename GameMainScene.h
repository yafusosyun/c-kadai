<<<<<<< HEAD
#pragma once
#include "SceneBase.h"
#include "GamemainScene.h"
#include "Player.h"
class GamemainScene : public SceneBase
{
public:

	GamemainScene();
	~GamemainScene();
	void HitCheck();

	void SpawnBullet();//弾の配列に新しくデータを作成する


	 SceneBase* Update() override;

	 void Draw()const override;

	int player;
	int life;
	int *enemy[3];
	int *bullets[3];

private:
	Player player;

};

=======
>>>>>>> parent of b5cd054 (a)
