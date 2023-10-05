#include <iostream>

using namespace std;

int main() {
    cout << "Problem 6\n";
    
    // variables
    int number;

    // get user inputs
    cout << "Please enter a number: ";
    cin >> number;

    // conditional
    if (number >= 0) {
        cout << "Positive";
    } else {
        cout << "Negative";
    }

    return 0;
}