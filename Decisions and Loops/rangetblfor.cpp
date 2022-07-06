//Display multiplication table up to a given range, using for loop and take input from user
#include<iostream>
using namespace std;
int main(){
    int x,range;
    cout<<"Enter any no. to print the table:";
    cin>>x;
    cout<<"Enter the range of table:";
    cin>>range;
    for (int i = 1; i <=range; i++)
    {
        cout<<x<<" x "<<i<<" = "<<x*i<<endl;
    }
    return 0;
}