#include "DxLib.h"
#include "CharaBase.h"
#include "Player.h"
#include "Bullet.h"

//test

#include "BulletsSpawner.h"
GamemainScene::GamemainScene()
{
	collider.player_x = &player.player_x; // プレイヤーのX座標のポインタを渡す
	collider.player_y = &player.player_y; // プレイヤーのY座標のポインタを渡す
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
	bullet.Update();

	a = player.GetPosition();

	return this;
}

void GamemainScene::Draw()const
{
	DrawFormatString(0, 0, 0xffffff, "GAMEMAIN");
	
	player.Draw();
	
	bullet.Draw();

}
