#include<iostream>
using namespace std;
int main(){
    char first[5]={'H','E','L','L','O'};
    for(int i=0;i<=4;i++){
        for(int j=0;j<=i;j++){
            cout<<first[j];
        }
        cout<<endl;
    }

    return 0;
}