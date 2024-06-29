#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<=50;i++){
        if(i==21){
            goto next;
        }
        cout<<"\t"<<i;
    }
    next:for(int j=51;j<=100;j++){
        cout<<"\t"<<j;
    }


    return 0;
}