#pragma once
#include "SphereCollider.h"
#include "GameMainScene.h"
class CharaBase : public SphereCollider
{
public:

	CharaBase(int initialX, int initialY, int initialSpeed, int initialImage, int initialRadius);
	virtual ~CharaBase();

	virtual CharaBase* Update (GamemainScene* gameScene);

	virtual CharaBase* Draw();

	virtual CharaBase* Hit(int damage);

	int speed;      // �ړ����x
	int image;      // �C���[�W
	int life;       // ���C�t
};

