#include <iostream>

int main(){
    using namespace std;    
    string input,output,input1;
    cout<<"Please type something"<<endl;
    cin>>input>>input1;
    output = "You typed "+input+" "+input1+" nice work!";
    cout<<output<<endl;
    cout<<"try this one now"<<endl;
    cin.get();
    getline(cin,input);
    cout<<"You typed "<<input<<" nice work!"<<endl;
    return 0;
}