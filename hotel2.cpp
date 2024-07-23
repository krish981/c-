#include<iostream>
using namespace std;
class options{
    public:
    int choice,amt=0,qty;
    int numbers[100]={1,2,3,4,5,6,7,8,9,10,11,12,13};
    int number[100];
    int price[100]={220,170,110,160,160,350,450,160,80,90,90,140,110};
    char name1[30]="Paneer Pakoda";
    char name2[30]="Palak Paneer";
    char name3[30]="Veg burger";
    char name4[30]="Veg grill sandwich";
    char name5[30]="Veg fry rice";
    char name6[30]="Veg Biryani";
    char name7[30]="Mix Veg Pizzah";
    char name8[30]="Jeera Rice";
    char name9[30]="Potato Cheeps";
    char name10[30]="Masala Dosa";
    char name11[30]="Momos";
    char name12[30]="Franki";
    char name13[30]="Sweet Corn";
    
    
    void option();
    
    void input(){
      a:cout<<"---------------------------------------------------------------"<<endl;
        cout<<"OPTIONS           "<<"PRESS"<<endl;
        cout<<" "<<endl;
        cout<<"For menu          "<<"1"<<endl;
        cout<<"Order dish        "<<"2"<<endl;
        cout<<"Current status    "<<"3"<<endl;
        cout<<"Make bill         "<<"4"<<endl;
        cout<<"Exit              "<<"0"<<endl;
        cout<<"---------------------------------------------------------------"<<endl;
        cout<<"Enter your choice :";
        cin>>choice;
    switch(choice){
    case 1:
    cout<<"-----------------------------item------------------------------"<<endl;
    cout<<"                          MAIN COURSE                          "<<endl;
    cout<<"Number                       Item                         Price"<<endl;
    cout<<" "<<endl;
    cout<<numbers[0]<<"                       "<<name1<<"                      "<<price[0]  <<endl;
    cout<<numbers[1]<<"                       "<<name2<<"                       "<<price[1]  <<endl;
    cout<<numbers[2]<<"                       "<<name3<<"                         "<<price[2]  <<endl;
    cout<<numbers[3]<<"                       "<<name4<<"                 "<<price[3]  <<endl;
    cout<<numbers[4]<<"                       "<<name5<<"                       "<<price[4]  <<endl;
    cout<<numbers[5]<<"                       "<<name6<<"                        "<<price[5]  <<endl;
    cout<<numbers[6]<<"                       "<<name7<<"                     "<<price[6]  <<endl;
    cout<<numbers[7]<<"                       "<<name8<<"                         "<<price[7]  <<endl;
    cout<<numbers[8]<<"                       "<<name9<<"                      "<<price[8]  <<endl;
    cout<<numbers[9]<<"                      "<<name10<<"                        "<<price[9]  <<endl;
    cout<<numbers[10]<<"                      "<<name11<<"                              "<<price[10]  <<endl;
    cout<<numbers[11]<<"                      "<<name12<<"                             "<<price[11]  <<endl;
    cout<<numbers[12]<<"                      "<<name13<<"                         "<<price[12]  <<endl;
    cout<<"---------------------------------------------------------------"<<endl;
    goto a;
    case 2:
    cout<<"Enter dish number :";
    cin>>number[100];
    qty=0;
    cout<<"Enter the quantity :";
    cin>>qty;
    cout<<" "<<endl;
    cout<<"---------------------------------------------------------------"<<endl;
    if(number[0]==1){
        amt+=220*qty;
        cout<<"Your order is confirmed"<<endl;
        goto a;
    }
    else if(number[1]==2){
        amt+=170*qty;
        cout<<"Your order is confirmed"<<endl;
        goto a;
    }
    else if(number[2]==3){
        amt+=110*qty;
        cout<<"Your order is confirmed"<<endl;
        goto a;
    }
    else if(number[3]==4){
        amt+=220*qty;
        cout<<"Your order is confirmed"<<endl;
        goto a;
    }
    else if(number[4]==5){
        amt+=160*qty;
        cout<<"Your order is confirmed"<<endl;
        goto a;
    }
    else if(number[5]==6){
        amt+=350*qty;
        cout<<"Your order is confirmed"<<endl;
        goto a;
    }
    else if(number[6]==7){
        amt+=450*qty;
        cout<<"Your order is confirmed"<<endl;
        goto a;
    }
    else if(number[7]==8){
        amt+=160*qty;
        cout<<"Your order is confirmed"<<endl;
        goto a;
    }
    else if(number[8]==9){
        amt+=80*qty;
        cout<<"Your order is confirmed"<<endl;
        
        goto a;
    }
    else if(number[9]==10){
        amt+=90*qty;
        cout<<"Your order is confirmed"<<endl;
       
        goto a;
    }
    else if(number[10]==11){
        amt+=90*qty;
        cout<<"Your order is confirmed"<<endl;
       
        goto a;
    }
    else if(number[11]==12){
        amt+=140*qty;
        cout<<"Your order is confirmed"<<endl;
        
        goto a;
    }
    else if(number[12]==13){
        amt+=110*qty;
        cout<<"Your order is confirmed"<<endl;
        
        goto a;
    }
    else{
        cout<<"Number invalid"<<endl;
    }
    
    
    
    case 3:
    cout<<"Number              item              quantity              price"<<endl;
    
    
    }
    
    
    }
};
int main(){
    options s1;
    s1.input();
    
    
    return 0;
}