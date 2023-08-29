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
//�p���������SphereCollider��x��y�Ǝ�����x��y�̋�����2�̔��a�̍��v�ȉ��Ȃ瓖�����Ă���
//�������Ă�����true��Ԃ�
bool  SphereCollider::CheckCollision(SphereCollider* spherecollider) {
	distance = sqrtf(powf(spherecollider->x - x, 2) + powf(spherecollider->y - y, 2));

	if (distance < radius + spherecollider->radius) return true;
}