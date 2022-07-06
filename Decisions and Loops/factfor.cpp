//C++ Program to Find Factorial using for loop and take input from user.

#include<iostream>
using namespace std;
int main(){
    int x,fact=1;
    cout<<"Enter any number to find the factorial:";
    cin>>x;
    for (int i = 1; i <=x; i++)
    {
        fact*=i;
    }
    cout<<"Factorial of your no. "<<x<<" is:"<<fact;
    return 0;
    
}