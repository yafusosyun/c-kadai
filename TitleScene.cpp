#include "TitleScene.h"
#include "GameMainScene.h"
#include "DxLib.h"
SceneBase* TitleScene::Update()
{
	// �y�L�[�Ń��j���[�I��
	if (g_KeyFlg & PAD_INPUT_A) {
		return new GamemainScene();
	}


	// ���̓L�[�擾
	g_OldKey = g_NowKey;
	g_NowKey = GetJoypadInputState(DX_INPUT_KEY_PAD1);
	g_KeyFlg = g_NowKey & ~g_OldKey;

	return this;
}

void TitleScene::Draw() const
{
	//�^�C�g���̕����\��
	SetFontSize(100);
	DrawFormatString(0, 0, GetColor(255, 255, 255), "shoot");
	SetFontSize(75);
	DrawFormatString(1000, 520, GetColor(200, 330, 255), "Start");

	//// ���j���[�J�[�\���i�O�p�`�j�̕\��
	DrawTriangle(940, 540, 960, 560, 940, 580, GetColor(255, 0, 0), TRUE);

	
}
