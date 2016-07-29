#include "character.h"

Character::Character(int hp, int speed, int power, btVector3 halfExtents,
                     btScalar mass, btVector3 pos)
    : hp_(std::move(hp)), speed_(std::move(speed)), power_(std::move(power)),
      entity_(halfExtents, mass, pos)
{
}

int Character::getHp()
{
    return hp_;
}

int Character::getPower()
{
    return power_;
}

int Character::getSpeed()
{
    return speed_;
}

Character::CharacterBody::CharacterBody(btVector3 halfExtents, btScalar mass,
                                        btVector3 pos)
    : halfExtents_(std::move(halfExtents)), mass_(std::move(mass)),
      pos_(std::move(pos)),inertia_(btVector3(0,0,0)),axis_(btVector3(0,1,0)),angle_(btScalar(0.f)),restitution_(0.8f),friction_(0.7f)
{
}
