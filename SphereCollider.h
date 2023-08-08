#pragma once
class SphereCollider
{
public:
	SphereCollider(int centerX, int centerY, int radius);
	bool CheckCollision(const SphereCollider& otherCollider) const;
	//ˆø”‚ÅSphereCollider‚ğó‚¯æ‚é
	//SphereCollider“¯m‚Ì“–‚½‚è”»’è‚ğs‚¢“–‚½‚Á‚½‚©‚Ç‚¤‚©‚ğ•Ô‚·

private:

	int centerX;
	int centerY;

	int location;//’†SÀ•W
	int radius;//”¼Œa

	//OŠpŠÖ”‚ğg‚Á‚ÄA“G‚Æ’e‚ğ‰~‚Å“–‚½‚è”»’è‚ğì‚è
	//‚»‚ê‚¼‚ê‚Ì’†S‚ğg‚Á‚Ä‹——£‚ğ‹‚ß
	//radius@“G‚Æ’e‚Ì”¼Œa‚ğ‘«‚µ‚½’l‚æ‚è’Z‚¯‚ê‚Î“–‚½‚Á‚Ä‚¢‚é
};

