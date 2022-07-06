//C++ program to print table of any number using for loop
//Take input from user
#include<iostream>
using namespace std;
int main(){
    int x; 
    cout<<"Enter any number to print the table:";
    cin>>x;
    for (int i = 1; i <=10; i++)
    {
        cout<<x<<" x "<<i<<" = "<<x*i<<endl;
    }
    return 0;
}