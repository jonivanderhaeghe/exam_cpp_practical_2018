#include "point.h"
#include <cmath>

Point::Point(void)
    : Point(0, 0) {
}

Point::Point(double x, double y) {
    this->x = x;
    this->y = y;
}

double Point::get_x(void) {
    return x;
}

double Point::get_y(void) {
    return y;
}

double Point::distance_from(Point point) {
    return sqrt((point.x - x)*(point.x - x) + (point.y - y)*(point.y - y));
}

std::string Point::to_string(void) {
    return "(" + std::to_string(x) + ", " + std::to_string(y) + ")";
}