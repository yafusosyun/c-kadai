#pragma once
#include "CharaBase.h"
#include "DxLib.h"
#include "main.h"
#include "BulletsSpawner.h"

struct SHOT {
	bool flg;//’e‚ª”­ŽË‚µ‚Ä‚¢‚é‚©‚Ìƒtƒ‰ƒO
	int x;
	int y;
	int shotimg;
	int width;
	int height;

};

class Player 
{
private:
	int Player_img;

	int PadInput;


	//’e
	int x, y;
	int width, height;
	int shotimg[12];
	int move;
	int xcount, ycount;
	int ix, iy, result;
	bool life;
	SHOT shot[PSHOT_NUM];//20
	int count;

private:
	void Draw();
	void Shot();


public:

	int player_x;
	int player_y;

	int bullet_positionX = player_x;
	int bullet_positionY = player_y;

	Player();
	~Player();

	void Update();

	void Draw()const ;

	int bulletsX = 0;
	int bulletsY;


	int Player_position;

	void SetPosition(int Position) {
		Player_position = Position;
	}

	int GetPosition() {
		return  Player_position;
	}
};

