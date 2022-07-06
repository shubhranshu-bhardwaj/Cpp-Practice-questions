//Display multiplication table up to a given range, using while loop and take input from user
#include<iostream>
using namespace std;
int main(){
    int x,range,i=1;
    cout<<"Enter any number to print the table:";
    cin>>x;
    cout<<"Enter the range of the table:";
    cin>>range;
    while (i<=range)
    {
        cout<<x<<" x "<<i<<" = "<<x*i<<endl;
        i++;
    }
    return 0;
}