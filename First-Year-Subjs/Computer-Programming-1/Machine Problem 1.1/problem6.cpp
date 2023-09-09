#include <iostream>
#include <math.h>

int main() {
    using namespace std;

    // variables
    double side, area;
    int side_1, side_2, side_3;

    // get user inputs
    cout << "Enter the length of the first side of the triangle: ";
    cin >> side_1;
    cout << "Enter the length of the second side of the triangle: ";
    cin >> side_2;
    cout << "Enter the length of the third side of the triangle: ";
    cin >> side_3;

    // calculate
    side = (side_1 + side_2 + side_3)/2.0;
    area = sqrt(side * (side - side_1) * (side - side_2) * (side - side_3));

    // output
    cout << "\nThe area of the triangle is: " << area << endl;

    cout << "\nPress enter to exit... ";
    cin.ignore();
    cin.get();
    return 0;
}