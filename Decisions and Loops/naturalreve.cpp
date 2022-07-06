// C++ program to print natural number from 1 to n in reverse order
#include <iostream>  //header file
using namespace std; // namespace
int main()
{ // main function
    int n;
    cout << "Enter number:";
    cin >> n;
    for (int i = n; i > 0; i--) //we are intializing i=n because our condition is i>0 and updation is in revrse order
    {
        cout << i << " "; // this will print number from 1 to n, because our loop is starting from 1 and end at n
    }
    return 0;
}