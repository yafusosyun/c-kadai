#pragma once
#include "SphereCollider.h"
#include "GameMainScene.h"
#include "Player.h"
class CharaBase : public SphereCollider
{

	//�����ɉ摜�ǂݍ���
public:

	CharaBase();
	~CharaBase();

	 void Update();

	virtual void Draw();


	int speed;      // �ړ����x
	int image;      // �C���[�W
	int life;       // ���C�t

	
};

