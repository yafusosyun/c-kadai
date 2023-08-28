#pragma once
#include "SphereCollider.h"
#include "Player.h"

#include"main.h"
struct Bullets {
    float x = 0;
    float y = 0;
    int flg = 0;
};


class Bullet : public SphereCollider
{
public:
    int bulletcount = 0;
    int i = 0;

    int count = 0;

    Bullets bullets[BULLETS_MAX];

    Bullet();

    void Update();

    void Draw() const;

    ~Bullet();

    void GetDamage();

    void SetLocationX(int  _x);

    void SetLocationY(int _y);

    int damage;
    int speed;
    int angle;


    int Bulets_speed = 0;
    int Bullets_flg = 0;
    int Bullets_radius = 2;//íeÇÃîºåa
//playerno ÇÃç¿ïW
    int x;
    int y;

    int bulletsx;
    int bulletsy;//íeä€ÇÃç¿ïW

private:
    int PadInput;
    int P_x;
    int P_y;
};

