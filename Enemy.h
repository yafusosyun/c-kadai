#pragma once
#include "CharaBase.h"
#include "DxLib.h"
class Enemy : public CharaBase
{
public:

	void onCollision(SphereCollider obj) override {
		/*DeleteGraph;*/
	}
	

	 void Update()override;

	void Draw()const override;
};

