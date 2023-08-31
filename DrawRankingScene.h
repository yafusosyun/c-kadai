#pragma once
#include "SceneBase.h"
#include "main.h"

class DrawRankingScene : public SceneBase
{
public:
	int	g_OldKey;				// 前回の入力キー
	int	g_NowKey;				// 今回の入力キー
	int	g_KeyFlg;				// 入力キー情報

	int	g_RankingImage;			// 画像用変数

	// ランキングデータ（構造体）
	struct	RankingData {
		int		no;
		char	name[11];
		long	score;
	};


	// ランキングデータ変数宣言
	struct	RankingData g_Ranking[10];

	int g_WaitTime = 0;

	DrawRankingScene();
	virtual ~DrawRankingScene() {};

	virtual SceneBase* Update() override;

	virtual void Draw() const override;

	void DraRanking();
};

