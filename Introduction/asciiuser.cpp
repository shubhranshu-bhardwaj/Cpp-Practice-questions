//C++ Program to Find ASCII Value of a Character take input from user

#include<iostream> //header file
using namespace std; //namespace
int main(){ //main function
    char x,y; //declaring variable
    cout<<"Enter character in lowercase to find the ASCII value:"; //simple printing message on screen
    cin>>x; //taking input
    cout<<"Enter the same character in uppercase:";
    cin>>y;
    cout<<"ASCII value of lower case of "<<x<<" "<<int(x)<<", value in uppercase "<<int(y); //printing ascii value
    return 0;
}
