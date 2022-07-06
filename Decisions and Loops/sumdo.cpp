//C++ Program to Calculate Sum of Natural Numbers, take input from user
//using do-while
#include<iostream>
using namespace std;
int main(){
    int x,sum=0,i=1;
    cout<<"Enter any no.:";
    cin>>x;
    do
    {
        sum+=i; //this will add 1 to x(1+...+x) because our loop is starting from 1 and will end at x
        i++;
    } while (i<=x);
    cout<<"Sum of your no. "<<x<<" is:"<<sum;
    return 0;
}
//if condition is not true still this function run once
