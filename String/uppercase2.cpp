// Write a program to convert a string in uppercase, using for loop.
// Using toupper()
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string txt = "zxc";
    cout << "Entered string is:" << txt << endl;
    for (int i = 0; i < txt.length(); i++) // condition
    {
        txt[i] = toupper(txt[i]); // toupper() is a function which convert string in uppwercase
    }
    cout << "Entered string in uppercase:" << txt;
    return 0;
}