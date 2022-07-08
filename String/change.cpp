// C++ program to change character in string
#include <iostream>
#include <string> //if we use string in our program then we have to use this library
using namespace std;
int main()
{
    string txt = "Adarsh";
    cout << "Before the change string string was:" << txt << endl;
    txt[5] = 's'; // for changing/modifying we use string name[index]='value'
    cout << "After the change string is:" << txt;
    return 0;
}