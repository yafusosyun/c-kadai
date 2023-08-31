#include "TitleScene.h"
#include "GameMainScene.h"
#include "DxLib.h"
SceneBase* TitleScene::Update()
{
	// Ｚキーでメニュー選択
	if (g_KeyFlg & PAD_INPUT_A) {
		return new GamemainScene();
	}


	// 入力キー取得
	g_OldKey = g_NowKey;
	g_NowKey = GetJoypadInputState(DX_INPUT_KEY_PAD1);
	g_KeyFlg = g_NowKey & ~g_OldKey;

	return this;
}

void TitleScene::Draw() const
{
	//タイトルの文字表示
	SetFontSize(100);
	DrawFormatString(0, 0, GetColor(255, 255, 255), "shoot");
	SetFontSize(75);
	DrawFormatString(1000, 520, GetColor(200, 330, 255), "Start");

	//// メニューカーソル（三角形）の表示
	DrawTriangle(940, 540, 960, 560, 940, 580, GetColor(255, 0, 0), TRUE);

	
}
