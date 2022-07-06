/* Any character is entered by the user; write a program to determine
whether the character entered is a capital letter, a small case letter,
a digit or a special symbol.The following table shows the range of ASCII
values for various characters. */
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter any character:";
    cin >> ch;
    if (ch >= 65 && ch <= 90) //we are checking here by ascii value uppercase character exist from 65 t0 90
    {
        cout << "Entered character is uppercase alphabate";
    }
    else if (ch >= 97 && ch <= 122) //we are checking here by ascii value lowercase character exist from 65 t0 90
    {
        cout << "Enter character is lowwercase alphabate";
    }
    else if (ch >= 48 && ch <= 57) //we are checking here by ascii value digits exist from 65 t0 90
    {
        cout << "Entered character is a digit";
    }
    else
    {
        cout << "Entered character is a special symbols";
    }

    return 0;
}