#include <iostream>
#include <cstdlib>
#include <ctime>
#include "playlist.h"

using namespace std;

int main(void) {
    srand(182);

    cout << "YouTube PlayList Application" << endl << endl;

    YouTube::Video toxicity("System of a Down", "Toxicity", 223, (unsigned int)(rand()));
    YouTube::Video bell("Metallica", "For Whom The Bell Tolls", 313, (unsigned int)(rand()));
    YouTube::Video memory("Metallica", "The Memory Remains", 278, (unsigned int)(rand()));
    YouTube::Video links("Rammstein", "Links 2 3 4", 216, (unsigned int)(rand()));
    YouTube::Video bodies("Drowning Pool", "Bodies", 219, (unsigned int)(rand()));
    YouTube::Video kings("Manowar", "Kings of Metal", 224, (unsigned int)(rand()));
    YouTube::Video dragula("Rob Zombie", "Dragula", 228, (unsigned int)(rand()));
    YouTube::Video tribute("Tenacious D", "Tribute", 293, (unsigned int)(rand()));
    YouTube::Video ragnar("Avenged Sevenfold", "Hail to the King Ragnar", 303, (unsigned int)(rand()));

    YouTube::PlayList metal("Heavy Metal");
    metal.add(toxicity);
    metal.add(bell);
    metal.add(memory);
    metal.add(links);
    metal.add(bodies);
    metal.add(kings);
    metal.add(dragula);
    metal.add(tribute);
    metal.add(ragnar);

    cout << metal.to_string() << std::endl;

    std::string keyword;
    cout << "Give a keyword to search for in playlist: ";
    cin >> keyword;

    cout << endl << "Search results:" << endl;
    cout << metal.search(keyword).to_string() << endl;
    
    return 0;
}