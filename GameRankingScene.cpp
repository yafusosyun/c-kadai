#include "GameRankingScene.h"
#include "GameMainScene.h"
#include "DrawRankingScene.h"
GameRankingScene::GameRankingScene()
{
	//mainscene = new GamemainScene();
}

SceneBase* GameRankingScene::Update()
{
	//ランキング画像表示
	DrawGraph(0, 0, g_RankingImage, FALSE);

	// フォントサイズの設定
	SetFontSize(20);

	// 名前入力指示文字列の描画
	DrawString(150, 240, "ランキングに登録します", 0xFFFFFF);
	DrawString(150, 270, "名前を英字で入力してください", 0xFFFFFF);

	// 名前の入力
	DrawString(150, 310, "> ", 0xFFFFFF);
	DrawBox(160, 305, 300, 335, 0x000055, TRUE);
	if (KeyInputSingleCharString(170, 310, 10, g_Ranking[9].name, FALSE) == 1) {
		//g_Ranking[9].score = mainscene->time;	// ランキングデータの１０番目にスコアを登録
		SortRanking();		// ランキング並べ替え
		SaveRanking();		// ランキングデータの保存
		if (PAD_INPUT_A) {
			return new DrawRankingScene();
		}
	}

    return this;
}

void GameRankingScene::Draw() const
{
  
}

void GameRankingScene::SortRanking()
{
	int i, j;
	RankingData work;

	// 選択法ソート
	for (i = 0; i < 9; i++) {
		for (j = i + 1; j < 10; j++) {
			if (g_Ranking[i].score <= g_Ranking[j].score) {
				work = g_Ranking[i];
				g_Ranking[i] = g_Ranking[j];
				g_Ranking[j] = work;
			}
		}
	}

	// 順位付け
	for (i = 0; i < 10; i++) {
		g_Ranking[i].no = 1;
	}
	// 得点が同じ場合は、同じ順位とする
	// 同順位があった場合の次の順位はデータ個数が加算された順位とする
	for (i = 0; i < 9; i++) {
		for (j = i + 1; j < 10; j++) {
			if (g_Ranking[i].score > g_Ranking[j].score) {
				g_Ranking[j].no++;
			}
		}
	}
}

void GameRankingScene::SaveRanking()
{
	FILE* fp;
#pragma warning(disable:4996)

	// ファイルオーrtプン
	if ((fp = fopen("dat/rankingdata.txt", "w")) == NULL) {
		/* エラー処理 */
		printf("Ranking Data Error\n");
	}

	// ランキングデータ分配列データを書き込む
	for (int i = 0; i < 10; i++) {
		fprintf(fp, "%2d %10s %10d\n", g_Ranking[i].no, g_Ranking[i].name, g_Ranking[i].score);
	}

	//ファイルクローズ
	fclose(fp);

}

void GameRankingScene::InputRanking()
{

}

int GameRankingScene::ReadRanking()
{
	return 0;
}



//int GameRankingScene::ReadRanking()
//{
//	return 0;
//}
