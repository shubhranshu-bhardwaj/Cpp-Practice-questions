//C++ Program to Calculate Sum of Natural Numbers, takeinput from user
//using while loop
#include<iostream>
using namespace std;
int main(){
    int x,sum=0,i=1;
    cout<<"Enter any no.:";
    cin>>x;
    while (i<=x)
    {
        sum+=i;
        i++;
    }
    cout<<"Sum of your no. "<<x<<" is:"<<sum;
    return 0;
    
}