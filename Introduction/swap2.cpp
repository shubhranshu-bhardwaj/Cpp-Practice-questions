//C++ program to swap two numbers

#include<iostream>
using namespace std;
int main(){
    int x=5,y=10;
    cout<<"Before swapping x was:"<<x<<" y was:"<<y<<endl;
    x=x+y; //we will do some mathematics here, x=x(5)+y(10)=15
    y=x-y; //y=x(15)-y(10)=5
    x=x-y; //x=x(15)-y(5)=10
    cout<<"After swapping x is:"<<x<<" y is:"<<y;
    return 0;
}
