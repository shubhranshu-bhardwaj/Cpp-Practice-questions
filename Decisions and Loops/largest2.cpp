//C++ Program to Find Largest Number Among Three Numbers, take input from user.

#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter first no.:";
    cin>>x;
    cout<<"Enter second no.:";
    cin>>y;
    cout<<"Enter third no.:";
    cin>>z;
    if (x>y && x>z) //first condition if this true then if part printed
    {
        cout<<x<<" is largest";
    }
    else if (y>z && y>x)//second condition if this true then else if part printed
    {
        cout<<y<<" is largest";
    }
    else //if both condition false the this else part printed
    {
        cout<<z<<" is largest";
    }
    return 0;
    
}
