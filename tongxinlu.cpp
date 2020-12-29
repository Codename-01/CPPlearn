#include <iostream>

using namespace std;

struct person
{
    string name;
    int sex;
    int age;
    string phone;
    string address;
};

void create_new_person(person all_person[],int *len){
    person newperson;
    cout<<"请输入姓名："<<endl;
    cin>>newperson.name;
    cout<<"请输入性别：\n1、男性\n2、女性"<<endl;
    cin>>newperson.sex;
    cout<<"请输入年龄："<<endl;
    cin>>newperson.age;
    cout<<"请输入电话："<<endl;
    cin>>newperson.phone;
    cout<<"请输入地址："<<endl;
    cin>>newperson.address;
    all_person[*len] = newperson;
    (*len)++;
    cout<<"输入完成！"<<endl;
}

void show_all_person(person all_person[],int len){
    string sexes[3]={"","男","女"};
    for(int i = 0;i<len;i++){
        cout<<"姓名："<<all_person[i].name<<" 性别："<<sexes[all_person[i].sex]<<" 年龄："<<all_person[i].age<<" 电话："<<all_person[i].phone<<" 地址："<<all_person[i].address<<endl;
    }
}

void delete_person(person all_person[],int *len){
    string person_waitedDel;
    int index=-1;
    cout<<"请输入需要删除的联系人"<<endl;
    cin>>person_waitedDel;
    for(int i=0;i<*len;i++){
        if(person_waitedDel==all_person[i].name){
            index = i;
            break;
        }
    }
    if(index!=-1){
        for(int i=index;i<*len-1;i++){
            all_person[i] = all_person[i+1];
        }
        (*len)--;
        cout<<"已删除联系人："<<person_waitedDel<<endl;
    }
    else{
        cout<<"要删除的联系人不存在"<<endl;
    }
}

void search_person(person all_person[],int len){
    string sexes[3]={"","男","女"};
    string person_waitedSerch;
    bool flag=false;
    int i;
    cout<<"请输入需要查找的联系人"<<endl;
    cin>>person_waitedSerch;
    for(i=0;i<len;i++){
        if(person_waitedSerch==all_person[i].name){
            flag = true;
            break;
        }
    }
    if(flag){
        cout<<"姓名："<<all_person[i].name<<" 性别："<<sexes[all_person[i].sex]<<" 年龄："<<all_person[i].age<<" 电话："<<all_person[i].phone<<" 地址："<<all_person[i].address<<endl;
    }
    else
    {
        cout<<"要查找的联系人不存在"<<endl;
    }
}

void change_person(person all_person[],int len){
    string person_waitedchange;
    bool flag=false;
    int i;
    cout<<"请输入需要修改的联系人"<<endl;
    cin>>person_waitedchange;
    for(i=0;i<len;i++){
        if(person_waitedchange==all_person[i].name){
            flag = true;
            break;
        }
    }
    if(flag){
        cout<<"请输入姓名："<<endl;
        cin>>all_person[i].name;
        cout<<"请输入性别：\n1、男性\n2、女性"<<endl;
        cin>>all_person[i].sex;
        cout<<"请输入年龄："<<endl;
        cin>>all_person[i].age;
        cout<<"请输入电话："<<endl;
        cin>>all_person[i].phone;
        cout<<"请输入地址："<<endl;
        cin>>all_person[i].address;
    }
    else
    {
        cout<<"要修改的联系人不存在"<<endl;
    }
    
}

int main(int argc, char const *argv[])
{
    int buttom;
    person all_person[100];
    int len=0;
    while(true){
        cout<<"************************"<<endl;
        cout<<"******1、添加联系人*******"<<endl;
        cout<<"******2、显示联系人*******"<<endl;
        cout<<"******3、删除联系人*******"<<endl;
        cout<<"******4、查找联系人*******"<<endl;
        cout<<"******5、修改联系人*******"<<endl;
        cout<<"******6、清空联系人*******"<<endl;
        cout<<"******0、退出通讯录*******"<<endl;
        cout<<"************************"<<endl;
        cin>>buttom;
        switch (buttom)
        {
        case 1:
            create_new_person(all_person,&len);
            break;
        case 2:
            show_all_person(all_person,len);
            break;
        case 3:
            delete_person(all_person,&len);
            break;
        case 4:
            search_person(all_person,len);
            break;
        case 5:
            change_person(all_person,len);
            break;
        case 6:    
            len = 0;
            break;
        case 0:
            cout<<"退出系统"<<endl;
            exit(0);
        default:
            break;
        }
    }
    return 0;
}
