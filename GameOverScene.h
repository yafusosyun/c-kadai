#pragma once
#include "SceneBase.h"
class GameOverScene : public SceneBase
{
public:
    virtual ~GameOverScene() {};

    virtual SceneBase* Update() override;

    virtual void Draw() const override;
};

