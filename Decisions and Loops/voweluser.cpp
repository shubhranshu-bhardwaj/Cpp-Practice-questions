//C++ Program to Check Whether a character is Vowel or Consonant, take input from user.

#include<iostream>
using namespace std;
int main(){
    char x;
    bool lowercase,uppercase;
    cout<<"Enter any char:";
    cin>>x;
    lowercase=(x=='a'|| x=='e'||x=='i'||x=='o'||x=='u'); //is character in lowercase
    uppercase=(x=='A'|| x=='E'||x=='I'||x=='O'||x=='U'); ///is character in upppercase
    if (lowercase || uppercase) //if condition is true then if part will print
    {
        cout<<"Vowel";
    }
    else //if above condition is not true then else part will print
    {
        cout<<"Consonant";
    }
    return 0;
}
