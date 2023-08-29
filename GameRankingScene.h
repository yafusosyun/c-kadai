#pragma once
#include "SceneBase.h"
class GameRankingScene :public SceneBase
{
    virtual ~GameRankingScene() {};

    virtual SceneBase* Update() override;

    virtual void Draw() const override;
};

