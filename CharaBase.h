#pragma once
#include "SphereCollider.h"
class CharaBase : public SphereCollider
{

	//ここに画像読み込み
public:

	CharaBase();
	~CharaBase();

	virtual void Update();

	virtual void Draw()const;


	int speed;      // 移動速度
	int image;      // イメージ
	int life;       // ライフ

	
};

