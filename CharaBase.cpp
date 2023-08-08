#include "CharaBase.h"
#include "GamemainScene.h"
#include "DxLib.h"



CharaBase::CharaBase(int initialX, int initialY, int initialSpeed, int initialImage, int initialRadius)
	: SphereCollider(initialX, initialY, initialRadius), speed(initialSpeed), image(initialImage), life(100)
{
	LoadGraph("images/Player.png", image);
}

CharaBase::~CharaBase()
{
}

CharaBase* CharaBase::Update(GamemainScene* gameScene)
{
	return nullptr;
}

CharaBase* CharaBase::Draw()
{
	DrawGraph(100, 100, image, TRUE);
}

CharaBase* CharaBase::Hit(int damage)
{
	life -= damage;
	if (life <= 0)
	{
		// ƒ‰ƒCƒt‚ª0ˆÈ‰º‚É‚È‚Á‚½‚Æ‚«‚Ìˆ—
	}
}
