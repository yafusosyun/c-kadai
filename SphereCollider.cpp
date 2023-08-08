#include "SphereCollider.h"
#include <math.h>
 SphereCollider::SphereCollider(int centerX, int centerY, int radius) : centerX(centerX), centerY(centerY), radius(radius)
{
	
}

 bool SphereCollider::CheckCollision(const SphereCollider& otherCollider) const
 {
     int deltaX = otherCollider.centerX - centerX;
     int deltaY = otherCollider.centerY - centerY;
     int distanceSquared = deltaX * deltaX + deltaY * deltaY;
     int radiusSum = radius + otherCollider.radius;

     return distanceSquared <= radiusSum * radiusSum;
 }

