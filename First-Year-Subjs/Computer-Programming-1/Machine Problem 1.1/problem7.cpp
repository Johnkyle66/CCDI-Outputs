#include <iostream>
#include <math.h>

int main(){
    using namespace std;

    // variables
    double radius, circumference, area;
    double const pi = 3.14159265358979323846;

    // get user input
    cout << "Input the radius(1/2 of diameter) of a circle: ";
    cin >> radius;

    // calculate
    circumference = 2 * pi * radius;
    area = pi * (pow(radius, 2));

    // output
    cout << "\nThe area of the circle is: " << area << endl;
    cout << "The circumference of the circle is: " << circumference << endl;

    cout << "\nPress enter to exit... ";
    cin.ignore();
    cin.get();
    return 0;
}