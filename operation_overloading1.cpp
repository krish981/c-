#include<iostream>
using namespace std;

class complex {
    int a;
    int b;
    public:
    complex(){
        a=0;
        b=0;
    }
    complex(int x,int y){
        a=x;
        b=y;
    }
    void display(){
        cout<<"value a is :"<<a<<endl;
        cout<<"value b is :"<<b<<endl;
    }
    void operator++(){
       a++;
       b++;
    }
};
      
int main()
{
    complex s1;
    s1=complex(3,6);
    cout<<"FIRST OBJECT"<<endl;
    s1.display();
    s1.operator++();
    s1.display();
    

return 0;
}