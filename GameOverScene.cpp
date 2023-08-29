#include "GameOverScene.h"
#include "DxLib.h"
SceneBase* GameOverScene::Update()
{
	return this;
}

void GameOverScene::Draw() const
{
	DrawFormatString(0, 0, 0xffffff, "GAMEOVER");
}
