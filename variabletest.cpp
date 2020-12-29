#include <iostream>
#include <climits>
#include <string>

using namespace std;

int main(){
    int a;
    unsigned int aa;
    short b;
    unsigned short bb;
    long c;
    long long d;
    string e;
    char f;
    float g;
    double h;
    int A[30];
    a = 40;
    int B[a];
    int *C = new int[a];
    cout<<"length of B is"<<sizeof(B)/sizeof(B[0])<<endl;
    cout<<C[0]<<endl;
    cout<<"size of int is "<<sizeof(a)<<endl;
    cout<<"size of unsigned int is "<<sizeof(aa)<<endl;
    cout<<"size of short is "<<sizeof(b)<<endl;
    cout<<"size of long is "<<sizeof(c)<<endl;
    cout<<"size of long long is "<<sizeof(d)<<endl;
    cout<<"size of string is "<<sizeof(e)<<endl;
    cout<<"size of char is "<<sizeof(f)<<endl;
    cout<<"size of float is "<<sizeof(g)<<endl;
    cout<<"size of double is "<<sizeof(h)<<endl;
    cout<<"size of int array is "<<sizeof(A)<<endl;
    bb = 0;
    bb--;
    cout<<"the aggressiveness of gandhi is "<<bb<<endl;
    return 0;
}