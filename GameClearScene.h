#pragma once
#include "SceneBase.h"
class GameClearScene : public SceneBase
{
public:
    virtual ~GameClearScene() {};

    virtual SceneBase* Update() override;

    virtual void Draw() const override;
};

