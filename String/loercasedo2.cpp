// Write a program to convert a string in lowercase, using do-while loop and take input from user.
// Using tolower()
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string txt;
    cout << "Enter any string in uppercase:";
    getline(cin, txt);
    int i = 0;
    do
    {
        txt[i] = tolower(txt[i]); // tolower() is a function which convert string in lowercase
        i++;
    } while (i < txt.length()); // condition
    cout << "Entered string in lowercase:" << txt;
    return 0;
}