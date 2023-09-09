#include<iostream>

int main() {
    using namespace std;

    // variables
    int divisor, dividend, quotient, remainder;

    // get user input
    cout << "Enter dividend: ";
    cin >> dividend;
    cout << "Enter divisor: ";
    cin >> divisor;

    // calculations
    quotient = dividend / divisor;
    remainder = dividend % divisor;

    // output
    cout << "\nQuotient: " << quotient << endl;
    cout << "Remainder: " << remainder << endl;

    cout << "\nPress Enter to exit..." << endl;
    cin.ignore();
    cin.get();

    return 0;
}