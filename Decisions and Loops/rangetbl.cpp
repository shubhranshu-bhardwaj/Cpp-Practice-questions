//Display multiplication table up to a given range
#include<iostream>
using namespace std;
int main(){
    int x=5,range=15;
    for (int i = 1; i <=range; i++)
    {
        cout<<x<<" x "<<i<<" = "<<x*i<<endl;
    }
    return 0;
}