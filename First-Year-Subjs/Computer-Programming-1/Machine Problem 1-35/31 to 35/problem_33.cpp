#include <iostream>
#include <string>
using namespace std;

int main() {
    string equivalent, mode_of_payment, modifier;
    char room_type;
    int code, rate, meal;
    float price;

    cout << "Enter Room Type (A,B,C): ";
    cin >> room_type;

    cout << "Enter Mode of Payment (1 or 2): ";
    cin >> code;

    switch (room_type) {
        case 'A':
        case 'a':
            equivalent = "Standard";
            rate = 5000;
            meal = 1500;
            break;

        case 'B':
        case 'b':
            equivalent = "De Luxe";
            rate = 15000;
            meal = 2000;
            break;

        case 'C':
        case 'c':
            equivalent = "Suite";
            rate = 20000;
            meal = 3000;
            break;

        default:
            break;
    }

    switch (code) {
        case 1:
            mode_of_payment = "Cash";
            modifier = "2% Discount";
            price = rate + meal - ((rate + meal) * 0.02);
            break;

        case 2:
            mode_of_payment = "Credit Card";
            modifier = "5% Interest";
            price = rate + meal + ((rate + meal) * 0.05);
            break;

        default:
            break;
    }

    cout << "\nRoom: " << equivalent << endl;
    cout << "Rate: " << rate << " | " << "Meal: " << meal << endl;
    cout << "Mode of Payment: " << mode_of_payment << " | " << modifier << endl;
    cout << "\nTotal Price: " << price << endl;
    return 0;
}