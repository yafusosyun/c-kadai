#pragma once
#include "SphereCollider.h"
#include "Player.h"
#define BULLETS_MAX 1000

struct Bullets {
    int x = 0;
    int y = 0;
    int flg = 0;
};


class Bullet : public SphereCollider
{
public:


    //�e�� ���Z�b�g
        void BubbleReset() {
        for (int i = 0; i < BULLETS_MAX; i++) {
            bullets[i].flg = 0;
        };
    };



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


    Player* player;

private:
    int PadInput;

    Bullets bullets[BULLETS_MAX];
};

