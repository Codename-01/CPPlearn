#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    ofstream ofs;
    ofs.open("test.txt",ios::out);
    ofs<<"hello world"<<endl;
    ifstream ifs;
    ofs.close();
    ifs.open("test.txt",ios::in);
    //1、数组
    // char s1[1024] = {0};
    // while (ifs>>s1){
    //     cout<<s1<<endl;
    // }
    //2、ifs.getline
    // char s2[1024] = {0};
    // while (ifs.getline(s2,sizeof(s2))){
    //     cout<<s2<<endl;
    // }
    // 3、string+getline
    string s3;
    while (getline(ifs,s3)){
        cout<<s3<<endl;
    }
    // 4、char+ifs.get()
    // char s4;
    // while ((s4=ifs.get())!=EOF)
    // {
    //     cout<<s4;
    // }
    ifs.close();
    return 0;
}
