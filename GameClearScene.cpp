#include "GameClearScene.h"
#include "DxLib.h"

SceneBase* GameClearScene::Update()
{
	int PadInput;

	PadInput = GetJoypadInputState(DX_INPUT_KEY_PAD1);

	PadInput = GetJoypadInputState(DX_INPUT_PAD1);

	
	return this;
}

void GameClearScene::Draw() const
{
	SetFontSize(100);
	DrawFormatString(600,300,0xffffff,"GAMECLEAR");
}
