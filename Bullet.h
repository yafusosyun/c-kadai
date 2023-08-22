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
    int  Bullets_flg = 0;
    int bulletsx = 300;
    int bulletsy = 500;
    int Bulets_speed = 5;

    Bullet();

    void Update();

    void Draw() const;

    void Spawn(int playerX, int playerY);
    bool IsActive() const;



    ~Bullet();

    void GetDamage();


//    int damage;
//    int speed;
//    int angle;
//
//
//    int Bulets_speed = 0;
//    int Bullets_flg = 0;
//    int Bullets_radius = 10;//íeÇÃîºåa
////playerno ÇÃç¿ïW
//    int x;
//    int y;
//
//    int bulletsx;
//    int bulletsy;//íeä€ÇÃç¿ïW


    Player player;

private:

    bool active;
    int x;
    int y;

    int PadInput;

    Bullets bullets[BULLETS_MAX];
};

