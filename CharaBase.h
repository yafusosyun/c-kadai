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

	void Hit();

	int speed = 2;      // �ړ����x
	int image;      // �C���[�W
	int life = 3;       // ���C�t

	int Eimg;

	int Player_img;
};

