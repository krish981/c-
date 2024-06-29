#include<iostream>
using namespace std;

    void perfect(){
        int r,s=0,n;
        cout<<"Enter the number :";
        cin>>n;
        for(int i=1;i<n;i++){
            r=n%i;
            if(r==0){
                s=s+i;
            }
        }
            if (s==n){
                cout<<"Number is perfect";
            }else{
                cout<<"Number is not perfect";
            }
    }
    int main(){
        perfect();
        return 0;
    }





   