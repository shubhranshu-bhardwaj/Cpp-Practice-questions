// Write a program to check whether a triangle is valid or not, when the three angles of the triangle are entered by the user. A triangle is valid if the sum of all the three angles is equal to 180 degrees
#include <iostream>
using namespace std;
int main()
{
    int deg1, deg2, deg3, total;
    cout << "Enter the first degree:";
    cin >> deg1;
    cout << "Enter the second degree:";
    cin >> deg2;
    cout << "Enter the third degree:";
    cin >> deg3;
    total = deg1 + deg2 + deg3; //storing the total value in total by adding them all
    if (total == 180) //if total degree of trianlge is equal to 180 then valid 
    {
        cout << "It's a valid triangle";
    }
    else //if not equal to 180 then not valid and this part will print
    {
        cout << "It's not a valid triangle";
    }

    return 0;
}