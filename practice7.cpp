#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the length of array :";
    cin>>n;
    int number[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the elements of "<<i<<" position :";
        cin>>number[i];
    }
    for(int i=0;i<n;i++){
        cout<<"\t"<<number[i];
    }








    return 0;
}