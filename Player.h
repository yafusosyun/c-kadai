#pragma once
#include "CharaBase.h"
class Player : public CharaBase
{
public:
	CharaBase* Update(int GameMainScene()) override;

	CharaBase* Draw() override;

	CharaBase* Hit() override;
};

