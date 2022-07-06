//C++ Program to Check Whether a character is Vowel or Consonant.

#include<iostream>
using namespace std;
int main(){
    char x='a';
    bool lowercase,uppercase;
    lowercase=(x=='a'|| x=='e'||x=='i'||x=='o'||x=='u'); //is character in lowercase
    uppercase=(x=='A'|| x=='E'||x=='I'||x=='O'||x=='U'); //is character in upppercase
    if (lowercase || uppercase) //if character is in lowercase or in upper case then if part will print
    {
        cout<<"Vowel";
    }
    else //if above condition not true then else part will print
    {
        cout<<"Consonant"; 
    }
    return 0;
    
}
