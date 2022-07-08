// Write a program to convert a string in lowercase, using while loop and take input from user
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string txt;
    cout << "Enter any string in uppercase:";
    getline(cin, txt);
    int i = 0;
    while (txt[i] != '\0') // condition
    {
        if (txt[i] >= 'A' && txt[i] <= 'Z') // condition
        {
            txt[i] = txt[i] + 32; // in ASCII table we add 32 in any uppercase character to convert in lowercase character
        }
        i++;
    }
    cout << "Entered string in lowercase:" << txt;
    return 0;
}