#pragma once

#include <string>

namespace YouTube {

    class Video {

        public:
            Video(void);
            Video(std::string author, std::string title, int duration, int likes=0);

        public:
            std::string get_title(void);
            std::string get_author(void);
            int get_duration(void);
            unsigned int get_likes(void);

        public:
            void like(void);

        public:
            std::string to_string(void);

        private:
            std::string title;
            std::string author;
            int duration;
            unsigned int likes;
    };

};