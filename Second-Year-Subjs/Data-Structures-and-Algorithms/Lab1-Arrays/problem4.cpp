#include <iostream>
using namespace std;


// function declarations
int biggest_number(int arr[10]);
int smallest_number(int arr[10]);


int main() {
    // variables
    int array[10];
    int smallestNum;
    int biggestNum;

    // user inputs
    cout << "Enter a 10 number separated by space: " << endl;
    for (int i=0; i<sizeof(array)/sizeof(int); i++) {
        cin >> array[i];
    }

    biggestNum = biggest_number(array);
    smallestNum = smallest_number(array);

    // output
    cout << "\nThe Smallest number is: " << smallestNum
         << " and the Largest number is: " << biggestNum;
         
    return 0;
}


// function definitions
int biggest_number(int arr[10]) {
    int biggest = 0;
    for (int i=0; i<10; i++) {
        if (arr[i] > biggest) {
            biggest = arr[i];
        }
    }
    return biggest;
}

int smallest_number(int arr[10]) {
    int smallest = 9999999;
    for (int i=0; i<10; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    return smallest;
}