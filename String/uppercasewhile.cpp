// Write a program to convert a string in uppercase, using while loop and take input from user.
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string txt;
    cout << "Enter any string in lowercase:";
    getline(cin, txt);
    int i = 0;
    while (txt[i] != '\0') // condition
    {
        if (txt[i] >= 'a' && txt[i] <= 'z') // condition
        {
            txt[i] = txt[i] - 32; // in ASCII table we substract 32 in any lowercase character to convert in uppercase character
        }
        i++;
    }
    cout << "Entered text in uppercase:" << txt;
    return 0;
}