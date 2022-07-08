// Write a program to find the length of string, take input from user
#include <iostream>
#include <string> //if we add string in our program then we have to add this library
using namespace std;
int main()
{
    string txt;
    cout << "Enter any word:";
    cin >> txt;
    cout << "Length of your text is:" << txt.length(); // for calculating the length of string we use string name.length()
    return 0;
}