#include <iostream>

using namespace std;

int main() {
    cout << "Problem 8\n";

    // variables
    float workingHours;
    float hourlyRate;
    float grossPay;

    // get user inputs
    cout << "Enter the number of hours you worked: ";
    cin >> workingHours;
    cout << "Enter your hourly rate: ";
    cin >> hourlyRate;

    // conditional
    if (workingHours > 40) {
        grossPay = (40 * hourlyRate) + ((workingHours - 40) * (hourlyRate * 1.5));
    } else {
        grossPay = 40 * hourlyRate;
    }

    // output
    cout << "Your gross pay is: " << grossPay;
    return 0;
}