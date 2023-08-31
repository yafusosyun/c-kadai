#include "DxLib.h"
#include"SceneManager.h"
#include"TitleScene.h"
#include "main.h"


int WINAPI WinMain(_In_ HINSTANCE ih, _In_opt_ HINSTANCE ioh, _In_ LPSTR il, _In_ int ii)
{



	//描画先の指定（裏画面から開始する）
	SetDrawScreen(DX_SCREEN_BACK);

	// ウィンドウモードで起動
	(ChangeWindowMode(TRUE));

	// ウインドウのサイズ
	SetGraphMode(SCREEN_WIDTH, SCREEN_HEIGHT, 32); 

	// DXライブラリの初期化
	if (DxLib_Init() == -1)
	{
		return -1;
	}




	//変数定義
	SceneManager sceneMng(dynamic_cast<SceneBase*>(new TitleScene));






	while (sceneMng.Update() != nullptr && ProcessMessage() != -1)
	{

		ClearDrawScreen();

		sceneMng.Draw();

		ScreenFlip();
	}

	// DXライブラリの終了処理
	DxLib_End();

	return 0;
}