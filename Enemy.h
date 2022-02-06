#ifndef ENEMY_H_INCLUDED
#define ENEMY_H_INCLUDED
#include <iostream>
#include <ctime>
//#include "Enemy.h"
//#include "Dragon.h"
using namespace std;
class Enemy
{
protected:
    //member variables
    int health;
    int attack;
    bool isAlive;

public:
    //Member functions
    //constructors
    Enemy();
    Enemy(int health_, int attack_);
    //get and set
    int getHealth() const;
    int getAttack() const;
    void setAttack(int attack_);
    void setHealth(int health_);
};
#pragma once
#endif // ENEMY_H_INCLUDED
