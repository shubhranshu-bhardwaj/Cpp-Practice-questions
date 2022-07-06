// Write a program to enter the numbers till the user wants and at the end it should display the count of positive, negative and zeros entered.
#include <iostream>
using namespace std;
int main()
{
    int num, pos = 0, neg = 0, zero = 0; //first store 0 in this all
    char choice;
    do
    {
        cout << "Enter number:";
        cin >> num;
        if (num > 0)
        {
            pos++; //if entered number is greater than zero, then increment +ve by 1
        }
        else if (num < 0)
        {
            neg++; //if entered number is smaller than zero, then increment -ve by 1
        }
        else
        {
            zero++; //if entered number is zero, then increment zero by 1
        }
        cout << "Do you want to continue(yes/no)?:"; //ask to user if they want to continue
        cin >> choice;
    } while (choice == 'y' || choice == 'Y'); //if user enter y or Y then again if else if will run 
    cout << "+ve number:" << pos << endl;
    cout << "-ve number:" << neg << endl;
    cout << "Zero number:" << zero;
    return 0;
}