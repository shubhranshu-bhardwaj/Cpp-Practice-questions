//C++ Program to Check Leap Year, take input from user
#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter any year:";
    cin>>year;
    if (year%4==0 || year%400==0)
    {
        cout<<"Leap year";
    }
    else
    {
        cout<<"Not a leap year";
    }
    
    return 0;
}