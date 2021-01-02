#include "point.h"
#include "circle.h"

circle::circle(const float &x, const float &y, const float &r)
{
    circle::center.setpoint(x,y);
    circle::rad = r;
}

circle::~circle()
{
}

float circle::get_centerX(){
    return circle::center.getX();
}

float circle::get_centerY(){
    return circle::center.getY();
}

float circle::get_r(){
    return circle::rad;
}