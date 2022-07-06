// Write a program to calculate the total expenses. Quantity and price per item are input by the user and discount of 10% is offered if the expense is more than 5000
#include <iostream>
using namespace std;
int main()
{
    float price, total;
    int qnt;
    cout << "Enter price:";
    cin >> price;
    cout << "Enter quantity:";
    cin >> qnt;
    total = price * qnt;
    if (total > 5000)
    {
        total = total - (total / 100 * 10);
        cout << "Total expense:" << total;
    }
    else
    {
        cout << "Total expense:" << total;
    }
    return 0;
}