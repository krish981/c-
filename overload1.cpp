#include<iostream>
using namespace std;
class area{
    public:
    area(int r){
        int circle;
        circle=3.14*r*r;
        cout<<"Total area of circle:"<<circle<<endl;
    }
    area(int l,int b,int r){
        int rectangle;
        rectangle=l*b*r;
        cout<<"Total area of rectangle:"<<rectangle<<endl;
    }
    area(int l,int s){
        int square;
        square=l*l*s;
        cout<<"Total area of square:"<<square<<endl;
    }
    

};
int main(){
    class area circle(10),rectangle(10,10,1),square(10,1);
    return 0;
}