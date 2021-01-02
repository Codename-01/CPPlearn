#include "point.h"

void point::setpoint(const float &x, const float &y){
    point::x = x;
    point::y = y;
}

float point::getX(){
    return point::x;
}

float point::getY(){
    return point::y;
}