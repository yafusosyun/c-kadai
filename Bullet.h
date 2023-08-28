#pragma once
#include "SphereCollider.h"
#include "Player.h"

#include"main.h"

class Bullet : public SphereCollider
{
public:
 
    Bullet(int px,int py);

    void Update();

    void Draw() const;

    ~Bullet();

    void GetDamage();

    void SetLocationX(int  _x);

    void SetLocationY(int _y);

    int damage;
    int speed;
    int angle;



private:
    int PadInput;
    int P_x;
    int P_y;
};