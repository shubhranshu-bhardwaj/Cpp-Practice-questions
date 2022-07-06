//C++ Program to Find Factorial

#include<iostream>
using namespace std;
int main(){
    int x=5,fact=1; 
    if (x<=0) //assigning condition if x is less or equal to 0 then if part print
    {
        cout<<"Enter num>0";
    }
    else
    {
        for(int i=1;i<=x;i++) //we are creating a loop for finding our factorial 
        fact*=i; //this will run(multiply) till the condition is true (fact*=i=1*1=1, fact*=i=1*2=2, fact*=i=2*3=6, fact*=i=6*4=24, fact*=i=24*5=120)
    }
    cout<<"Factorial of your no "<<x<<" is:"<<fact;
    return 0;
    
}
