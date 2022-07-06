//C++ Program to Find ASCII Value of a Character take input from user

#include<iostream>
using namespace std;
int main(){
    char x,y;
    cout<<"Enter character in lowercase to find the ASCII value:";
    cin>>x;
    cout<<"Enter the same character in uppercase:";
    cin>>y;
    cout<<"ASCII value of lower case of "<<x<<" "<<int(x)<<", value in uppercase "<<int(y);
    return 0;
}