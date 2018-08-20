#pragma once

#include <string>

class Point {

    public:
        Point(void);
        Point(double x, double y);

    public:
        double get_x(void);
        double get_y(void);

    public:
        double distance_from(Point point);

    public:
        std::string to_string(void);

    private:
        double x;
        double y;
};