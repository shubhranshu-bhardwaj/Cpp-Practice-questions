// Write a program to determine whether the seller has made profit or incurred loss. Also determine how much profit he made or loss he incurred. Cost price and selling price of an item is input by the user
#include <iostream>
using namespace std;
int main()
{
    float cost, sell, sold;
    cout << "Enter cost:";
    cin >> cost;
    cout << "Enter sell price:";
    cin >> sell;
    sold = sell - cost; // let sell=10, cost=5, then sold=10-5=5.
    if (sell > cost)    // sell=10, cost=5, means seller is in the loss of 5
    {
        cout << "Loss of:" << sold;
    }
    else
    {
        cout << "Profit of:" << -sold;
    }
    return 0;
}