#pragma once
#include "CharaBase.h"
class Player : public CharaBase
{
public:
<<<<<<< HEAD
	int player_img;
	
	Player();
	~Player();

	 void Update() override;
=======
	CharaBase* Update(int GameMainScene()) override;
>>>>>>> parent of b5cd054 (a)

	 void Draw()const override;

	 void Hit();
		 

	
};

