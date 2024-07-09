#include<iostream>
using namespace std;
class volume{
    public:
    void total(){
        int a;
        cout<<"Enter the side :";
        cin>>a;
        int cube;
        cube=a*a*a;
        cout<<"Total volume of cube: "<<cube<<endl;
    }
    void total(int r){
        int sphere;
        sphere=4*3.14*r*r*r/3;
        cout<<"Total volume of sphere: "<<sphere<<endl;
    }
    void total(int l,int b,int h){
        int cuboid;
        cuboid=l*b*h;
        cout<<"Total volume of cuboid: "<<cuboid<<endl;
    }

};
      
int main()
{
    volume obj;
    obj.total();
    obj.total(5);
    obj.total(5,5,5);
return 0;
}
