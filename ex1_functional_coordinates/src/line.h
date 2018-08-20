#pragma once

#include <string>
#include "point.h"

class Line {

    public:
        Line(void);
        Line(double xStart, double yStart, double xEnd, double yEnd);
        Line(Point start, Point end);

    public:
        double length(void);
        Point get_middle(void);

    public:
        std::string to_string(void);

    private:
        Point start;
        Point end;
};