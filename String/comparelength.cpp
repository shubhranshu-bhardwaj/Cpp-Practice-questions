// Write a program to compare the length of two string
#include <iostream>
#include <string> //if we add string in our program then we hacve to add this library
using namespace std;
int main()
{
    string txt1, txt2;
    txt1 = "Shubhranshu";
    txt2 = "Bhardwaj";
    if (txt1.length() == txt2.length()) // comparing
    {
        cout << "Length of both text are equal";
    }
    else
    {
        cout << "Length of both text are not equal";
    }
    return 0;
}