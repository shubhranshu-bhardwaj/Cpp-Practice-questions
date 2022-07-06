// If the ages of Ram, Sulabh and Ajay are input by the user, write a program to determine the youngest of the three
#include <iostream>
using namespace std;
int main()
{
    float ram, sulabh, ajay;
    cout << "Enter Ram's age:";
    cin >> ram;
    cout << "Enter Sulabh's age:";
    cin >> sulabh;
    cout << "Enter Ajay's age:";
    cin >> ajay;
    if (ram < sulabh && ram < ajay) //let ram=8, sulabh=9 and ajay=12, then this part will print
    {
        cout << "Ram is youngest";
    }
    else if (sulabh < ajay) //let ram=9, sulabh=8, ajay=12, then this part will print
    {
        cout << "Sulabh is youngest";
    }
    else //let ram=12, sulabh=9, ajay=8, then this part will print
    {
        cout << "Ajay is youngest";
    }
    return 0;
}