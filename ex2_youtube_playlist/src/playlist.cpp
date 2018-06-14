#include "playlist.h"

namespace YouTube {

PlayList::PlayList(std::string name) {
    this->name = name;
}

std::string PlayList::get_name(void) {
    return name;
}

void PlayList::add(Video video) {
    // TODO: This method needs implementation
}

PlayList PlayList::search(std::string keyword) {
    PlayList searchResults("containing \"" + keyword + "\"");
    // TODO: This method needs implementation

    return searchResults;
}

std::string PlayList::to_string(void) {
    std::string output = "Playlist " + name;
    
    if (videos.size() > 0) {
        output += "\r\n" + std::string(output.length()-2, '-') + "\r\n" + "\r\n";

        for (unsigned int i = 0; i < videos.size(); i++) {
            output += videos[i].to_string() + "\r\n";
        }
    } else {
        output += " is empty";
    }

    return output;
}

};