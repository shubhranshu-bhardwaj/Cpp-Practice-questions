//C++ program to print table of any number using do loop
//Take input from user
#include<iostream>
using namespace std;
int main(){
    int x,i=1;
    cout<<"Enter any no. to print the table:";
    cin>>x;
    do
    {
        cout<<x<<" x "<<i<<" = "<<x*i<<endl;
        i++;
    } while (i<=10);
    return 0;
}