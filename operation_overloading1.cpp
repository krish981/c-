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
    complex operator++(int){
        complex y;
        y.a=++a;
        y.b=++b;
        return y;
       
    }
};
                                                                                                                                                                                                                                                                                                                                                                                                          
int main()
{
    complex s1,s2;
    s1=complex(3,6);
    cout<<"FIRST OBJECT"<<endl;
    s1.display();
    s2=s1++;;
    s2.display();
    
    

return 0;
}