// Find the absolute value of a number entered by the user.
#include <iostream>
#include <cmath> //cmath is a math library of c++
using namespace std;
int main()
{
    float x;
    cout << "Enter any number:";
    cin >> x;
    cout << "Absolute value is:" << abs(x); //we can print the absolute value by using abs(variable)
    return 0;
}
