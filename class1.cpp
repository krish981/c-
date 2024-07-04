#include<iostream>
using namespace std;
class Batsmen{
    int bcode;
    char bname[20];
    int innings,notout,runs;
    int bavg;
    float calcavg();

    public:
    void readdata(){
        cout<<"Enter the bcode(4 digit no.) :";
        cin>>bcode;
        cout<<"Enter the bname :";
        cin>>bname;
        cout<<"Enter the total innings :";
        cin>>innings;
        cout<<"Enter the total notout :";
        cin>>notout;
        cout<<"Enter the total runs :";
        cin>>runs;

    }

    void display(){
        cout<<"bcode :"<<bcode<<endl;
        cout<<"bname :"<<bname<<endl;
        cout<<"Total innings :"<<innings<<endl;
        cout<<"Total notout :"<<notout<<endl;
        cout<<"Total runs :"<<runs<<endl;
        cout<<"bavg :"<<calcavg();


    }

};

float Batsmen::calcavg(){
    bavg=runs/(innings-notout);
    return bavg;
}

int main()
{
    class Batsmen bat1;
    bat1.readdata();
    bat1.display();

    return 0;
}