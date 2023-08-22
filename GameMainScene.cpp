#include "DxLib.h"
#include "CharaBase.h"
#include "Player.h"
#include "Bullet.h"
#include "BulletManager.h"
//test




GamemainScene::GamemainScene()
    : bulletManager(BULLETS_MAX) // BulletManager クラスのインスタンスを初期化
{
    // 初期化処理を実装することができます
}

GamemainScene::~GamemainScene()
{
    // デストラクタの実装を行うことができます
}

void GamemainScene::HitCheck()
{
    // 当たり判定の処理を実装することができます
}

SceneBase* GamemainScene::Update()
{
    player.Update();
    bulletManager.Update(); // BulletManager クラスのアップデートを呼ぶ

    // その他のアップデート処理を実装することができます

    return this;
}

void GamemainScene::Draw() const
{
    DrawFormatString(0, 0, 0xffffff, "GAMEMAIN");
    player.Draw();
    bulletManager.Draw(); // BulletManager クラスの描画を呼ぶ

    // その他の描画処理を実装することができます
}