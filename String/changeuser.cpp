// C++ program to change character in string, take input from user
#include <iostream>
#include <string> //if we add string in our program then we have to use this library
using namespace std;
int main()
{
    string txt;
    bool length;
    cout << "Enter any word:";
    cin >> txt;
    cout << "Before the change your text is:" << txt << endl;
    length = (txt.length() > 0); // length should be greater than 0
    if (length)
    {
        txt[1] = 'a'; // for changing character in string we use string name[index]='value'
        cout << "After the change your string is:" << txt;
    }
    else
    {
        cout << "Please enter a word not a letter....";
    }
    return 0;
}