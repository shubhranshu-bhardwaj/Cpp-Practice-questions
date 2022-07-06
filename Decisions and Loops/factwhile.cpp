//C++ Program to Find Factorial, using while loop and take input from user.
#include<iostream>
using namespace std;
int main(){
    int x,fact=1,i=1;
    cout<<"Enter any number to find the factorial:";
    cin>>x;
    while (i<=x)
    {
        fact*=i;
        i++;
    }
    cout<<"Factorial of your no. "<<x<<" is:"<<fact;
    return 0;
}