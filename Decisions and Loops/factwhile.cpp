//C++ Program to Find Factorial, using while loop and take input from user.
#include<iostream>
using namespace std;
int main(){
    int x,fact=1,i=1;
    cout<<"Enter any number to find the factorial:";
    cin>>x;
    while (i<=x) //condition
    {
        fact*=i; //this will run(multiply) till the condition is true (fact*=i=1*1=1, fact*=i=1*2=2, fact*=i=2*3=6, fact*=i=6*4=24, fact*=i=24*5=120)
        i++;
    }
    cout<<"Factorial of your no. "<<x<<" is:"<<fact;
    return 0;
}
