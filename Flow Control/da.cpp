/* In a company an employee is paid as under:
If his basic salary is less than Rs. 1500, then HRA = 10% of basic salary and DA = 90% of basic salary.
If his salary is either equal to or above Rs. 1500, then HRA = Rs. 500 and DA = 98% of basic salary.
If the employee's salary is input by the user write a program to find his gross salary */
#include <iostream>
using namespace std;
int main()
{
    float sal, hra, da;
    cout << "Enter basic salary:";
    cin >> sal;
    if (sal >= 1500)
    {
        cout << "HRA: rs 500" << endl;
        da = (sal / 100) * 98;
        cout << "DA: rs " << da;
    }
    else
    {
        hra = (sal / 100) * 10;
        da = (sal / 100) * 90;
        cout << "HRA: rs " << hra << endl;
        cout << "DA: rs " << da;
    }
    return 0;
}