#pragma once
#include "DxLib.h"
#include <math.h>

class SphereCollider
{
public:


	int* player_x; // �v���C���[��X���W��ێ�����|�C���^
	int* player_y; // �v���C���[��Y���W��ێ�����|�C���^

	int a;

	void Draw()const;

	int radius;//���a

	int location = 0;//���S���W
	int length = 0;

	void CheckCollision();

	int* player_x;
	int* player_y;
	int* bullet_x;
	int* bullet_y;

private:

};

