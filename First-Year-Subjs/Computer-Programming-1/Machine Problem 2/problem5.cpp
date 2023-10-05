#include <iostream>

using namespace std;

int main() {
    cout << "Problem 5\n\n";
    
    // variables
    int number1, number2;

    // get user inputs
    cout << "Enter a number: ";
    cin >> number1;
    cout << "Enter a second number: ";
    cin >> number2;
    cout << "\n";
    
    // conditional
    if (number1 == number2) {
        cout << "EQUAL NUMBERS" << endl;
    } else if (number1 > number2) {
        cout << number1 << " is the higher number\n";
    } else if (number2 > number1) {
        cout << number2 << " is the higher number\n";
    }

    return 0;
}