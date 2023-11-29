#include <iostream>
using namespace std;

int main() {
    double income, tax;

    cout << "Enter income: ";
    cin >> income;

    if (income <= 5000) {
        tax = 0;
    } else if (income > 5000 && income <= 10000) {
        tax = 100 + ((income - 5000) * 0.03);
    } else if (income > 10001 && income <= 25000) {
        tax = 200 + ((income - 10000) * 0.06);
    } else if (income > 25000 && income <= 50000) {
        tax = 300 + ((income - 25000) * 0.09);
    } else {
        tax = 500 + ((income - 50000) * 0.15);
    }

    cout << "Tax: " << tax << endl;
    return 0;
}