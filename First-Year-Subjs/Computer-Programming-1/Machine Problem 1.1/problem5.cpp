#include <iostream>

// Find the area and perimeter of a ractangle
int main() {
    using namespace std;

    // variables
    int area, perimeter, length, width;

    // get user input
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    // calculate
    area = length * width;
    perimeter = (2 * length) + (2 * width);

    // output
    cout << "\nThe area of the rectangle is: " << area << endl;
    cout << "The perimeter of the rectangle is: " << perimeter << endl;

    cout << "\nPress enter to exit... ";
    cin.ignore();
    cin.get();
    return 0;
}