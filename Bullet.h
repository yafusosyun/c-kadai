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
    int Bullets_radius = 10;//�e�̔��a
//playerno �̍��W
    int x;
    int y;

    int bulletsx;
    int bulletsy;//�e�ۂ̍��W



private:
    int PadInput;
    Player* player;

    Bullets bullets[BULLETS_MAX];
};

