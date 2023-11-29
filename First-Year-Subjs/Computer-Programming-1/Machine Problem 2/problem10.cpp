#include <iostream>

using namespace std;

int main() {
    cout << "Problem #10\n";

    // variables
    float input, num1, num2, result;

    // user input
    cout << "What do you want to do?" << endl;
    cout << "\n\t1.ADD TWO NUMBERS\n";
    cout << "\t2.SUBTRACT TWO NUMBERS\n";
    cout << "\t3.MULTIPLY TWO NUMBERS\n";
    cout << "\t4.DIVIDE TWO NUMBERS\n";
    cout << "\nEnter your choice: ";
    cin >> input;

    cout << "\nEnter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    cout << endl;

    // conditional
    if (input == 1) {
        result = num1 + num2;
        cout << "The result is: " << result << endl;
    } else if (input == 2) {
        result = num1 - num2;
        cout << "The result is: " << result << endl;
    } else if (input == 3) {
        result = num1 * num2;
        cout << "The result is: " << result << endl;
    } else if (input == 4) {
        result = num1 / num2;
        cout << "The result is: " << result << endl;
    } else {
        cout << "Please choose a number from the choices above and try again.";
    }

    return 0;
}