// John Kyle J. Desamparo
// BSCS-2A
#include <iostream>
using namespace std;

// fucntion declaration
int sigma(int number);

int main() {
    cout << "sigma(3): " << sigma(3) << endl;
    cout << "sigma(5): " << sigma(5) << endl;
    cout << "sigma(6): " << sigma(6) << endl;
    cout << "sigma(8): " << sigma(8) << endl;

    cout << "\nPress enter to exit.... ";
    cin.get();
    return 0;
}

// function definition
int sigma(int number) {
    int sum = 0;
    for (int i=1; i <= number; i++) {
        sum += i;
    }
    return sum;
};