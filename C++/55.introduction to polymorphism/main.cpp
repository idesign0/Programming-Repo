#include <iostream>

using namespace std;

#include "enemy.h"
#include "ninja.h"
#include "monster.h"

#include "ninja.cpp"
#include "enemy.cpp"
#include "monster.cpp"


int main()
{
    ninja ni;
    monster mo;

    enemy *enemy1 = &ni; // because ninja is one type of enemy this is valid
    enemy *enemy2 = &mo; // anything that enemy can do , ninja can do

    enemy1->attackfun(36); // ninja is more specific type of enemy
    enemy2->attackfun(544); // every enemy has attack power

    ni.attacknin(); // cant use enemy 1 , because it is type enemy
    mo.attackmon(); // enemy class doesn't have attack
}
