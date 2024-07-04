#include<iostream>
using namespace std;
class Report{
    int adno;
    char name[50];
    float marks[5];
    float avg=0;
    float getavg(){
        for(int i=1;i<=5;i++){
            cout<<"Enter the marks of subject "<<i<<":";
            cin>>marks[i-1];
            avg+=marks[i-1];
        }
        avg/=5;
        
        return avg;
    }

    public:
    void readinfo(){
        cout<<"Enter the adno :";
        cin>>adno;
        cout<<"Enter the name :";
        cin>>name;
        getavg();

    }
    void displayinfo(){
        cout<<"adno :"<<adno<<endl;
        cout<<"name :"<<name<<endl;
        cout<<"Average of marks :"<<getavg();
    }
};
int main(){
    class Report stu;
    stu.readinfo();
    stu.displayinfo();
    return 0;
}