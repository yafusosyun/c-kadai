#pragma once
#include "SphereCollider.h"
#include "GameMainScene.h"
class CharaBase : public SphereCollider
{

	//ここに画像読み込み
public:
<<<<<<< HEAD

	CharaBase();
	~CharaBase();

	virtual void Update();
=======
	virtual CharaBase* Update(int GameMainScene());
>>>>>>> parent of b5cd054 (a)

	virtual void Draw()const;

<<<<<<< HEAD
	 void Hit();

	int speed;      // 移動速度
	int image;      // イメージ
	int life;       // ライフ

	
=======
	virtual CharaBase* Hit();
>>>>>>> parent of b5cd054 (a)
};

