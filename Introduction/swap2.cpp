//C++ program to swap two numbers

#include<iostream>
using namespace std;
int main(){
    int x=5,y=10;
    cout<<"Before swapping x was:"<<x<<" y was:"<<y<<endl;
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<"After swapping x is:"<<x<<" y is:"<<y;
    return 0;
}