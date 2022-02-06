/*
* Author: Frank Perez
* Date: 12/10/2020
* Description: The user will enter 2 stats for a dragon and the rest will be randomized.
* Purpose: To display understanding of basic oop techniques like inheritence.
*/
#include <iostream>
#include <ctime>
#include <random>
#include "Enemy.h"
#include "Dragon.h"
using namespace std;

int main()
{
    Dragon Charizard;
    cout << "Enter Charizard's attack and health: \n";
    cin >> Charizard;
    cout <<"Charizard's attack and health are: \n";
    cout <<Charizard << endl;
    cout << "Charizard's special skill is " << Charizard.getSpecialSkill() << "." << endl;
    srand(time(0));

    Charizard.setisFlying(rand() % 2);
    if(Charizard.getisFlying() == 1)
    {
        cout << "Charizard is flying." << endl;
    }
    else
    {
        cout << "Charizard is not flying." << endl;
    }
    return 0;
}
