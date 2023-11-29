#include <iostream>
using namespace std;

int main()
{
    int purchase_amount;
    double amount_tb_paid, discount;

    cout << "Enter your purchase amount: ";
    cin >> purchase_amount;

    if (purchase_amount >= 5000)
    {
        discount = purchase_amount * 0.03;
        amount_tb_paid = purchase_amount - discount;
    }
    else
    {
        amount_tb_paid = purchase_amount;
    }

    cout << "You need to pay: " << amount_tb_paid << endl;
    return 0;
}