#pragma once
#include "CharaBase.h"
class Enemy : public CharaBase
{
public:
	CharaBase*Update(int GameMainScene())override;

	CharaBase* Draw()override;

	CharaBase* Hit()override;

	int hp;
	int pointint;//�X�R�A�̉��Z��
	int weapon;//BulletsSpawcer�̎q�N���X
};

