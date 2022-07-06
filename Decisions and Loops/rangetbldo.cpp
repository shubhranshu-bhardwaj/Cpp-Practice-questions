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
        cout<<x<<" x "<<i<<" = "<<x*i<<endl;
        i++;
    } while (i<=range);
    return 0;
}