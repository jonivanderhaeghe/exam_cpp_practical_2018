#include "playlist.h"

#include "string_helper.h"          // ERUIT

namespace YouTube {

PlayList::PlayList(std::string name) {
    this->name = name;
}

std::string PlayList::get_name(void) {
    return name;
}

void PlayList::add(Video video) {
    this->videos.push_back(video);
}

PlayList PlayList::search(std::string keyword) {
    keyword = StringHelper::to_lower_case(keyword);
    PlayList searchResults("containing \"" + keyword + "\"");

    for (unsigned int i = 0; i < videos.size(); i++) {
        if (StringHelper::to_lower_case(videos[i].get_title()).find(keyword) != std::string::npos
            || StringHelper::to_lower_case(videos[i].get_author()).find(keyword) != std::string::npos) {
            searchResults.add(videos[i]);
        }
    }

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