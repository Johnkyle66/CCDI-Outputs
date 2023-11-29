#include <iostream>

using namespace std;

int main() {
    // variables
    int array[10];
    int numberToFind;

    // user inputs
    cout << "Enter a 10 number separated by space: " << endl;
    
    for (int i=0; i<sizeof(array)/sizeof(int); i++) {
        cin >> array[i];
    }

    cout << "Enter a number to find: ";
    cin >> numberToFind;

    // logic to check if number is present
    for (int i=0; i<sizeof(array)/sizeof(int); i++) {
        // if present, print "present" then break the loop
        if (array[i] == numberToFind) {
            cout << "The number is present!";
            break;
        }
        // if at the last element and still not present
        // print "NOT present" and break the loop
        if (i == (sizeof(array)/sizeof(int)) - 1) {
            cout << "The number is NOT present...";
            break;
        }
    }

    return 0;
}