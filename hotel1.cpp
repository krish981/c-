#include <iostream>
using namespace std;
class options
{
public:
    int choice, amt = 0, total;
    float gst, service;
    int qty;
    int numbers[100] = {1, 2, 3, 4, 5};
    int number[100];
    int numb;
    int price[100] = {220, 170, 110, 160, 160};
    string name1[20] = {"Paneer Pakoda", "Palak Paneer", "Veg burger", "Veg grill sandwich", "Veg fry rice"};

    void option();

    void input()
    {
    a:  number[100]={0};
        cout << "---------------------------------------------------------------" << endl;
        cout << "OPTIONS           " << "PRESS" << endl;
        cout << " " << endl;
        cout << "For menu          " << "1" << endl;
        cout << "Order dish        " << "2" << endl;
        cout << "Make bill         " << "3" << endl;
        cout << "Exit              " << "0" << endl;
        cout << "---------------------------------------------------------------" << endl;
        cout << "Enter your choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "-----------------------------item------------------------------" << endl;
            cout << "                          MAIN COURSE                          " << endl;
            cout << "Number                       Item                         Price" << endl;
            cout << " " << endl;
            cout << numbers[0] << "                       " << name1[0] << "                    " << price[0] << endl;
            cout << numbers[1] << "                       " << name1[1] << "                     " << price[1] << endl;
            cout << numbers[2] << "                       " << name1[2] << "                       " << price[2] << endl;
            cout << numbers[3] << "                       " << name1[3] << "               " << price[3] << endl;
            cout << numbers[4] << "                       " << name1[4] << "                     " << price[4] << endl;

            cout << "---------------------------------------------------------------" << endl;
            goto a;
        case 2:
            cout << "Enter dish number :";
            cin >> numb;
            qty=0;
            cout << "Enter the quantity :";
            cin >> qty;
            cout << " " << endl;
            cout << "---------------------------------------------------------------" << endl;
            if (numb == 1)
            {
                amt += 220 * qty;
                cout << "Your order is confirmed" << endl;
                goto a;
            }
            else if (numb == 2)
            {
                amt += 170 * qty;
                cout << "Your order is confirmed" << endl;
                goto a;
            }
            else if (numb == 3)
            {
                amt += 110 * qty;
                cout << "Your order is confirmed" << endl;
                goto a;
            }
            else if (numb == 4)
            {
                amt += 160 * qty;
                cout << "Your order is confirmed" << endl;
                goto a;
            }
            else if (numb == 5)
            {
                amt += 160 * qty;
                cout << "Your order is confirmed" << endl;
                goto a;
            }

            else
            {
                cout << "Number invalid" << endl;
            }

        case 3:

            cout << "-------------------YOUR BILL----------------------" << endl;
            cout << "               Amrut Restaurant               " << endl;
            cout << "      156, sai apartment,punagam road,surat  " << endl;
            cout << "             Mobile NO : 7863074845            " << endl;
            cout << "--------------------------------------------------" << endl;
            cout << "No.          item            quantity         price " << endl;

            gst = 18 * amt / 100;
            service = 12 * amt / 100;
            cout << "Total gst : 18%" << endl;
            cout << "Total extra service tax :12%" << endl;
            cout << "Total gst amount :" << gst << endl;
            cout << "Total service tax :" << service << endl;
            cout << "Total Bill amount :" << amt;
            cout << "   " << endl;
            total = amt + gst + service;
            cout << "Total payable amount :" << total;
        }
    }
};

int main()
{
    options s1;
    s1.input();

    return 0;
}