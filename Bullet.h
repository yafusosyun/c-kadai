#pragma once
#include "SphereCollider.h"
#include "Player.h"
#define BULLETS_MAX 1000
#include"main.h"
struct Bullets {
    int x = 0;
    int y = 0;
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


    Player player;

private:
    int PadInput;

};

