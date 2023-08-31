#pragma once
#include "SceneBase.h"
#include "main.h"

class DrawRankingScene : public SceneBase
{
public:
	int	g_OldKey;				// �O��̓��̓L�[
	int	g_NowKey;				// ����̓��̓L�[
	int	g_KeyFlg;				// ���̓L�[���

	int	g_RankingImage;			// �摜�p�ϐ�

	// �����L���O�f�[�^�i�\���́j
	struct	RankingData {
		int		no;
		char	name[11];
		long	score;
	};


	// �����L���O�f�[�^�ϐ��錾
	struct	RankingData g_Ranking[10];

	int g_WaitTime = 0;

	DrawRankingScene();
	virtual ~DrawRankingScene() {};

	virtual SceneBase* Update() override;

	virtual void Draw() const override;

	void DraRanking();
};

