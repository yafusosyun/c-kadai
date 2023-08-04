#pragma once
#include "SphereCollider.h"
#include "GameMainScene.h"
class CharaBase : public SphereCollider
{
public:
	virtual CharaBase* Update(int GameMainScene());

	virtual CharaBase* Draw();

	virtual CharaBase* Hit();
};

