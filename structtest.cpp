#include <iostream>

using namespace std;

struct Student
{
    string name;
    int age;
    float score;
};


int main(int argc, char const *argv[])
{
    /*结构体数组*/
    Student class1[3]{
        {"张三",18,90},
        {"李四",19,80},
        {"王五",20,70}
    };
    for(int i=0;i<3;i++){
        cout<<class1[i].name<<" 年龄："<<class1[i].age<<" 分数："<<class1[i].score<<endl;
    }
    /*三种不同的结构体指针*/
    Student stu1 = class1[0];
    Student *p = &stu1;
    Student *p2 = class1;
    auto *p3 = &stu1;
    cout<<"*p is"<<p->name<<endl;
    p2++;
    cout<<"*p2 is"<<(*p2).name<<endl;
    cout<<"*p3 is"<<p3->name<<endl;
    Student *p4 = new Student({"ss4",182,100});
    cout<<"*p4 is "<<p4->name<<endl;
    delete p4;
    return 0;
}
