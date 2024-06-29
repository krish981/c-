#include<iostream>
using namespace std;
int main(){
    int i,j;
    int n=11;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            cout<<"\t"<<n;
            n++;
        }
        cout<<endl;
        n+=5;
    }
}