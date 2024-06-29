#include<iostream>
using namespace std;
int main(){
    int k=1;
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            if(k%2==0){
                cout<<"0";
            }else{
                cout<<"1";
            }
            k++;
        }
        cout<<endl;
      
    }
    return 0;
}