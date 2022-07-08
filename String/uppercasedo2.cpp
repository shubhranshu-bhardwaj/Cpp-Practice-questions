// Write a program to convert a string in uppercase, using for do-while and take input from user.
// Using toupper()
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string txt;
    cout << "Enter any text in lowercase:";
    getline(cin, txt);
    int i = 0;
    do
    {
        txt[i] = toupper(txt[i]); // toupper() is a function which convert string in uppwercase
        i++;
    } while (i < txt.length()); // condition
    cout << "Entered string in uppercase:" << txt;
    return 0;
}