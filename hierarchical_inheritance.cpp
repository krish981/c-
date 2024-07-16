#include<iostream>
using namespace std;
     class base{
        protected:
        int a;
        public:
        void setA(){
            cout<<"Enter A :";
            cin>>a;
        }
     };
     class base1:public base{
        protected:
        int b;
        public:
        void setB(){
            cout<<"Enter B :";
            cin>>b;
        }
        void product (){
            cout<<"a*b :"<<a*b<<endl;
         }
     };
     class base2:public base{
        protected:
        int c;
        public:
        void setC(){
            cout<<"Enter C :";
            cin>>c;
        }
        void product(){
            cout<<"a*c :"<<a*c;
        }
     };
int main()
{
       base1 obj;
       obj.setA();
       obj.setB();
       obj.product();
       base2 obj1;
       obj1.setA();
       obj1.setC();
       obj1.product();

return 0;
}