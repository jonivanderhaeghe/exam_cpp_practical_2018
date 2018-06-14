#include <iostream>

#include "soldier.h"

using namespace std;
using namespace SoldierBasher;

int main(void) {

    Soldier chuck("Chuck");
    chuck.equip(new Weapon("Bazooka", 55));
    
    Soldier rambo("Rambo");
    rambo.equip(new Weapon("Knife", 23));
    
    cout << chuck.to_string() << endl;
    cout << rambo.to_string() << endl;

    rambo.fight(&chuck);

    cout << chuck.to_string() << endl;
    cout << rambo.to_string() << endl;

    rambo.fight(&chuck);

    cout << chuck.to_string() << endl;
    cout << rambo.to_string() << endl;

    return 0;
}