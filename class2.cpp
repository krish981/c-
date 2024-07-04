#include<iostream>
using namespace std;
class Test {
    int testcode;
    char description[50];
    int Nocandidate;
    int centerreqd;
    int Calcntr(){
            centerreqd=Nocandidate/100+1;
            return centerreqd;
        }

    public:
    void schedule(){
        cout<<"Enter the testcode :";
        cin>>testcode;
        cout<<"Enter Description :";
        cin>>description;
        cout<<"Enter Number of candidate :";
        cin>>Nocandidate;
        Calcntr();
    }

    void distest(){
        cout<<"Testcode"<<testcode<<endl;
        cout<<"Description :"<<description<<endl;
        cout<<"Number of candidate :"<<Nocandidate<<endl;
        cout<<"Number of centre :"<<Calcntr();
    }
};
int main(){
    class Test test1;
    test1.schedule();
    test1.distest();

    return 0;
}