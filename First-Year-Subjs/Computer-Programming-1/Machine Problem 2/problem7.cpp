#include <iostream>

using namespace std;

int main() {
    cout << "Problem 7\n";

    // variables
    int a, b, c, output;

    // get user inputs
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the first number: ";
    cin >> b;
    cout << "Enter the first number: ";
    cin >> c;

    // conditional
    if (a == b && a == c && b == c ) {
        cout << a;
    } else if (a == c || a == b) {
        cout << a;
    } else if (b == c) {
        cout << b;
    } else {
        output = (a + b + c) / 3;
        cout << "The average is: " << output;
    }

    return 0;
}