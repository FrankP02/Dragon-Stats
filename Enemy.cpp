#include <iostream>
#include <ctime>
#include "Enemy.h"
#include "Dragon.h"
using namespace std;
//Enemy
Enemy::Enemy()
{
    health = 1;
    attack = 1;
    if(health<0)
        isAlive = true;
    else
        isAlive = false;
}
Enemy::Enemy(int health_, int attack_)
{
    health = health_;
    attack = attack_;
    isAlive = true;

}
//get and set
int Enemy::getHealth() const
{
    return health;
}
int Enemy::getAttack() const
{
    return attack;
}
void Enemy::setAttack(int attack_)
{
    attack = attack_;
}
void Enemy::setHealth(int health_)
{
    health = health_;
}
