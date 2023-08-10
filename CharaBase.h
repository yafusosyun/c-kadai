#pragma once
#include "SphereCollider.h"
#include "GameMainScene.h"
class CharaBase : public SphereCollider
{
public:

	CharaBase();
	~CharaBase();

	virtual void Update();

	virtual void Draw()const;

	 void Hit();

	int speed;      // �ړ����x
	int image;      // �C���[�W
	int life;       // ���C�t
};

