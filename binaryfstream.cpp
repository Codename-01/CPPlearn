#include <iostream>
#include <fstream>
using namespace std;

class vector2d {
    private:
        float x;
        float y;
    public:
        vector2d(){}
        vector2d(float x,float y);
        vector2d operator+(vector2d &a);
        void showVector();
        ~vector2d(){}
};

void vector2d::showVector(){
    cout<<"x = "<<this->x<<endl;
    cout<<"y = "<<this->y<<endl;
}

vector2d vector2d::operator+(vector2d &a){
    vector2d temp;
    temp.x = this->x+a.x;
    temp.y = this->y+a.y;
    return temp;
}

vector2d::vector2d(float x,float y){
    this->x = x;
    this->y = y;
}



int main(int argc, char const *argv[])
{
    vector2d A(0.5,0.5);
    ofstream oft;
    oft.open("binarytest.vct",ios::out|ios::binary);
    oft.write((const char *)&A,sizeof(vector2d));
    oft.close();
    ifstream ift;
    ift.open("binarytest.vct",ios::in|ios::binary);
    vector2d B;
    ift.read((char *)&B,sizeof(vector2d));
    B.showVector();
    ift.close();
    return 0;
}
