#ifndef DRAGON_H_INCLUDED
#define DRAGON_H_INCLUDED
#include <iostream>
#include <ctime>
#include "Enemy.h"
//#include "Dragon.h"
using namespace std;

class Dragon : public Enemy
{
protected:
    string specialSkill;
    bool isFlying;
public:
    //constructors
    Dragon();
    Dragon(string specialSkill_, int health_, int attack_);
    //get and set
    string getSpecialSkill() const;
    bool getisFlying() const;
    void setSpecialSkill(string SpecialSkill_);
    void setisFlying(bool isFlying_);
    //overloaded << and >>
    friend ostream& operator <<(ostream& out, const Dragon &Charizard);
    friend istream& operator >>(istream& in, Dragon &Charizard);
};
#pragma once

#endif // DRAGON_H_INCLUDED
