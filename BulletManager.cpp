#include "BulletManager.h"

BulletManager::BulletManager(int maxBullets):maxBullets(maxBullets)
{
    bullets = new Bullet * [maxBullets];
    for (int i = 0; i < maxBullets; i++) {
        bullets[i] = new Bullet();
    }
}

BulletManager::~BulletManager()
{
    for (int i = 0; i < maxBullets; i++) {
        delete bullets[i];
    }
    delete[] bullets;
}

void BulletManager::Update()
{
    for (int i = 0; i < maxBullets; i++) {
        bullets[i]->Update();
    }
}

void BulletManager::Draw() const
{
    for (int i = 0; i < maxBullets; i++) {
        bullets[i]->Draw();
    }
}

void BulletManager::SpawnBullet(int playerX, int playerY)
{
    for (int i = 0; i < maxBullets; i++) {
        if (!bullets[i]->IsActive()) {
            bullets[i]->Spawn(playerX, playerY);
            break;
        }
    }
}
