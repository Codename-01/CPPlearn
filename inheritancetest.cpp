#include <iostream>
using namespace std;

class Base{
    public:
        Base(){
            m_A = 10;
            m_B = 20;
            m_C = 30;
        }
        int m_A;
    private:
        int m_B;
    protected:
        int m_C;
};

class son1: public Base{
    public:
        son1();
};

class son2: private Base{
    public:
        son2();
};

class son3: protected Base{
    public:
        son3();
};

int main(int argc, char const *argv[])
{
    son1 A;
    son2 B;
    son3 C;
    cout<<A.m_A<<B.m_A<<C.m_A<<endl;

    return 0;
}
