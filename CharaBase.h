#pragma once
#include "SphereCollider.h"
#include "GameMainScene.h"
class CharaBase : public SphereCollider
{

	//�����ɉ摜�ǂݍ���
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

	int speed;      // �ړ����x
	int image;      // �C���[�W
	int life;       // ���C�t

	
=======
	virtual CharaBase* Hit();
>>>>>>> parent of b5cd054 (a)
};

