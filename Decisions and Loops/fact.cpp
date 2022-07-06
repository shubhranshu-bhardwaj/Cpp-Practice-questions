//C++ Program to Find Factorial

#include<iostream>
using namespace std;
int main(){
    int x=5,fact=1;
    if (x<=0)
    {
        cout<<"Enter num>0";
    }
    else
    {
        for(int i=1;i<=x;i++)
        fact*=i;
    }
    cout<<"Factorial of your no "<<x<<" is:"<<fact;
    return 0;
    
}