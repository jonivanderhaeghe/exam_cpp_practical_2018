#pragma once

#include <string>
#include "weapon.h"

namespace SoldierBasher {

    class Soldier {

        public:
            Soldier(std::string name);
            virtual ~Soldier(void);

        public:
            void equip(Weapon * weapon);
            void fight(Soldier * soldier);
            bool is_alive(void);

        public:
            std::string to_string(void);

        private:
            void damage(int amount);

        private:
            std::string name;
            int health;
            Weapon * weapon;
    };

};