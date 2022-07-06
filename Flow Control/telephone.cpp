/* Write a program to calculate the monthly telephone bills as per the following rule:
Minimum Rs. 200 for upto 100 calls.
Plus Rs. 0.60 per call for next 50 calls.
Plus Rs. 0.50 per call for next 50 calls.
Plus Rs. 0.40 per call for any call beyond 200 calls */
#include <iostream>
using namespace std;
int main()
{
    int call;
    cout << "Enter number of calls:";
    cin >> call;
    if (call <= 100) //if call is smaller or equal to 100 then this part will print
    {
        cout << "Your bill is:200rs";
    }
    else if (call > 100 && call <= 150) //if call is greater to 100 and smaller or equal to 150 then this part will print
    {
        call = call - 100; //substracting call from 100 for getting the call between 100 to 150
        cout << "Your bill is:" << 200 + (call * 0.60) << "rs"; //bill will be 200 for 100 call + additional cal* 0.60
    }
    else if (call > 150 && call <= 200) //if call is greater to 150 and smaller or equal to 200 then this part will print
    {
        call = call - 150; //substracting call from 150 for getting the call between 150 to 200
        cout << "Your bill is:" << 200 + (50 * 0.60) + (0.50 * call) << "rs"; //we will apply same maths with some addition
    }
    else
    {
        call = call - 200;
        cout << "Your bill is:" << 200 + (0.60 * 50) + (0.50 * 50) + (0.40 * call) << "rs";
    }
    return 0;
}