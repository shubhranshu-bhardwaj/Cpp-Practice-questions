//C++ program to print table of any number using do while loop
//Take input from user
#include<iostream>
using namespace std;
int main(){
    int x,i=1;
    cout<<"Enter any no. to print the table:";
    cin>>x;
    do
    {
        cout<<x<<" x "<<i<<" = "<<x*i<<endl; //this will print from 1 to 10 (x*1,x*2,....x*10) because our loop starting from 1 and will end at 10
        i++;
    } while (i<=10);
    return 0;
}
//if condition is not true then this loop run atleast once
