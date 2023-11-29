#include <iostream>
#include <string>
using namespace std;

int main() {
    string package;
    int package_price, drink_price;
    char drink_size, meal;

    cout << "Enter Meal Package (A,B,C,D): ";
    cin >> meal;

    switch (meal) {
        case 'A':
        case 'a':
            package = "Chicken & Spaghetti";
            package_price = 150;
            drink_size = 'S';
            drink_price = 30;
            break;

        case 'B':
        case 'b':
            package = "Hamburger & Fries";
            package_price = 145;
            drink_size = 'M';
            drink_price = 35;
            break;

        case 'C':
        case 'c':
            package = "Cheesedog";
            package_price = 100;
            drink_size = 'L';
            drink_price = 40;
            break;

        case 'D':
        case 'd':
            package = "Pizza";
            package_price = 80;
            drink_size = ' ';
            drink_price = 0;
            break;
    }

    cout << "Package: " << package << endl;
    cout << "Price: " << package_price << endl;

    cout << "Drinks: " << drink_size << endl;
    cout << "Price: " << drink_price << endl;

    cout << "\nTotal Price: " << drink_price + package_price << endl;

    return 0;
}