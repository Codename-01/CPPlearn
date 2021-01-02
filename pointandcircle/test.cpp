#include "point.h"
#include "circle.h"
#include <iostream>
using namespace std;


void point2circle(point &x,circle &A){
    float dis = (A.get_centerX()-x.getX())*(A.get_centerX()-x.getX())+(A.get_centerY()-x.getY())*(A.get_centerY()-x.getY());
    if(dis>A.get_r()){
        cout<<"point is outside of the circle"<<endl;
    }
    else if (dis==A.get_r())
    {
        cout<<"point is on the circle"<<endl;
    }
    else
    {
        cout<<"point is inside of the circle"<<endl;
    }
    
    
}

int main(int argc, char const *argv[])
{
    circle A(0,0,3);
    point x;
    x.setpoint(3,3);
    point2circle(x,A);
    return 0;
}
