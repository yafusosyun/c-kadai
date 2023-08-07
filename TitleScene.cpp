#include "TitleScene.h"
#include "GameMainScene.h"
#include "DxLib.h"
SceneBase* TitleScene::Update()
{
	//���j���[�J�[�\���ړ�����
	if (g_KeyFlg & PAD_INPUT_DOWN) {
		if (++g_MenuNumber > 1) g_MenuNumber = 0;
	}
	if (g_KeyFlg & PAD_INPUT_UP) {
		if (--g_MenuNumber < 0) g_MenuNumber = 2;
	}


	// �y�L�[�Ń��j���[�I��
	if (g_KeyFlg & PAD_INPUT_A) {
		if (g_MenuNumber == 0) {
			return new GameMainScene();
		}
	
	}
	//���j���[�J�[�\���i�O�p�`�j�̕\��
	g_MenuY = g_MenuNumber * 80;

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
	DrawFormatString(400, 320, GetColor(200, 330, 255), "Start");
	DrawFormatString(400, 400, GetColor(200, 330, 255), "End");

	//// ���j���[�J�[�\���i�O�p�`�j�̕\��
	DrawTriangle(340, 340 + g_MenuY, 360, 360 + g_MenuY, 340, 380 + g_MenuY, GetColor(255, 0, 0), TRUE);

	SetFontSize(40);
	DrawFormatString(5, 430, GetColor(255, 255, 255),"*Z�L�[�őI��");
}
