//C++ Program to Calculate Sum of Natural Numbers

#include<iostream>
using namespace std;
int main(){
    int x=13,sum=0;
    for (int i= 1; i <=x; i++)
    {
        sum=sum+i; //this will add 1 to 13(1+2+......+13) because our loop is starting from 1 and will end at 13
    }
    cout<<"Sum of your no. "<<x<<" is:"<<sum;
    return 0;
}
