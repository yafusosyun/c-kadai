#include "DxLib.h"
#include "CharaBase.h"
#include "Player.h"
#include "Bullet.h"

//test
#include "GameClearScene.h"
#include "GameOverScene.h"
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
	fps++;
	if (fps % 120 == 0) {
		time = time - 1;
	}

	player->Update();
	count = count + 1;
	if (count % 10 == 0) {
		if (CheckHitKey(KEY_INPUT_S)) {
			if (bullet[bullet_num] == nullptr) {
				bullet[bullet_num] = new Bullet(player->GetPositionX(), player->GetPositionY());
				bullet_num = bullet_num + 1;
			}
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

			//playerÇ∆bulletÇÃîªíË
		/*	if (player->CheckCollision(bullet[i]) == true) {
				printfDx("HIT");
			}*/
			if (bullet[i]->CheckCollision(enemy) == true) {
					enemy->hp = enemy->hp - 0.1;
		}
			if (enemy->hp <= 0) {
				enemy->hp = 0;
			}
			}
		}
	if (enemy->CheckCollision(player) == true) {
		printfDx("HIT");
	}
	
	enemy->Update();

	//ìGÇÃHPÇ™0Ç…Ç»ÇÈÇ∆ÉQÅ[ÉÄÉNÉäÉAÇ÷
	if (enemy->hp <= 0) {
		return new GameClearScene();
	}

	if (time <= 0) {
		return new GameOverScene();
	}
	return this;
}

void GamemainScene::Draw()const
{
	player->Draw();

	for (int i = 0; i < BULLETS_MAX; i++) {
		if (bullet[i] != nullptr) {
			bullet[i]->Draw();
		}
	}
	enemy->Draw();

	DrawBox(enemy->x, enemy->y + 70, enemy->x + enemy->hp , enemy->y + 80, 0xfff000, TRUE);

	SetFontSize(30);
	DrawFormatString(1150, 600, 0xffffff, "êßå¿éûä‘");
	SetFontSize(50);
	DrawFormatString(1180, 650, 0xffffff, "%d", time);
}
