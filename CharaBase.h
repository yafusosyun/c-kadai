#pragma once
#include "SphereCollider.h"
class CharaBase : public SphereCollider
{

	//�����ɉ摜�ǂݍ���
public:

	CharaBase();
	~CharaBase();

	virtual void Update();

	virtual void Draw()const;


	int speed;      // �ړ����x
	int image;      // �C���[�W
	int life;       // ���C�t

	
};

