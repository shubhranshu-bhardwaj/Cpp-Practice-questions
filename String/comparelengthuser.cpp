// Write a program to compare the length of two string, take input from user
#include <iostream>
#include <string> //if we add string in our program then we have to add this library
using namespace std;
int main()
{
    string txt1, txt2;
    cout << "Enter first text:";
    getline(cin, txt1); // we use getline(cin,variable name) for taking all the words
    cout << "Enter second text:";
    getline(cin, txt2);
    if (txt1.length() == txt2.length()) // comparing
    {
        cout << "Length of both text are equal";
    }
    else
    {
        cout << "Length of both text are not equal";
    }

    return 0;
}