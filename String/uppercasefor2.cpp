// Write a program to convert a string in uppercase, using for loop and take input from user.
// Using toupper()
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string txt;
    cout << "Enter any string in lowercase:";
    getline(cin, txt);
    for (int i = 0; i < txt.length(); i++) // condition
    {
        txt[i] = towupper(txt[i]); // toupper() is a function which convert string in uppwercase
    }
    cout << "Entered string in uppercase:" << txt;
    return 0;
}