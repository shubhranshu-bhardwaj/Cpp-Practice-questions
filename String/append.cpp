// C++ program to append string
#include <iostream>
#include <string> //if we use string in our program then we have to add this library
using namespace std;
int main()
{
    string fname, lname;
    fname = "Shubhranshu";
    lname = "Bhardwaj";
    cout << "Full name:" << fname.append(lname); // append means simply adding two string/concate two string
    return 0;
}