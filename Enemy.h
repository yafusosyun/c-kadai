#pragma once
#include "CharaBase.h"
#include "DxLib.h"
class Enemy : public CharaBase
{
public:
<<<<<<< HEAD

	void onCollision(SphereCollider obj) override {
		/*DeleteGraph;*/
	}
	

	 void Update()override;

	void Draw()const override;
=======
	CharaBase*Update(int GameMainScene())override;

	CharaBase* Draw()override;

	CharaBase* Hit()override;

	int hp;
	int pointint;//�X�R�A�̉��Z��
	int weapon;//BulletsSpawcer�̎q�N���X
>>>>>>> parent of b5cd054 (a)
};

