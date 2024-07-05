#include<iostream>
using namespace std;
class Report{
    int adno;
    char name[50];
    float marks[5];
    float avg;
    float getavg();
       
    public:
    void readinfo(){
        cout<<"Enter the adno :";
        cin>>adno;
        cout<<"Enter the name :";
        cin>>name;
         for(int i=1;i<=5;i++){
            cout<<"Enter the marks of subject "<<i<<":";
            cin>>marks[i-1];   
        }
        

    }
    void displayinfo(){
        cout<<"adno :"<<adno<<endl;
        cout<<"name :"<<name<<endl;
        cout<<"Average of marks :"<<getavg()<<endl;
    }
};
float Report::getavg(){
    avg=(marks[0]+marks[1]+marks[2]+marks[3]+marks[4])/5;
    return avg;
}
int main(){
    class Report stu;
    stu.readinfo();
    stu.displayinfo();
    return 0;
}