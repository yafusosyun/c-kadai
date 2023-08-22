#include "DxLib.h"
#include "CharaBase.h"
#include "Player.h"
#include "Bullet.h"
#include "BulletManager.h"
//test




GamemainScene::GamemainScene()
    : bulletManager(BULLETS_MAX) // BulletManager �N���X�̃C���X�^���X��������
{
    // �������������������邱�Ƃ��ł��܂�
}

GamemainScene::~GamemainScene()
{
    // �f�X�g���N�^�̎������s�����Ƃ��ł��܂�
}

void GamemainScene::HitCheck()
{
    // �����蔻��̏������������邱�Ƃ��ł��܂�
}

SceneBase* GamemainScene::Update()
{
    player.Update();
    bulletManager.Update(); // BulletManager �N���X�̃A�b�v�f�[�g���Ă�

    // ���̑��̃A�b�v�f�[�g�������������邱�Ƃ��ł��܂�

    return this;
}

void GamemainScene::Draw() const
{
    DrawFormatString(0, 0, 0xffffff, "GAMEMAIN");
    player.Draw();
    bulletManager.Draw(); // BulletManager �N���X�̕`����Ă�

    // ���̑��̕`�揈�����������邱�Ƃ��ł��܂�
}