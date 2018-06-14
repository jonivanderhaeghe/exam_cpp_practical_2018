#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double determine_distance(double x1, double y1, double x2, double y2) {
    return sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
}

void print_to_screen(double x, double y) {
    cout << "(" << to_string(x) << ", " << to_string(y) << ")" << endl;
}

void get_the_midpoint(double x1, double y1, double x2, double y2, double * xmid, double * ymid) {
    // Result is returned in the pointers xmid and ymid as we can only return a single value

    *xmid = (x1 + x2) / 2;
    *ymid = (y1 + y2) / 2;
}

int main(void) {

    double x1 = 0;
    double x2 = 0;
    double y1 = 0;
    double y2 = 0;

    x1 = 12.34;
    y1 = 32.88;
    
    x2 = -15.47;
    y2 = 11.77;

    // Print start and end
    cout << "Start of line: ";
    print_to_screen(x1, y1);
    cout << "End of line: ";
    print_to_screen(x2, y2);
    cout << endl;

    cout << "Length: " << to_string(determine_distance(x1, y1, x2, y2)) << endl;

    double xmid;
    double ymid;
    get_the_midpoint(x1, y1, x2, y2, &xmid, &ymid);
    cout << "Mid of the two points: ";
    print_to_screen(xmid, ymid);
    cout << endl;

    

    return 0;
}