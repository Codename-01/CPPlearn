#include <iostream>
using namespace std;

class vector2d {
    friend ostream & operator<<(ostream &cout,vector2d a);
    private:
        float x;
        float y;
    public:
        vector2d & operator++();
        vector2d operator++(int);
        vector2d(){}
        vector2d(float x,float y);
        vector2d operator+(vector2d &a);
        // void showVector();
        ~vector2d(){}
};

// void vector2d::showVector(){
//     cout<<"x = "<<this->x<<endl;
//     cout<<"y = "<<this->y<<endl;
// }

//全局函数运算符重载，并作为类的友元访问私有属性
ostream & operator<<(ostream &cout,vector2d a){
    cout<<"x = "<<a.x<<endl;
    cout<<"y = "<<a.y;
    return cout;
}


vector2d & vector2d::operator++(){
    this->x = this->x+0.1;
    this->y = this->y+0.1;
    return *this;
}

vector2d vector2d::operator++(int){
    vector2d temp = *this;
    this->x = this->x+0.1;
    this->y = this->y+0.1;
    return temp;
}


vector2d::vector2d(float x,float y){
    this->x = x;
    this->y = y;
}

vector2d vector2d::operator+(vector2d &a){
    vector2d temp;
    temp.x = this->x+a.x;
    temp.y = this->y+a.y;
    return temp;
}

int main(int argc, char const *argv[])
{
    vector2d a1(0.5,0.9);
    vector2d a2(1.5,-2.8);
    vector2d a3 = a1+a2;
    cout<<a3<<endl;
    cout<<++(++a3)<<endl;
    cout<<a3++<<endl;
    // a3++;
    cout<<a3<<endl;
    return 0;
}
