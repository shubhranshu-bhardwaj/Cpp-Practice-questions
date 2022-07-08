// Write a program to convert a string in lowercase, using tolower()
#include <iostream>
#include <string> 
using namespace std;
int main()
{
    string txt = "ABC";
    cout << "String entered:" << txt << endl;
    for (int i = 0; i < txt.length(); i++) // condition
    {
        txt[i] = tolower(txt[i]); // tolower() is a function which convert string in lowercase
    }
    cout << "String in lowercase:" << txt;
    return 0;
}