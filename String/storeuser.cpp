// C++ program to print string, take input from user

#include <iostream>
#include <string> //if we add string in our program we have to add this library
using namespace std;
int main()
{
    string word;
    cout << "Enter any word:";
    cin >> word; // taking input
    cout << "Entered word is:" << word;
    return 0;
}