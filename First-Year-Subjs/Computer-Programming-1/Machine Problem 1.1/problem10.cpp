#include <iostream>

int main(){
    using namespace std;

    // variables
    float kelvin, fahrenheit;

    // get user inputs
    cout << "Enter the temperature in Kelvin: ";
    cin >> kelvin;

    // convert kelvin to fahrenheit
    fahrenheit = (9.0/5.0) * (kelvin - 273.15) + 32;

    // output
    cout << "The temperature in Kelvin: " << kelvin << endl;
    cout << "The temperature in Fahrenheit: " << fahrenheit << endl;

    return 0;
}