//C++ Program to Calculate Sum of Natural Numbers, take input from user
//Using for loop
#include<iostream>
using namespace std;
int main(){
    int x,sum=0;
    cout<<"Enter any number:";
    cin>>x;
    for (int i = 1; i <=x; i++)
    {
        sum+=i;
    }
    cout<<"Sum of your no. "<<x<<" is:"<<sum;
    return 0;
}