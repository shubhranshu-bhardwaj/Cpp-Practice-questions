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
    temp=x; //temp is a temporary variable which store the value of x, let x=5
    x=y; //now value of y will store in x, let y was 10 so now x will be 10
    y=temp; //value of temp that is x=5 will store in y, so y will be 5
    cout<<"After swapping first no. is:"<<x<<" second no. is:"<<y<<endl; //printing the value after swap
    return 0;
}
