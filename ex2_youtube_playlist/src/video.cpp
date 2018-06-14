#include "video.h"

namespace YouTube {

Video::Video(void)
    : Video("", "", 0) {
}

Video::Video(std::string author, std::string title, int duration, int likes) {
    this->title = title;
    this->author = author;
    this->duration = duration;
    this->likes = likes;
}

std::string Video::get_title(void) {
    return title;
}

std::string Video::get_author(void) {
    return author;
}

int Video::get_duration(void) {
    return duration;
}

unsigned int Video::get_likes(void) {
    return likes;
}

void Video::like(void) {
    likes++;
}

std::string Video::to_string(void) {
    // TODO: This method needs implementation
    return "Video to_string() method incomplete. Please FIX.";
}

};