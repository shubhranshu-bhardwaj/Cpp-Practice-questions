//C++ Program to Check Whether a character is Vowel or Consonant, take input from user.

#include<iostream>
using namespace std;
int main(){
    char x;
    bool lowercase,uppercase;
    cout<<"Enter any char:";
    cin>>x;
     lowercase=(x=='a'|| x=='e'||x=='i'||x=='o'||x=='u');
    uppercase=(x=='A'|| x=='E'||x=='I'||x=='O'||x=='U');
    if (lowercase || uppercase)
    {
        cout<<"Vowel";
    }
    else
    {
        cout<<"Consonant";
    }
    return 0;
}