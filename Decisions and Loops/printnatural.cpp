// C++ program to print natural number from 1 to n
#include <iostream>  //header file
using namespace std; // namespace
int main()
{ // main function
    int n;
    cout << "Enter number:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << i << " "; // this will print number from 1 to n, because our loop is starting from 1 and end at n
    }
    return 0;
}