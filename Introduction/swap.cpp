//C++ Program to Swap Two Numbers

#include<iostream>
using namespace std;
int main(){
    int a=5,b=10, temp; 
    cout<<"Before swapping a is:"<<a<<" b is:"<<b<<endl;
    temp=a; //temp is a temporary variable which store the value of a
    a=b; //now we store the value of b into a 
    b=temp; //now we store the value of tem into b, which the value of a
    cout<<"After swapping a is:"<<a<<" b is:"<<b<<endl;
    return 0;
}
