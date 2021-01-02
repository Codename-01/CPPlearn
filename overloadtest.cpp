#include <iostream>
using namespace std;
//重载

void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}

void swap(float &a,float &b){
    float temp = a;
    a = b;
    b = temp;
}

void func(const float &a,const float &b){
    cout<<"a:"<<a<<" b:"<<b<<endl;
}

int main(int argc, char const *argv[])
{
    int a = 10;
    int b = 20;
    float c = 10.5;
    float d = 20.5;
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
    cout<<"c: "<<c<<endl;
    cout<<"d: "<<d<<endl;
    swap(a,b);
    swap(c,d);
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
    cout<<"c: "<<c<<endl;
    cout<<"d: "<<d<<endl;
    func(c,d);
    return 0;
}
