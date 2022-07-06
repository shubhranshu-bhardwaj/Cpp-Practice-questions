//C++ Program to Check Whether Number is Even or Odd, take input from user

#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter no.:";
    cin>>x;
    if (x%2==0)
    {
        cout<<"Your no. is even";
    }
    else{
        cout<<"Your no. is odd";
    }
    return 0;
    
}