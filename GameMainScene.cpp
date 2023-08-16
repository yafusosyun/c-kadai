#include "DxLib.h"
#include "CharaBase.h"
#include "Player.h"


//test

#include "BulletsSpawner.h"
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
	player.Update();
	
	return this;
}

void GamemainScene::Draw()const
{
	DrawFormatString(0, 0, 0xffffff, "GAMEMAIN");
	player.Draw();
	
}
