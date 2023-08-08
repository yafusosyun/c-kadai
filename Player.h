#pragma once
#include "CharaBase.h"
class Player : public CharaBase
{
public:
	struct PLAYER {
		int img;
		int pos;

	};
private:
	PLAYER Player;
public:
	CharaBase* Update(int GameMainScene()) override;

	CharaBase* Draw() override;

	CharaBase* Hit() override;
};

