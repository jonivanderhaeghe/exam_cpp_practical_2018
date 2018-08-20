#include "line.h"

Line::Line(void)
    : Line(0, 0, 0, 0) {
}

Line::Line(double xStart, double yStart, double xEnd, double yEnd)
    : Line(Point(xStart, yStart), Point(xEnd, yEnd)) {
}

Line::Line(Point start, Point end) {
    this->start = start;
    this->end = end;
}

double Line::length(void) {
    return start.distance_from(end);
}

Point Line::get_middle(void) {
    return Point((start.get_x() + end.get_x())/2, (start.get_y() + end.get_y())/2);
}

std::string Line::to_string(void) {
    return "Start of line: " + start.to_string() + "\r\n"
        + "End of line: " + end.to_string();
}
