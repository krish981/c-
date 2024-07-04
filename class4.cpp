#include<iostream>
using namespace std;
class Book{
    int bookno;
    char booktitle[50];
    float price; 
    int N;
    float totalcost(int N){
        return price*N;
    } 

    public:
    void input(){
        cout<<"Enter the bookno :";
        cin>>bookno;
        cout<<"Enter the book title :";
        cin>>booktitle;
        cout<<"Enter the price of book :";
        cin>>price;
    }
    void purchase(){
        cout<<"Enter the no.of book :";
        cin>>N;
        cout<<"Total cost :"<<totalcost(N);
    } 
        


    
};

int main(){
    class Book cus1;
    cus1.input();
    cus1.purchase();
    return 0;
}