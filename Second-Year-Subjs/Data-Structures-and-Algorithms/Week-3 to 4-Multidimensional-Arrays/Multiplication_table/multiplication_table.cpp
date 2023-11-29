#include <iostream>
using namespace std;

int main() {
    int multiplicationTable[10][10];

    for (int i=1; i<11; i++) {
        for (int j=1; j<11; j++) {
            multiplicationTable[i-1][j-1] = i*j;
        }
    }

    // output
    cout << "[++ Multiplication Table ++]\n\n";
    for (int i=0; i<10; i++) {
        cout << "[ ";
        for (int j=0; j<10; j++) {
            cout << multiplicationTable[i][j] << "\t";
        }
        cout << "]\n";
    }

    return 0;
}