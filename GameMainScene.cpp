#include "DxLib.h"
#include "CharaBase.h"
#include "Player.h"
#include "Bullet.h"

//test

#include "BulletsSpawner.h"
GamemainScene::GamemainScene()
{
	player = new Player();

	for (int i = 0; i < BULLETS_MAX; i++) {
		bullet[i] = nullptr;
	}
	bullet_num = 0;
	enemy = new Enemy();
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

	if (CheckHitKey(KEY_INPUT_S)) {
		if (bullet[bullet_num] == nullptr) {
			bullet[bullet_num] = new Bullet(player->GetPositionX(), player->GetPositionY());
			bullet_num = bullet_num + 1;
		}
	}
	if (bullet_num == BULLETS_MAX) {
		bullet_num = 0;
	}

	for (int i = 0; i < BULLETS_MAX; i++) {
		if (bullet[i] != nullptr) {
			bullet[i]->SetLocationX(player->GetPositionX());
			bullet[i]->SetLocationY(player->GetPositionY());
			bullet[i]->Update();
			player->CheckCollision(bullet[i]);

			//player‚Æbullet‚Ì”»’è
		/*	if (player->CheckCollision(bullet[i]) == true) {
				printfDx("HIT");
			}*/
			if (bullet[i]->CheckCollision(enemy) == true) {
				printfDx("HIT");
		}
			}
		}
	if (enemy->CheckCollision(player) == true) {
		printfDx("HIT");
	}
	
	enemy->Update();



	return this;
}

void GamemainScene::Draw()const
{
	DrawFormatString(0, 0, 0xffffff, "GAMEMAIN");
	player->Draw();

	for (int i = 0; i < BULLETS_MAX; i++) {
		if (bullet[i] != nullptr) {
			bullet[i]->Draw();
		}
	}
	enemy->Draw();

}
