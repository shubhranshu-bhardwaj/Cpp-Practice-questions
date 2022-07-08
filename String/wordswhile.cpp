//Write a program to count number of words in string, using while loop and take input from user
#include<iostream>
#include<string> //for adding strings in our program we have to add string library
using namespace std;
int main(){
    string txt;
    int i=0,count=1;
    cout<<"Enter any sentence:";
    getline(cin,txt); //for taking full string like Shubhranshu Bhardwaj and if we don't use this then it will take only Shubhranshu
    while (txt[i]!='\0') //we will check if this string is empty or not
    {
        if(txt[i]==' ') //if there is any space between words then do not consider that
        count++; //increase count by 1 till the condition is true
        i++;
    }
    cout<<"Words in your sentence are:"<<count;
    return 0;
    
    
}
