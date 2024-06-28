#include<iostream>
using namespace std;
int main(){
    int in,hr,min,sec;
    cout<<"Enter the seconds :";
    cin>>in;
    hr=in/3600;
    min=(in-hr*3600)/60;
    sec=in-(hr*3600+min*60);
    cout<<"TIME :"<<hr<<":"<< min<<":"<< sec;


    return 0;
}