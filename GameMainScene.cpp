#include "GamemainScene.h"
#include "DxLib.h"
#include "CharaBase.h"
#include "Player.h"


GamemainScene::GamemainScene()
{
	
}
GamemainScene::~GamemainScene()
{
}
void GamemainScene::HitCheck()
{
}

void GamemainScene::SpawnBullet()
{
}

SceneBase* GamemainScene::Update()
{
	Player player;
	player.Update();
	return this;
}

void GamemainScene::Draw()const
{
	DrawFormatString(0, 0, 0xffffff, "GAMEMAIN");
	Player player;
	player.Draw();
}
