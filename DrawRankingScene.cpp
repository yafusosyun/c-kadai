#include "DrawRankingScene.h"
#include "DxLib.h"
DrawRankingScene::DrawRankingScene()
{
	//ランキング画像データの読み込み
	g_RankingImage = LoadGraph("images/Ranking.bmp");
}
SceneBase* DrawRankingScene::Update()
{
	return nullptr;
}

void DrawRankingScene::Draw() const
{
}

void DrawRankingScene::DraRanking()
{

	//ランキング画像表示
	DrawGraph(0, 0, g_RankingImage, FALSE);

	// ランキング一覧を表示
	SetFontSize(30);
	for (int i = 0; i < 10; i++) {
		DrawFormatString(80, 170 + i * 25, 0xFFFFFF, "%2d   %10s     %10d",
			g_Ranking[i].no, g_Ranking[i].name, g_Ranking[i].score);
	}

	// 文字の表示(点滅)
	if (++g_WaitTime < 30) {
		SetFontSize(24);
		DrawString(150, 450, "--  Press [SPACE] Key  --", 0xFF0000);
	}
	else if (g_WaitTime > 60) {
		
	}
}
