// C++ program to concat string, take input from user
#include <iostream>
#include <string> //if we add string in our program then we  have to add this library
using namespace std;
int main()
{
    string fname, lname;
    cout << "Enter your first name:";
    cin >> fname;
    cout << "Enter your last name:";
    cin >> lname;
    cout << "Your full name is:" << fname + " " + lname; // concate means adding two string
    return 0;
}