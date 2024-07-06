#include<iostream>
using namespace std;
class area{
    public:
    area(int r){
        int ar;
        ar=3.14*r*r;
        cout<<"Total area :"<<ar<<endl;
    }
    ~area(){
    }
};
int main(){
    class area obj(20);
    return 0;
}