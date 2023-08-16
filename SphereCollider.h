#pragma once
#include "DxLib.h"
#include <math.h>
class SphereCollider
{
public:
	int a, b, c;

	int X;
	int Y;
	int radius = 0;//”¼Œa
	int location = 0;//’†SÀ•W
	int length = 0;

	bool  CheckCollision(SphereCollider collider) {
		a = X - collider.X;
		b = Y - collider.Y;
		c = sqrt(a * a + b * b);//2“_‚Ì‹——£

		return radius + collider.radius > c;
		//2“_‚Ì‹——£‚ª”¼Œa‚Ì˜a‚æ‚è¬‚³‚¯‚ê‚Îtrue
	}

	//ˆø”‚ÅSphereCollider‚ğó‚¯æ‚é
	//SphereCollider“¯m‚Ì“–‚½‚è”»’è‚ğs‚¢“–‚½‚Á‚½‚©‚Ç‚¤‚©‚ğ•Ô‚·

	//virtual void onCollision(SphereCollider obj) = 0;//Õ“Ë‚µ‚½

	void Draw() const;

	

private:
	////‰~1
	//int circle1_x;
	//int circle1_y;
	//int radius1 = 0;//”¼Œa

	////‰~2
	//int circle2_x;
	//int circle2_y;
	//int radius2 = 0;//”¼Œa

	
	
	
	//OŠpŠÖ”‚ğg‚Á‚ÄA“G‚Æ’e‚ğ‰~‚Å“–‚½‚è”»’è‚ğì‚è
	//‚»‚ê‚¼‚ê‚Ì’†S‚ğg‚Á‚Ä‹——£‚ğ‹‚ß
	//radius@“G‚Æ’e‚Ì”¼Œa‚ğ‘«‚µ‚½’l‚æ‚è’Z‚¯‚ê‚Î“–‚½‚Á‚Ä‚¢‚é
};

