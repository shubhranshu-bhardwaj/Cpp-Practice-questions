//C++ Program to Swap Two Numbers

#include<iostream>
using namespace std;
int main(){
    int a=5,b=10, temp;
    cout<<"Before swapping a is:"<<a<<" b is:"<<b<<endl;
    temp=a;
    a=b; 
    b=temp;
    cout<<"After swapping a is:"<<a<<" b is:"<<b<<endl;
    return 0;
}