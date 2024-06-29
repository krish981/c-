#include<iostream>
using namespace std;
int fibo(int n){
    if(n==1||n==0){
        return 1;
    }else{
        return fibo(n-1)+fibo(n-2);
    }
}
int main(){
    int n,i;
    cout<<"Enter the number of terms :";
    cin>>n;
    cout<<"Fibonacci Sequence :";
    for(i=0;i<n;i++){
        cout<<"\t"<<fibo(i);
    }
    return 0;
}