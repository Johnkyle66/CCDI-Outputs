#include <iostream>
using namespace std;

int main()
{
    int windSpeed;

    cout << "Enter Wind Speed: ";
    cin >> windSpeed;

    if (windSpeed < 25) {
        cout << "not a strong wind";
    } else if (windSpeed >= 25 && windSpeed <= 38) {
        cout << "strong wind";
    } else if (windSpeed >= 39 && windSpeed <= 54) {
        cout << "gale";
    } else if (windSpeed >= 55 && windSpeed <= 72) {
        cout << "whole gale";
    } else if (windSpeed > 72) {
        cout << "hurricane";
    }

    return 0;
}