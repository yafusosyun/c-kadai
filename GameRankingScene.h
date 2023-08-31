#pragma once
#include "DxLib.h"
#include "SceneBase.h"
#include "main.h"
#include <string>
class GameRankingScene :public SceneBase
{
public:
    GameRankingScene();
    virtual ~GameRankingScene() {};

    virtual SceneBase* Update() override;

    virtual void Draw() const override;

private:
    std::string playerName;
    int currentCharIndex;
};

