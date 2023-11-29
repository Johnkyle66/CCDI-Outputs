#include <iostream>
using namespace std;

int main() {
    int NOWeek;

    cout << "Enter a number (1-7): ";
    cin >> NOWeek;

    switch (NOWeek)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    default:
        break;
    }

    return 0;
}