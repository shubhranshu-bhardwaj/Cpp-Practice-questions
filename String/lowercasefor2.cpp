// Write a program to convert a string in lowercase, using for loop and take input from user.
// Using tolower()
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string txt;
    cout << "Enter any string in uppercase:";
    getline(cin, txt);
    for (int i = 0; i < txt.length(); i++) // condition
    {
        txt[i] = tolower(txt[i]); // tolower() is a function which convert string in lowercase
    }
    cout << "Entered string in lowercase:" << txt;
    return 0;
}