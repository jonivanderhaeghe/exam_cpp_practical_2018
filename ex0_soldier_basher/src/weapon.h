#pragma once

#include <string>

namespace SoldierBasher {

    class Weapon {

        public:
            Weapon(std::string name, int damage);

        public:
            int get_damage(void);

        public:
            std::string to_string(void);

        private:
            std::string name;
            int damage;
    };

};