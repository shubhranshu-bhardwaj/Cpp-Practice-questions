// Two numbers are entered through the keyboard. Write a program to find the value of one number raised to the power of another
#include <iostream>
#include <cmath> //cmath is C++ library for maths
using namespace std;
int main()
{
    int x, y;
    cout << "Enter first number:";
    cin >> x;
    cout << "Enter second number:";
    cin >> y;
    cout << "Power of your one number to another is:" << pow(x, y); //pow is in inbuilt function in C++ maths library which calculate power
    return 0;
}