#include "DxLib.h"
#include "CharaBase.h"
#include "Player.h"
#include "Bullet.h"

//test

#include "BulletsSpawner.h"
GamemainScene::GamemainScene()
{
	collider.player_x = &player.player_x; // �v���C���[��X���W�̃|�C���^��n��
	collider.player_y = &player.player_y; // �v���C���[��Y���W�̃|�C���^��n��
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
