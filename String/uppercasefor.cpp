// Write a program to convert a string in uppercase, using for loop and take input from user.
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string txt;
    cout << "Enter string in lowercase:";
    getline(cin, txt);
    for (int i = 0; txt[i] != '\0'; i++) // condition
    {
        if (txt[i] >= 'a' && txt[i] <= 'z') // condition
        {
            txt[i] = txt[i] - 32; // in ASCII table we substract 32 in any lowercase character to convert in uppercase character
        }
    }
    cout << "Entered string in uppercase:" << txt;
    return 0;
}