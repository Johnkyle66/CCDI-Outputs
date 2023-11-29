#include <iostream>

using namespace std;

int main() {
    cout << "Problem 9\n";

    // variables
    int speed;

    // user inputs
    cout << "Enter the speed in km\\h: ";
    cin >> speed;

    // conditional
    if (speed > 1100) {
        cout << "It's a civilian aircraft";
    } else if (speed <= 1100 && speed >= 500) {
        cout << "It's a military aircraft!";
    } else {
        cout << "It's a BIRD!";
    }

    return 0;
}