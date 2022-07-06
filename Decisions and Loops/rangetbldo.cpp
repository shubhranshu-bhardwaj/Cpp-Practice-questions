//Display multiplication table up to a given range, using for do-while and take input from user
#include<iostream>
using namespace std;
int main(){
    int x,range,i=1;
    cout<<"Enter any no. to print the table:";
    cin>>x;
    cout<<"Enter the range of the table:";
    cin>>range;
    do
    {
        cout<<x<<" x "<<i<<" = "<<x*i<<endl; //this loop will run till the condition is true i.e i<=range let range=15 and x=5, i=15, this will multiply 5 from 1 to 15
        i++;
    } while (i<=range);
    return 0;
}
//if condition is not true still this loop run atleast once
