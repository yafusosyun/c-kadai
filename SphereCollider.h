#pragma once
#include "DxLib.h"
#include <math.h>
class SphereCollider
{
public:
	int a, b, c;

	int X;
	int Y;
	int radius = 0;//半径
	int location = 0;//中心座標
	int length = 0;

	bool  CheckCollision(SphereCollider collider) {
		a = X - collider.X;
		b = Y - collider.Y;
		c = sqrt(a * a + b * b);//2点の距離

		return radius + collider.radius > c;
		//2点の距離が半径の和より小さければtrue
	}

	//引数でSphereColliderを受け取る
	//SphereCollider同士の当たり判定を行い当たったかどうかを返す

	//virtual void onCollision(SphereCollider obj) = 0;//衝突した時

	void Draw() const;

	

private:
	////円1
	//int circle1_x;
	//int circle1_y;
	//int radius1 = 0;//半径

	////円2
	//int circle2_x;
	//int circle2_y;
	//int radius2 = 0;//半径

	
	
	
	//三角関数を使って、敵と弾を円で当たり判定を作り
	//それぞれの中心を使って距離を求め
	//radius　敵と弾の半径を足した値より短ければ当たっている
};

