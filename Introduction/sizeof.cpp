//C++ Program to Find Size of int, float, double and char in Your System

#include<iostream>
using namespace std;
int main(){
    cout<<"Size of int data types:"<<sizeof(int)<<" byte"<<endl; //we use sizeof keyword for finding the size of any data types
    cout<<"Size of float data types:"<<sizeof(float)<<" byte"<<endl;
    cout<<"Size of double data types:"<<sizeof(double)<<" byte"<<endl;
    cout<<"Size of char data types:"<<sizeof(char)<<" byte";
    return 0;
}
