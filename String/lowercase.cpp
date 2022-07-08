// Write a program to convert a string in lowercase, using ASCII value
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string txt = "ABC";
    cout << "Your string is:" << txt << endl;
    for (int i = 0; txt[i] != '\0'; i++) // condition
    {
        if (txt[i] >= 'A' && txt[i] <= 'Z') // condition
        {
            txt[i] = txt[i] + 32; // in ASCII table we add 32 in any uppercase character to convert in lowercase character
        }
    }
    cout << "String in lowercase:" << txt;
    return 0;
}