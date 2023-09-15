// John Kyle J. Desamparo
// BSCS-2A

#include <iostream>

using namespace std;


// function declaration
void makeItBig(int array[], int size);
void printArray(int array[], int size);


int main() {
    // variables
    int array1[4] = {-1,3,5,-5};
    int array2[3] = {2,4,6};
    int array3[3] = {-4,0,4};

    // output
    cout << "Original: \n";
    cout << "array 1: ";    printArray(array1, 4); 
    cout << "array 2: ";    printArray(array2, 3);
    cout << "array 3: ";    printArray(array3, 3);

    // output
    cout << "\nMake It Big: \n";
    cout << "array 1: ";    makeItBig(array1, 4);
    cout << "array 2: ";    makeItBig(array2, 3); 
    cout << "array 3: ";    makeItBig(array3, 3);

    cout << "\nPress enter to exit.... ";
    cin.get();
    return 0;
}

// function definitions
void makeItBig(int array[], int size) {
    cout << "[ ";
    for (int i=0; i<size; i++) {
        if (array[i] > 0) {
            cout << "big, ";
        } else {
            cout << array[i] << ", ";
        }
    }
    cout << "]" << endl;
}

void printArray(int array[], int size) {
    cout << "[ ";
    for (int i=0; i<size; i++) {
        cout << array[i] << ", ";
    };
    cout << "]" << endl;
};