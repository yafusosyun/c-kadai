#pragma once
#include "SphereCollider.h"
class Bullet : public SphereCollider
{
public:
    void Update();

    void Draw();

    void GetDamage();


    int damage;
    int speed;
    int angle;

};

