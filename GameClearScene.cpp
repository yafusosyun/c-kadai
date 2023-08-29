#include "GameClearScene.h"
#include "DxLib.h"
SceneBase* GameClearScene::Update()
{
	return this;
}

void GameClearScene::Draw() const
{
	SetFontSize(50);
	DrawFormatString(0,0,0xffffff,"GAMECLEAR");
}
