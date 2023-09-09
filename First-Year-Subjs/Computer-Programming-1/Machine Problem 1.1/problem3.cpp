#include <iostream>
#include <cmath>

int main() {
    using namespace std;

    // variables
    double radius, volume;
    double const pi = 3.14;

    // get user inputs
    cout << "Input the radius of the sphere: ";
    cin >> radius;

    // calculate
    volume = (4.0/3.0) * (pi * (pow(radius, 3)));

    // output
    cout << "\nThe volume of ther sphere is: " << volume << endl;

    cout << "Press enter to exit... ";
    cin.ignore();
    cin.get();
    return 0;
}