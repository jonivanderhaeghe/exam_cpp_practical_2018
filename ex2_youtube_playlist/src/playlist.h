#pragma once

#include "video.h"
#include <string>
#include <vector>

namespace YouTube {

    class PlayList {

        public:
            PlayList(std::string name);

        public:
            std::string get_name(void);

        public:
            void add(Video video);
            PlayList search(std::string keyword);

        public:
            std::string to_string(void);

        private:
            std::string name;
            std::vector<Video> videos;
    };

};