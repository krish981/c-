#include<iostream>
using namespace std;
class student{
    private:
    int adno;
    char sname[50];
    float eng,sci,sst;
    float total;
    protected:
    float ctotal(){
        total=eng+sci+sst;
        return total;
    }
    public:
    void takedata(){
        cout<<"Enter the adno :"<<endl;
        cin>>adno;
        cout<<"Enter the sname :"<<endl;
        cin>>sname;
        cout<<"Enter the marks of eng :"<<endl;
        cin>>eng;
        cout<<"Enter the marks of sci :"<<endl;
        cin>>sci;
        cout<<"Enter the marks of sst :"<<endl;
        cin>>sst;
    }
    void privat(){
        cout<<"adno :"<<adno<<endl;
        cout<<"sname :"<<sname<<endl;
        cout<<"eng marks :"<<eng<<endl;
        cout<<"sci marks :"<<sci<<endl;
        cout<<"sst marks :"<<sst<<endl;
    }
    

};

class derived:public student{
    public:
    void showdata(){
       
       cout<<"Total marks :"<<ctotal()<<endl;
    }
};
      
int main()
{
    class derived stu;
    stu.takedata();
    stu.privat();
    stu.showdata();
return 0;
}