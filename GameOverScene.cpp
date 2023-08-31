#include "GameOverScene.h"
#include "DxLib.h"
SceneBase* GameOverScene::Update()
{
	return this;
}

void GameOverScene::Draw() const
{
	SetFontSize(100);
	DrawFormatString(600, 300, 0xffffff, "GAMEOVER");
}
