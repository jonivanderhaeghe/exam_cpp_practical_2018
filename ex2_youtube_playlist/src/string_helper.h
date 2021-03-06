#pragma once

#include <string>
#include <algorithm>
#include <cctype>

class StringHelper {

    public:
        static std::string to_lower_case(std::string str) {
            std::transform(str.begin(), str.end(), str.begin(), 
                        [](unsigned char c){ return std::tolower(c); }
                );
            return str;
        }

};