#include <iostream>
using namespace std;

int main() {
    int V_Class, km, rate, additional_fee;

    cout << "Enter Class (1-3): ";
    cin >> V_Class;

    cout << "Enter Distance (km): ";
    cin >> km;

    if (V_Class == 1) {
        rate = 41;
        additional_fee = 20*km;
    } else if (V_Class == 2) {
        rate = 102;
        additional_fee = 35*km;
    } else if (V_Class == 3) {
        rate = 122;
        additional_fee = 50*km;
    }

    cout << "Rate: " << rate << endl;
    cout << "Additional Fee: " << additional_fee << endl;
    return 0;
}