#include <iostream>

using namespace std;


int & func(int &a){
    // int a = 20;
    static int b = a+20;
    return b;
}

int & func2(int &a){
    int *b = new int(a);

    return *b;
}

int main(int argc, char const *argv[])
{
    int a=10;
    int &ref = func(a);
    func(a) = 1000;//函数调用可以作为左值
    cout<<ref<<endl;
    return 0;
}
