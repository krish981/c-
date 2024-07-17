#include<iostream>
using namespace std;
    class bill{
        public:
        static int customer_no;
        int rate,qty,tot,net,amt;
        float dis,gst;
        bill(){
            customer_no++;
        }
        static void number(){
            cout<<"Customer no :"<<customer_no<<endl;
        }
        void amount(){
            cout<<"Enter the rate of item :";
            cin>>rate;
            cout<<"Enter the quantity of item :";
            cin>>qty;
            tot=rate*qty;
            cout<<"Total amount of item :"<<tot<<endl;
            dis=(5*tot)/100;
            cout<<"Total discount :"<<dis<<endl;
            net=tot-dis;
            cout<<"Net amount after discount :"<<net<<endl;
            gst=(18*net)/100;
            cout<<"Total gst :"<<gst<<endl;
            amt=net+gst;
            cout<<"Total payment :"<<amt<<endl;
        }

    };
    int bill::customer_no=0;
int main()
{
   
    bill cus1;
    cus1.number();
    cus1.amount();
    bill cus2;
    cus2.number();
    cus2.amount();
    bill cus3;
    cus3.number();
    cus3.amount();
    
   
       
return 0;
}