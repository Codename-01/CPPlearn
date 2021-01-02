#ifndef POINT_h
#define POINT_h

#include <iostream>
using namespace std;

class point
{
private:
    float x;
    float y;
public:
    void setpoint(const float &x, const float &y);
    float getX();
    float getY();
};

#endif
