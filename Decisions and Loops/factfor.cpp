//C++ Program to Find Factorial using for loop and take input from user.

#include<iostream>
using namespace std;
int main(){
    int x,fact=1;
    cout<<"Enter any number to find the factorial:";
    cin>>x;
    for (int i = 1; i <=x; i++)
    {
        fact*=i; //this will run(multiply) till the condition is true (fact*=i=1*1=1, fact*=i=1*2=2, fact*=i=2*3=6, fact*=i=6*4=24, fact*=i=24*5=120)
    }
    cout<<"Factorial of your no. "<<x<<" is:"<<fact;
    return 0;
    
}
