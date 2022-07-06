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
        sum+=i; //this will add from 1 to x(1+...+x) because our loop is starting from 1 and end at x, sum+=i means sum=sum+i
    }
    cout<<"Sum of your no. "<<x<<" is:"<<sum;
    return 0;
}
