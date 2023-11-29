#include <iostream>
using namespace std;

int main()
{
    double profit, tax;

    cout << "Enter the profit: ";
    cin >> profit;

    if (profit <= 10000)
    {
        tax = 0;
    }
    else if (profit >= 10001 && profit <= 30000) 
    {
        tax = 100 + (profit * 0.03);
    }
    else if (profit >= 30001 && profit <= 50000)
    {
        tax = 200 + (profit * 0.05);
    }
    else
    {
        tax = 300 + (profit * 0.07);
    }

    cout << "Profit: " << profit << endl;
    cout << "Tax: " << tax << endl;
    return 0;
}