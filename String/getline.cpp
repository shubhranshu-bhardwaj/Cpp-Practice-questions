// C++ program use getline in string
#include <iostream>
#include <string> //if we add string in our program then we have to add this library
using namespace std;
int main()
{
    string fullname;
    cout << "Enter your full name:";
    getline(cin, fullname); // let user enter Shubhranshu Bhardwaj and if we don't use getline if we only use cin then it will take only 1st word
    cout << "Hello " << fullname;
    return 0;
}