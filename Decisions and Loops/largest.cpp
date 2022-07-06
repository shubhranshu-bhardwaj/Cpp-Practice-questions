//C++ Program to Find Largest Number Among Three Numbers

#include<iostream>
using namespace std;
int main(){
    int x=5,y=9,z=4;
    if (x>y && x>z) //first condition if this will true then if part printed
    {
        cout<<x<<" is largest";
    }
    else if (y>x && y>z) //second condition if this will true then else if part printed
    {
        cout<<y<<" is largest";
    }
    else //if both the condition not true then else part printed
    {
        cout<<z<<" is largest";
    }
    
    return 0;

}
