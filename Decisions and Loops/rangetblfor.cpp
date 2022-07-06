//Display multiplication table up to a given range, using for loop and take input from user
#include<iostream>
using namespace std;
int main(){
    int x,range;
    cout<<"Enter any no. to print the table:";
    cin>>x;
    cout<<"Enter the range of table:";
    cin>>range;
    for (int i = 1; i <=range; i++) //this loop will run till the condition is true i.e i<=range let range=15 and x=5, i=15, this will multiply 5 from 1 to 15
    {
        cout<<x<<" x "<<i<<" = "<<x*i<<endl;
    }
    return 0;
}
