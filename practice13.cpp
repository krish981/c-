#include<iostream>
using namespace std;
int main(){
    int a,b;
    int *c=&a;
    int *d=&b;
    cout<<"Enter a :";
    cin>>*c;
    cout<<"Enter b :";;
    cin>>*d;
    cout<<"Before swapping"<<endl<<"a="<<*c<<endl<<"b="<<*d<<endl;
    *c=*c+*d;
    *d=*c-*d;
    *c=*c-*d;
    cout<<"After swapping"<<endl<<"a="<<*c<<endl<<"b="<<*d;
    return 0;
}