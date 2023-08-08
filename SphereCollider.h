#pragma once
class SphereCollider
{
public:
	void CheckCollision(class SphereCollider);
	//引数でSphereColliderを受け取る
	//SphereCollider同士の当たり判定を行い当たったかどうかを返す

	int location;//中心座標
	int radius;//半径

	//三角関数を使って、敵と弾を円で当たり判定を作り
	//それぞれの中心を使って距離を求め
	//radius　敵と弾の半径を足した値より短ければ当たっている
};

