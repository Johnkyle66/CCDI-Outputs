#include <iostream>

using namespace std;

int main() {
    cout << "Problem 4\n\n";
    
    // variables
    int units;
    int tuitionFee;

    // get user inputs
    cout << "Enter the amount of your units: ";
    cin >> units;

    // conditional
    if (units >= 21) {
        tuitionFee = 7000;
    } else {
        tuitionFee = units * 300;
    }

    // output
    cout << "You need to pay: " << tuitionFee << endl;
    return 0;
}