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

	void Hit();

	int speed = 2;      // 移動速度
	int image;      // イメージ
	int life = 3;       // ライフ

	int Eimg;

	int Player_img;
};

