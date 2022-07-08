//C++ program to access any character of string, take input from user
#include<iostream>
#include<string>
using namespace std;
int main(){
    string txt;
    bool length;
    cout<<"Enter any word:";
    cin>>txt;
    length=(txt.length()>0); //length of string should be greater than 0
    if (length)
    {
        cout<<"Second character of your word is:"<<txt[1]; //for accessing any word from string we use string name[index]
    }
    else
    {
        cout<<"Please enter a word not a letter..";
    }
    return 0;
}
