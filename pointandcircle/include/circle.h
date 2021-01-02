#ifndef CIRCLE_h
#define CIRCLE_h

#include <iostream>
#include "point.h"
using namespace std;

class circle
{
private:
    float rad;
    point center;
public:
    circle(const float &x, const float &y, const float &r);
    float get_centerX();
    float get_centerY();
    float get_r();
    ~circle();
};

#endif