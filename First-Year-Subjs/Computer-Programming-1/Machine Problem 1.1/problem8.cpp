#include <iostream>

int main(){
    using namespace std;

    // variables
    int a, b, c;

    // get user inputs
    cout << "Input the first angle of the triangle: ";
    cin >> a;
    cout << "Input the second angle of the triangle: ";
    cin >> b;

    // calculate
    c = 180 - (a + b);

    // output
    cout << "\nThe third angle of the triangle is: " << c << endl;

    cout << "\nPress enter to exit... ";
    cin.ignore();
    cin.get();
    return 0;
}