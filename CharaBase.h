#pragma once
#include "SphereCollider.h"
#include "GameMainScene.h"
#include "Player.h"
class CharaBase : public SphereCollider
{

	//ここに画像読み込み
public:

	CharaBase();
	~CharaBase();

	 void Update();

	virtual void Draw();


	int speed;      // 移動速度
	int image;      // イメージ
	int life;       // ライフ

	
};

