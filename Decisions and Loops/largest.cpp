//C++ Program to Find Largest Number Among Three Numbers

#include<iostream>
using namespace std;
int main(){
    int x=5,y=9,z=4;
    if (x>y && x>z)
    {
        cout<<x<<" is largest";
    }
    else if (y>x && y>z)
    {
        cout<<y<<" is largest";
    }
    else
    {
        cout<<z<<" is largest";
    }
    
    return 0;

}