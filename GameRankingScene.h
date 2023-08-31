#pragma once
#include "DxLib.h"
#include "SceneBase.h"
#include "main.h"
#include "GameClearScene.h"
class GameRankingScene :public SceneBase
{
public:
    GameRankingScene();
    virtual ~GameRankingScene() {};

    virtual SceneBase* Update() override;

    virtual void Draw() const override;

private:

  /*  GamemainScene* mainscene;*/

    void SortRanking();
    void SaveRanking();
    void InputRanking();
    int ReadRanking();
 

    int g_WaitTime = 0;
    int	g_RankingImage;			// �摜�p�ϐ�

    // �����L���O�f�[�^�i�\���́j
    struct	RankingData {
        int		no;
        char	name[11];
        long	score;
    };


    // �����L���O�f�[�^�ϐ��錾
struct	RankingData g_Ranking[10];


};

