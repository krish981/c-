#include<iostream>
using namespace std;
class Flight{
int flightnumber;
char destination[50];
float distance,fuel;
float calfuel(){
    if(distance<=1000){
        fuel=500;
    }
    else if(distance>1000 && distance<=2000){
        fuel=1100;
    }
    else{
        fuel=2200;
    }
    return fuel;
}

    public:
    void feedinfo(){
        cout<<"Enter the flight number :";
        cin>>flightnumber;
        cout<<"Enter the destination :";
        cin>>destination;
        cout<<"Enter the Distance :";
        cin>>distance;
        calfuel();
        


    }
    void showdata(){
        cout<<"Flight number :"<<flightnumber<<endl;
        cout<<"Destination :"<<destination<<endl;
        cout<<"Distance :"<<distance<<endl;
        cout<<"Total fuel :"<<calfuel();

    }

};
int main(){
    class Flight pass1;
    pass1.feedinfo();
    pass1.showdata();
    return 0;
}
