#include "CharaBase.h"
#include "GamemainScene.h"
#include "SphereCollider.h"
#include "DxLib.h"

CharaBase::CharaBase()
{
	Player_img = LoadGraph("images/player3.png");
}

CharaBase::~CharaBase()
{
}

void CharaBase::Update()
{
	//radius = 50;//仮りでプレイヤーの半径
	//半径は画像のサイズに合わせて調整する
}

void CharaBase::Draw()const 
{
	
}

void CharaBase::Hit()
{
}



