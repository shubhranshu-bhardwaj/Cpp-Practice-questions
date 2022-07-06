//C++ program to print table of a number

#include<iostream>
using namespace std;
int main(){
    int a=2;
    for (int i = 1; i <=10; i++)
    {
        cout<<a<<" a "<<i<<" = "<<a*i<<endl; //this will print from 1 to 10 (2*1,2*2,....2*10) because our loop starting from 1 and will end at 10
    }
    
    return 0;
}
