#include <iostream>
#include <ctime>
//#include "Enemy.h"
#include "Dragon.h"
using namespace std;
//Dragon
Dragon::Dragon()
{
    srand(time(0));
    int x = rand()%5;

    if(x == 0)
    {
        specialSkill = "Dragon Claw";
    }
    else if(x == 1)
    {
        specialSkill = "Incendiary Slash";
    }
    else if(x == 2)
    {
        specialSkill = "Frost Breath";
    }
    else if(x == 3)
    {
        specialSkill = "Overheated Rage";
    }
    else if(x == 4)
    {
        specialSkill = "Devastating Bite";
    }
    isFlying = false;
}
Dragon::Dragon(string specialSkill_, int health_, int attack_)
{
    specialSkill = specialSkill_;
    health = health_;
    attack = attack_;
    if(health_ >= 1)
    {
        isFlying = true;
    }
    else
    {
        isFlying = false;
    }
}
//get and set
string Dragon::getSpecialSkill() const
{
    return specialSkill;
}
bool Dragon::getisFlying() const
{
    return isFlying;
}
void Dragon::setSpecialSkill(string SpecialSkill_)
{
    specialSkill = SpecialSkill_;
}
void Dragon::setisFlying(bool isFlying_)
{
    isFlying = isFlying_;
}
//overloaded << and >>
int attak;
int helth;
istream& operator >>(istream& in, Dragon &Charizard)
{
    in >> attak;
    Charizard.setAttack(attak);
    in >> helth;
    Charizard.setHealth(helth);
    return in;
}
ostream& operator <<(ostream& out, const Dragon &Charizard)
{
    out << Charizard.getAttack() << endl;
    out << Charizard.getHealth() << endl;
    return out;
}
