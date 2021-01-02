//封装测试
#include <iostream>

using namespace std;

const double PI=3.14;

class Circle
{
private:
    /* data */
    float m_r;
public:
    
    Circle(float &r);
    ~Circle();
    double calculatePerimeter(){
        return 2*PI*m_r;
    }
};

Circle::Circle(float &r){
    Circle::m_r = r;
}

Circle::~Circle(){

}


int main(int argc, char const *argv[])
{
    float r;
    cout<<"input the radius:"<<endl;
    cin>>r;
    Circle c1(r);
    cout<<"the Perimeter of the circle is:"<<c1.calculatePerimeter()<<endl;
    return 0;
}
