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
        sum+=i;
        i++;
    } while (i<=x);
    cout<<"Sum of your no. "<<x<<" is:"<<sum;
    return 0;
}