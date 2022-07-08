// Write a program to compare two strings they are exact equal or not.
#include <iostream>
#include <string> //if we add string in our program then we have to use this library
using namespace std;
int main()
{
    string txt1, txt2;
    txt1 = "Hii";
    txt2 = "Hello";
    if (txt1 == txt2) // checking if both are equal or not
    {
        cout << "Both text are equal";
    }
    else
    {
        cout << "Text are not equal";
    }
    return 0;
}