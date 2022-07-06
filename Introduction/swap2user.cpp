//C++ program to swap two numbers take input from user

#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter first no.:";
    cin>>x;
    cout<<"Enter second no.:";
    cin>>y;
    cout<<"Before swapping first no. was:"<<x<<",second no. was:"<<y<<endl;
    x=x+y;
    y=x-y;
    x=x-y; 
    cout<<"After swapping first no. is:"<<x<<", second no. is:"<<y;
    return 0;
}