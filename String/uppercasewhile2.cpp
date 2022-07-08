// Write a program to convert a string in uppercase, using while loop and take input from user.
// Using toupper()
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string txt;
    cout << "Enter any string in lowercase:";
    getline(cin, txt);
    int i = 0;
    while (i < txt.length()) // condition
    {
        txt[i] = toupper(txt[i]); // toupper() is a function which convert string in uppwercase
        i++;
    }
    cout << "Enter string in uppercase:" << txt;
    return 0;
}