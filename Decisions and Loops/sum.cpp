//C++ Program to Calculate Sum of Natural Numbers

#include<iostream>
using namespace std;
int main(){
    int x=13,sum=0;
    for (int i= 1; i <=x; i++)
    {
        sum=sum+i;
    }
    cout<<"Sum of your no. "<<x<<" is:"<<sum;
    return 0;
}