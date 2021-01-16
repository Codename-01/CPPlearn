#include <iostream>
using namespace std;

class Base
{
private:
    /* data */
public:
    virtual void f1() = 0;
};

class son1: public Base
{
    void f1(){
        cout<<"this is Polymorphism"<<endl;
    }
};

int main(int argc, char const *argv[])
{
    Base *p = new son1;
    p->f1();
    delete p;
    return 0;
}

