#include "DxLib.h"
#include "CharaBase.h"
#include "Player.h"
#include "Bullet.h"

//test

#include "BulletsSpawner.h"
GamemainScene::GamemainScene()
{
	player = new Player();
	bullet = new Bullet();
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
	player->Update();
	bullet->SetLocationX(player->GetPositionX());
	bullet->Update();
	/*player.Update();
	bullet.Update();

	a = player.GetPosition();*/

	return this;
}

void GamemainScene::Draw()const
{
	DrawFormatString(0, 0, 0xffffff, "GAMEMAIN");
	player->Draw();
	bullet->Draw();
	/*player.Draw();
	
	bullet.Draw();*/

}
