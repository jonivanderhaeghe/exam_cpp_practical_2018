#include "soldier.h"

namespace SoldierBasher {

Soldier::Soldier(std::string name) {
    this->name = name;
    health = 100;
    equip(nullptr);
}

Soldier::~Soldier(void) {
    delete weapon;
}

void Soldier::equip(Weapon * weapon) {
    if (weapon) {
        delete this->weapon;
        this->weapon = weapon;
    } else {
        this->weapon = new Weapon("Fists", 1);
    }
}
void Soldier::fight(Soldier * soldier) {
    if (!soldier->is_alive() || !is_alive()) {
        return;
    }

    soldier->damage(weapon->get_damage());
    this->damage(soldier->weapon->get_damage());
}

std::string Soldier::to_string(void) {
    std::string output = "Soldier " + name;
    if (is_alive()) {
        output += " has " + std::to_string(health) + " left.";
    } else {
        output += " is dead.";
    }
    return output;
}

bool Soldier::is_alive(void) {
    return health >= 0;
}

void Soldier::damage(int amount) {
    health -= amount;
}

};