/* The marks obtained by a student in 5 different subjects are input by the user. The student gets a division as per the following rules:
Percentage above or equal to 60 - First division
Percentage between 50 and 59 - Second division
Percentage between 40 and 49 - Third division
Percentage less than 40 - Fail
Write a program to calculate the division obtained by the student */
#include <iostream>
using namespace std;
int main()
{
    float marks1, marks2, marks3, marks4, marks5, total;
    cout << "Enter marks of first subject:";
    cin >> marks1;
    cout << "Enter marks of second subject:";
    cin >> marks2;
    cout << "Enter marks of third subject:";
    cin >> marks3;
    cout << "Enter marks of fourth subject:";
    cin >> marks4;
    cout << "Enter marks of fifth subject:";
    cin >> marks5;
    total = (marks1 + marks2 + marks3 + marks4 + marks5 / 500) * 100; // calculating the %
    if (total >= 60) // if total is greater or equal to 60 then this part will print
    {
        cout << "First division";
    }
    else if (total >= 50 && total <= 59) // if total is greater or equal to 50 to smaller or equal to 59 then this part will print
    {
        cout << "Second division";
    }
    else if (total >= 40 && total <= 49) // if total is greater or equal to 40 to smaller or equal to 49 then this part will print
    {
        cout << "Third division";
    }
    else // if all the above condition false then this part will print
    {
        cout << "Fail";
    }
    return 0;
}