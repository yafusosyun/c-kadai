#pragma once
class SphereCollider
{
public:
	int Sphere = 0;
	void  CheckCollision(int circle1_x,int circle1_y,int radius1,int circle2_x,int circle2_y,int radius2,int Sphere);

	//ˆø”‚ÅSphereCollider‚ğó‚¯æ‚é
	//SphereCollider“¯m‚Ì“–‚½‚è”»’è‚ğs‚¢“–‚½‚Á‚½‚©‚Ç‚¤‚©‚ğ•Ô‚·

	void Draw();
	int a, b, c;

	int location = 0;//’†SÀ•W

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

