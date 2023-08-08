#pragma once
#include "SceneBase.h"
class GamemainScene : public SceneBase
{
public:

	GamemainScene();
	~GamemainScene();
	void HitCheck();

	void SpawnBullet();//弾の配列に新しくデータを作成する


	virtual SceneBase* Update() override;

	virtual void Draw() const override;

	int player;
	int life;
	int *enemy[3];
	int *bullets[3];
};

