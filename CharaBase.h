#pragma once
#include "SphereCollider.h"
#include "GameMainScene.h"
class CharaBase : public SphereCollider
{

	//ここに画像読み込み
public:

	CharaBase();
	~CharaBase();

	virtual void Update();

	virtual void Draw()const;

	 void Hit();

	int speed;      // 移動速度
	int image;      // イメージ
	int life;       // ライフ

	
};

