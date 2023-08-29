#include "GameRankingScene.h"
#include "DxLib.h"
SceneBase* GameRankingScene::Update()
{
	return this;
}

void GameRankingScene::Draw() const
{
	DrawFormatString(0, 0, 0xffffff,"ranking");
}
