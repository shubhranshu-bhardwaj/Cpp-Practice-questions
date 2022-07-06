//Display multiplication table up to a given range
#include<iostream>
using namespace std;
int main(){
    int x=5,range=15;
    for (int i = 1; i <=range; i++) //this loop will run till the condition is true i.e i<=range means i=15, this will multiply 5 from 1 to 15
    {
        cout<<x<<" x "<<i<<" = "<<x*i<<endl;
    }
    return 0;
}
