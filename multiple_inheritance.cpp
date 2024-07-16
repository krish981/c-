#include<iostream>
using namespace std;
    class batsmen{
        protected:
        int innings,notout,runs;
    };
    class batsmen1{
        protected:
        int bcode,innings,notout,runs;
        char bname[50];
         int batavg;
        public:
        void inputinfo(){
        cout<<"Enter the bcode :";
        cin>>bcode;
        cout<<"Enter the bname :";
        cin>>bname;
        cout<<"Enter the innings :";
        cin>>innings;
        cout<<"Enter the notout :";
        cin>>notout;
        cout<<"Enter the runs :";
        cin>>runs;
        }
        int  calavg(){

            batavg=runs/(innings-notout);
            return batavg;
        }
    };
    class batsmen2:public batsmen1,public batsmen{
        public:
        void displayinfo(){
        cout<<"bcode :"<<bcode<<endl;
        cout<<"bname :"<<bname<<endl;
        cout<<"batsman average :"<<calavg()<<endl;
        }
    };
int main()
{
      batsmen2 bat1;
      bat1.inputinfo();
      bat1.displayinfo(); 
return 0;
}