//C++ Program to Check Whether Number is Even or Odd

#include<iostream>
using namespace std;
int main(){
    int x=5;
    if (x%2==0) //if any number totally divisible by 2 then it's an even no
    {
        cout<<"It's an even no.";
    }
    else{
        cout<<"It's an odd no."; //if the if part will not true then else part will be printed
    }
    return 0;
    
}
