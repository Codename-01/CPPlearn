#include <iostream>
using namespace std;

class Person
{
private:
    int weight;
public:
    Person(): age(10),income(0),height(100){}
    int age;
    int income;
    float height;
    void setweight(const float &w){
        weight = w;
    }
    float getweight(){
        return weight;
    }    
};

int main(int argc, char const *argv[])
{
    Person p1;
    // p1.age = 10;
    // p1.height = 140.5;
    // p1.income = 0;
    p1.setweight(30);
    Person p2(p1);
    cout<<p2.getweight()<<endl;
    cout<<p2.age<<" "<<p2.height<<" "<<p2.income<<endl;
    return 0;
}
