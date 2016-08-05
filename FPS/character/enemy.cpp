#include <btBulletDynamicsCommon.h>
#include "util/objloader.h"
#include "enemy.h"

Enemy::Enemy()
    :Character(100,100,20,btVector3(10,20,10),60,btVector3(0,20,0))
               //TODO:coordinate balanced value
{
}

btVector3 Enemy::interceptorDirection(btVector3 enemyPos, btVector3 enemyVelocity, btVector3 playerPos, btVector3 playerVelocity)
{
    btVector3 interceptPos = playerPos + playerVelocity*(playerPos-enemyPos)/(playerVelocity-enemyVelocity);
    return (interceptPos - enemyPos).normalize();
}