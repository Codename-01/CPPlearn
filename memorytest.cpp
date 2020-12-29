#include <iostream>
using namespace std;
int g_a;
int g_b;
const int g_c=20;
void global_mem()
{
    int a;
    int b;
    const int c=10;
    static int s_a=10;
    cout<<"location of a is : "<<&a<<endl;
    cout<<"location of b is : "<<&b<<endl;
    cout<<"location of c is : "<<&c<<endl;
    cout<<"location of s is : "<<&"Sdfrt"<<endl;
    cout<<"location of s_a is : "<<&s_a<<endl;
    cout<<"location of g_a is : "<<&g_a<<endl;
    cout<<"location of g_b is : "<<&g_b<<endl;
    cout<<"location of g_c is : "<<&g_c<<endl;
}

int *func(){
    int a=10;
    return &a;
}

int *func2(){
    int *a=new int(10);
    return a;
}

void heap_mem(){
    int *p = func2();
    cout<<*p<<endl;
}

void stack_mem()
{
    int *p = func();
    cout<<*p<<endl;
    delete p;
    cout<<p<<endl;
}

int main(int argc, char const *argv[])
{
    heap_mem();
    return 0;
}
