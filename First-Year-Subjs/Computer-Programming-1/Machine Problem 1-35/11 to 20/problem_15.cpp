#include <iostream>
using namespace std;

int main()
{
    int a,b,c, highest, lowest;

    cout << "Enter three numbers separated by spaces: ";
    cin >> a >> b >> c;

    lowest = a;
    highest = a;

    if (b < lowest) {
        lowest = b;
    }
    if (c < lowest) {
        lowest = c;
    }
    if (b > highest) {
        highest = b;
    }
    if (c > highest) {
        highest = c;
    }

    cout << "highest: " << highest << " | " << "lowest: " << lowest << endl;
    cout << "difference: " << highest - lowest << endl;
    return 0;
}