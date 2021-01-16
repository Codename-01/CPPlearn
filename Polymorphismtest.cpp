#include <iostream>
using namespace std;

class Animal
{
private:
    /* data */
public:
    // void speak(){
    //     cout<<"Animal is talking"<<endl;
    // }
    virtual void speak(){
        cout<<"Animal is talking"<<endl;
    }
};

class cat: public Animal{
    public:
        void speak(){
            cout<<"cat is talking"<<endl;
        }
};

class dog: public Animal{
    public:
        void speak(){
            cout<<"dog is talking"<<endl;
        }
};

void doSpeak(Animal &animal){
    animal.speak();
}

int main(int argc, char const *argv[])
{
    cat cat1;
    dog dog1;
    Animal animal1;
    cout<<"size of Animal is: "<<sizeof(animal1)<<endl;
    doSpeak(animal1);
    doSpeak(cat1);
    doSpeak(dog1);
    return 0;
}
