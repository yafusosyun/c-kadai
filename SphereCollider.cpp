#include "SphereCollider.h"
#include <math.h>
#include "DxLib.h"
void SphereCollider::CheckCollision(int circle1_x, int circle1_y, int radius1, int circle2_x, int circle2_y, int radius2, int Sphere)
{

	int i = 100;

	a = circle1_x - circle2_x;
	b = circle1_y - circle2_y;
	c = sqrt(a * a + b * b);//‚Q“_ŠÔ‚Ì‹——£


	if (c <= radius1 + radius2) {
		Sphere = 1;//“–‚½‚Á‚Ä‚¢‚é
	}

	Sphere = 0;//“–‚½‚Á‚Ä‚¢‚È‚¢


}

void SphereCollider::Draw()
{
	DrawCircle(100, 100, 100, 0xffffff);
}

