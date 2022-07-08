//Write a program to count number of words in string, using for loop and take input from user
#include<iostream>
#include<string>
using namespace std;
int main(){
    string txt;
    int i=0,count=1;
    cout<<"Enter any sentence:";
    getline(cin,txt);
    while (txt[i]!='\0')
    {
        if(txt[i]==' ')
        count++;
        i++;
    }
    cout<<"Words in your sentence are:"<<count;
    return 0;
    
    
}