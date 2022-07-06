//C++ Program to Check Leap Year

#include<iostream>
using namespace std;
int main(){
    int yr=2020;
    if (yr%4==0 || yr%400==0)
    {
        cout<<"Leap year";
    }
    else
    {
        cout<<"Not a leap year";
    }
    return 0;
}