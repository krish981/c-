#include <iostream>
using namespace std;
class bank
{
public:
    void withdrawl();
    void deposited();
    void showbalce();
    void ext();
    int pin, option, withdraw, deposit;
    char name[50];
    int amt = 10000;
    int i=3;
    void input()
    {
        cout << "Enter the name :";
        cin >> name;
        next:cout << "Enter the PIN NO. :";
        cin >> pin;
        
    if (pin == 0000)
    {
        cout << name << endl;
        cout << "Total amount :" << amt << endl;
       a: cout << "----------------------------------------------------------------------------------" << endl;
        cout << "1 withdrawl" << endl;
        cout << "2 Deposit" << endl;
        cout << "3 Check balance" << endl;
        cout << "4 Exit" << endl;
        cout << "----------------------------------------------------------------------------------" << endl;
        cout << "Enter your Choice :";
        cin >> option;
    switch (option)
    {
    case 1:
        withdrawl();
        goto a;
    case 2:
        deposited();
        goto a;
    case 3:
        showbalce();
        goto a;
    case 0:
        ext();
        break;
    }
    }
    else
    {
        cout << "INVALID PIN !!!!!" << endl;
        
        
            if(i==3){
            cout<<i<<" more turn left"<<endl;
            i--;
            goto next;
            }
            else if(i==2){
            cout<<i<<" more turn left"<<endl;
            i--;
            goto next;
            }
            else if(i==1){
            cout<<i<<" more turn left"<<endl;
            i--;
            goto next;
            }
            else{
            cout<<"TRANSACTION TERMINATED !!!!!";   
            }
        
        
    }
    
    }
};
void bank::withdrawl()
{
    cout << "Enter the withdraw amount :";
    cin >> withdraw;
    if(withdraw>0 && withdraw<=amt){
    amt -= withdraw;
    cout << "Current balance :" << amt << endl;
    }
    else{
        cout<<"Insufficient amount !!!! "<<endl;
    }
};
void bank::deposited()
{
    cout << "Enter the deposit amount :";
    cin >> deposit;
    amt += deposit;
    cout << "Current balance :" << amt << endl;
}
void bank::showbalce()
{
    cout << "Current balance :" << amt << endl;
}
void bank::ext()
{
    cout << "process terminated";
}

int main()
{
    bank s1;
    s1.input();
    return 0;
}