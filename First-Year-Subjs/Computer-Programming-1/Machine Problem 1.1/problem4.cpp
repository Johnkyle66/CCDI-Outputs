#include <iostream>
#include <cmath>

int main() {
    using namespace std;

    // variables
    int side_of_cube, volume;

    // get user input
    cout << "Input the number of sides of a cube: ";
    cin >> side_of_cube;

    // calculate
    volume = pow(side_of_cube, 3);

    // output
    cout << "\nThe volume of the cube is: " << volume << endl;

    cout << "\nPress enter to exit... ";
    cin.ignore();
    cin.get();
    return 0;
}