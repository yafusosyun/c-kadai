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
//Œp³‚µ‚½æ‚ÌSphereCollider‚Ìx‚Æy‚ÆŽ©•ª‚Ìx‚Æy‚Ì‹——£‚ª2‚Â‚Ì”¼Œa‚Ì‡ŒvˆÈ‰º‚È‚ç“–‚½‚Á‚Ä‚¢‚é
//“–‚½‚Á‚Ä‚¢‚½‚çtrue‚ð•Ô‚·
bool  SphereCollider::CheckCollision(SphereCollider* spherecollider) {
	distance = sqrtf(powf(spherecollider->x - x, 2) + powf(spherecollider->y - y, 2));

	if (distance < radius + spherecollider->radius) return true;
}