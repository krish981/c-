#include<iostream>
using namespace std;
class options{
    public:
    int choice;
    
    void input(){
        cout<<"---------------------------------------------------------"<<endl;
        cout<<"OPTIONS           "<<"PRESS"<<endl;
        cout<<" "<<endl;
        cout<<"For menu          "<<"1"<<endl;
        cout<<"Order dish        "<<"2"<<endl;
        cout<<"Current status    "<<"3"<<endl;
        cout<<"Exit              "<<"4"<<endl;
        cout<<"---------------------------------------------------------"<<endl;
        cout<<"Enter your choice :";
        cin>>choice;
    }
    
};




int main(){
    options s1;
    s1.input();
    
    
    return 0;
}