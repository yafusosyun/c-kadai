#include "DxLib.h"
#include"SceneManager.h"
#include"TitleScene.h"
#include "main.h"


int WINAPI WinMain(_In_ HINSTANCE ih, _In_opt_ HINSTANCE ioh, _In_ LPSTR il, _In_ int ii)
{



	//�`���̎w��i����ʂ���J�n����j
	SetDrawScreen(DX_SCREEN_BACK);

	// �E�B���h�E���[�h�ŋN��
	(ChangeWindowMode(TRUE));

	// �E�C���h�E�̃T�C�Y
	SetGraphMode(SCREEN_WIDTH, SCREEN_HEIGHT, 32); 

	// DX���C�u�����̏�����
	if (DxLib_Init() == -1)
	{
		return -1;
	}




	//�ϐ���`
	SceneManager sceneMng(dynamic_cast<SceneBase*>(new TitleScene));






	while (sceneMng.Update() != nullptr && ProcessMessage() != -1)
	{

		ClearDrawScreen();

		sceneMng.Draw();

		ScreenFlip();
	}

	// DX���C�u�����̏I������
	DxLib_End();

	return 0;
}