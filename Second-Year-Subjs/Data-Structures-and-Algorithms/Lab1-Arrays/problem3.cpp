#include <iostream>
using namespace std;

// funtion declaration
int smallest_element(int arr[10]);

int main() {
    // variables
    int array[10];
    int smallest;

    // user inputs
    cout << "Enter a 10 number separated by space: " << endl;

    for (int i=0; i<sizeof(array)/sizeof(int); i++) {
        cin >> array[i];
    }

    // output
    smallest = smallest_element(array);
    cout << "Smallest: " << smallest;
    return 0;
}

// function definition
int smallest_element(int arr[10]) {
    int smallest = 9999999;

    for (int i=0; i<10; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    return smallest;
}