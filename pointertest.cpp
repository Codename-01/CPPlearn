#include <iostream>

using namespace std;

void swap(int * a,int * b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap02(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int a = 60;
    int b = 40;
    // int c = 20;
    // int *p=&a;
    // const int *p1 = &a;
    // int * const p2=&c;
    // p1 = &b;
    // *p = 80;
    // *p2 = 15;
    // cout<<*p<<endl;
    // cout<<*p1<<endl;
    // cout<<*p2<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    // swap(&a,&b);
    swap02(a,b);
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    int A[20];
    int *p = A;
    for(int i=0;i<20;i++){
        A[i] = 2*i;
    }
    int i=0;
    while(i<20){
        cout<<*p++<<endl;
        i++;
    }
    return 0;
}