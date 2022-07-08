// Write a program to compare two strings they are exact equal or not.
#include <iostream>
#include <string> //if we add dtring in our program then we have to add this library
using namespace std;
int main()
{
    string txt1, txt2;
    cout << "Enter first word:";
    getline(cin, txt1); // we use thsi getline(cin,variable name) for taking all the words of string
    cout << "Enter second word:";
    getline(cin, txt2);
    if (txt1 == txt2) // comparing
    {
        cout << "Both words are equal..";
    }
    else
    {
        cout << "Words are not equal..";
    }
    return 0;
}