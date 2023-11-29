#include <iostream>
using namespace std;

// funtion declaration
int largest_element(int arr[10]);

int main() {
    // variables
    int array[10];
    int largest;

    // user inputs
    cout << "Enter a 10 number separated by space: " << endl;

    for (int i=0; i<sizeof(array)/sizeof(int); i++) {
        cin >> array[i];
    }

    // output
    largest = largest_element(array);
    cout << "Largest: " << largest;
    return 0;
}

// function definition
int largest_element(int arr[10]) {
    int largest = 0;

    for (int i=0; i<10; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    return largest;
}