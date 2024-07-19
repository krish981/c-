#include <iostream>
using namespace std;
class bank
{
public:
    int withdrawl();
    int deposited();
    int showbalce();
    int ext();
    int pin, option, withdraw, deposit;
    char name[50];
    int amt = 10000;

    void input()
    {
        cout << "Enter the name :";
        cin >> name;
        cout << "Enter the PIN NO. :";
        cin >> pin;
    }
};
int bank::withdrawl()
{
    cout << "Enter the withdraw amount :";
    cin >> withdraw;
    amt -= withdraw;
    cout << "Current balance :" << amt << endl;
};
int bank::deposited()
{
    cout << "Enter the deposit amount :";
    cin >> deposit;
    amt += deposit;
    cout << "Current balance :" << amt << endl;
}
int bank::showbalce()
{
    cout << "Current balance :" << amt << endl;
}
int bank::ext()
{
    cout << "process terminated";
}

int main()
{
    bank s1;
    s1.input();
    if (s1.pin == 0000)
    {
       a: cout << s1.name << endl;
        cout << "Total amount :" << s1.amt << endl;

        cout << "please press the number " << endl;
        cout << "----------------------------------------------------------------------------------" << endl;
        cout << "1 withdrawl" << endl;
        cout << "2 Deposit" << endl;
        cout << "3 Check balance" << endl;
        cout << "4 Exit" << endl;
        cout << "----------------------------------------------------------------------------------" << endl;
        cout << "Enter your Choice :";
        cin >> s1.option;
    }
    else
    {
        cout << "INVALID PIN !!!!!" << endl;
    }
    switch (s1.option)
    {
    case 1:
        s1.withdrawl();
        goto a;
    case 2:
        s1.deposited();
        goto a;
    case 3:
        s1.showbalce();
        goto a;
    case 0:
        s1.ext();
        break;
    }
    return 0;
}