#include <iostream>
#include <string>
#include "line.h"

using namespace std;

int main(void) {
    Line line(12.34, 32.88, -15.47, 11.77);
    cout << line.to_string() << endl << endl;
    cout << "Length: " << to_string(line.length()) << endl;
    cout << "Mid of the two points: " << line.get_middle().to_string() << endl;

    return 0;
}