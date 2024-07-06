#include<iostream>
using namespace std;
class volume{
    public:
    volume(int a){
        int cube;
        cube=a*a*a;
        cout<<"Total volume of cube: "<<cube<<endl;
    }
    volume(int r,int b){
        int sphere;
        sphere=4*b*r*r*r/3;
        cout<<"Total volume of sphere: "<<sphere<<endl;
    }
    volume(int l,int b,int h){
        int cuboid;
        cuboid=l*b*h;
        cout<<"Total volume of cuboid: "<<cuboid<<endl;
    }


};
int main(){
    class volume cube(10),sphere(10,3.14),cuboid(10,10,10);
    return 0;
}