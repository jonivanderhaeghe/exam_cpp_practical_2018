#include "weapon.h"

namespace SoldierBasher {

Weapon::Weapon(std::string name, int damage) {
    this->name = name;
    this->damage = damage;
}

int Weapon::get_damage(void) {
    return damage;
}

std::string Weapon::to_string(void) {
    return name + " can inflict " + std::to_string(damage) + " damage.";
}

};