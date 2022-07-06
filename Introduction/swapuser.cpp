//C++ Program to Swap Two Numbers take input from user

#include<iostream>
using namespace std;
int main(){
    int x,y,temp;
    cout<<"Enter first no.:";
    cin>>x;
    cout<<"Enter second no.:";
    cin>>y;
    cout<<"Before swapping first no. was:"<<x<<" second no. was:"<<y<<endl;
    temp=x;
    x=y;
    y=temp;
    cout<<"After swapping first no. is:"<<x<<" second no. is:"<<y<<endl;
    return 0;
}