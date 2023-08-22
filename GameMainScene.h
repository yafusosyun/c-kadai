#pragma once
#include "SceneBase.h"
#include "Player.h"
#include "Bullet.h"
//test
#include "BulletManager.h"

class GamemainScene : public SceneBase
{
public:

    GamemainScene();
    ~GamemainScene();

    void HitCheck();

    SceneBase* Update() override;

    void Draw() const override;

    int life;
    int* enemy[3];

private:
    Player player;
    BulletManager bulletManager;
};

