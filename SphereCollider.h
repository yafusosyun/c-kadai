#pragma once
class SphereCollider
{
public:
	int Sphere = 0;
	void  CheckCollision(int circle1_x,int circle1_y,int radius1,int circle2_x,int circle2_y,int radius2,int Sphere);

	//引数でSphereColliderを受け取る
	//SphereCollider同士の当たり判定を行い当たったかどうかを返す

	void Draw();
	int a, b, c;

	int location = 0;//中心座標

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

