#pragma once
#include "CharaBase.h"
class Player : public CharaBase
{
public:
	int player_img;
	
	Player();
	~Player();

	 void Update() override;

	 void Draw()const override;

	 void Hit();
		 

	
};

