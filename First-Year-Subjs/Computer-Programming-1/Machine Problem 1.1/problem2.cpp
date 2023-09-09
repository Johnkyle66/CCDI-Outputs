#include <iostream>

int main() {
    using namespace std;

    // variables
    int num1, num2, temp;
    
    // get user inputs
    cout << "Input the first number: ";
    cin >> num1;
    cout << "Input the second number: ";
    cin >> num2;

    // swap
    temp = num1;
    num1 = num2;
    num2 = temp;

    // output
    cout << "\nAfter swapping, the first number is now: " << num1 << endl;
    cout << "After swapping, the second number is now: " << num2 << endl;

    cout << "\nPress enter to exit... ";
    cin.ignore();
    cin.get();

    return 0;
}