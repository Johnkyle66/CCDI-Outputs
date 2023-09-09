#include <iostream>

int main(){
    using namespace std;

    // variables
    int km;
    float miles;
    float const miles_per_km = 0.621371;

    // get user input
    cout << "Enter the distance in kilometer: ";
    cin >> km;

    // calculate
    miles = km * miles_per_km;

    // output
    cout << "\n" << km << " km/hr is equivalent to " << miles << " miles/hr." << endl;

    cout << "\nPress enter to exit... ";
    cin.ignore();
    cin.get();
    return 0;
}