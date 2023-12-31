#include "SphereCollider.h"
#include <math.h>
#include "DxLib.h"


SphereCollider::SphereCollider()
{
}

void SphereCollider::Update()
{
}
void SphereCollider::Draw() const
{
}
//継承した先のSphereColliderのxとyと自分のxとyの距離が2つの半径の合計以下なら当たっている
//当たっていたらtrueを返す
bool  SphereCollider::CheckCollision(SphereCollider* spherecollider) {
	distance = sqrtf(powf(spherecollider->x - x, 2) + powf(spherecollider->y - y, 2));

	if (distance < radius + spherecollider->radius) return true;
}