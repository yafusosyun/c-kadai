#pragma once
#include "DxLib.h"
#include <math.h>

class SphereCollider
{
public:


	int* player_x; // プレイヤーのX座標を保持するポインタ
	int* player_y; // プレイヤーのY座標を保持するポインタ

	int a;

	void Draw()const;

	int radius;//半径

	int location = 0;//中心座標
	int length = 0;

	void CheckCollision();

	int* player_x;
	int* player_y;
	int* bullet_x;
	int* bullet_y;

private:

};

