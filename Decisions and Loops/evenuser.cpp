//C++ Program to Check Whether Number is Even or Odd, take input from user

#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter no.:";
    cin>>x; //taking input from user
    if (x%2==0) //if this condition true then your no. is even will printed
    {
        cout<<"Your no. is even";
    }
    else{
        cout<<"Your no. is odd"; //if the condition is not true then this part will be printed
    }
    return 0;
    
}
