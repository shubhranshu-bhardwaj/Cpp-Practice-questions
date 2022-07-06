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
        cout<<x<<" x "<<i<<" = "<<x*i<<endl; //this loop will run till the condition is true i.e i<=range let range=15 and x=5, i=15, this will multiply 5 from 1 to 15
        i++;
    }
    return 0;
}
