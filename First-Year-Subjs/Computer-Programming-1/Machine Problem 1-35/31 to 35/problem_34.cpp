#include <iostream>
using namespace std;

int main() {
    int kilowatts;
    float cost;

    cout << "Enter number of kilowatt hours: ";
    cin >> kilowatts;

    if (kilowatts >= 1 && kilowatts <= 99) {
        cost = 10.00 * kilowatts;
    } else if (kilowatts >= 100 && kilowatts <= 249) {
        cost = 10.00 * 99 + ((kilowatts - 99) * 50.00);
    } else {
        cost = 99 * 10.00 + (249 - 99) * 50.00 + (kilowatts - 249) * 100.00;
    }

    cout << "Total Electric Bill is P " << cost;
    return 0;
}