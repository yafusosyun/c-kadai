#pragma once
class SphereCollider
{
public:
	void CheckCollision();
	//引数でSphereColliderを受け取る
	//SphereCollider同士の当たり判定を行い当たったかどうかを返す

	int location;//中心座標
	int radius;
};

