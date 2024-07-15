#include<iostream>
using namespace std;
class report{
    protected:
    int adno;
    char name[50];
    float marks[5];
    float average;
    public:
    float getavg();
   };
   float report ::  getavg(){
    average=(marks[0]+marks[1]+marks[2]+marks[3]+marks[4])/5;
    return average;
   } 
class report1:public report{
    public:
    void readinfo(){
        cout<<"Enter adno :";
        cin>>adno;
        cout<<"Enter the name :";
        cin>>name;
        for(int i=1;i<=5;i++){
            cout<<"Enter the subject "<<i<<":";
            cin>>marks[i-1];
        }

    }
};
class report2:public report1{
    public:
    void displayinfo(){
    cout<<"adno :"<<adno<<endl;
    cout<<"name :"<<name<<endl;
    cout<<"Average :"<<getavg()<<endl;
    }
};
int main()
{
    class report2 stu;
    stu.readinfo();
    stu.displayinfo();
       
return 0;
}