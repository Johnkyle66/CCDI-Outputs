#include <iostream>
using namespace std;

int main()
{
    float range, grade;

    cout << "Enter Your Grade(1-100): ";
    cin >> range;

    if (range >= 98 && range <= 100) {
        cout << "Grade Value: 1.00";
    } else if (range >= 95 && range <= 97) {
        cout << "Grade Value: 1.25";
    } else if (range >= 92 && range <= 94) {
        cout << "Grade Value: 1.50";
    } else if (range >= 89 && range <= 91) {
        cout << "Grade Value: 1.75";
    } else if (range >= 85 && range <= 88) {
        cout << "Grade Value: 2.00";
    } else if (range >= 82 && range <= 84) {
        cout << "Grade Value: 2.25";
    } else if (range >= 80 && range <= 81) {
        cout << "Grade Value: 2.50";
    } else if (range >= 77 && range <= 79) {
        cout << "Grade Value: 2.75";
    } else if (range >= 75 && range <= 76) {
        cout << "Grade Value: 3.00";
    } else if (range < 75) {
        cout << "OUT OF RANGE";
    }
    
    return 0;
}