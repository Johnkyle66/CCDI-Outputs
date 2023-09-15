// John Kyle J. Desamparo
// BSCS-2A
#include <iostream>
using namespace std;

// function declarations
void double_function(int array[], int size);
void printArray(int array[], int size);

int main() {
    // variables
    int array1[] = {1,2,3};
    int array2[] = {-2, 0, 2};
    int array3[] = {2, 10, 100};

    // output
    cout << "Original: \n";
    cout << "array 1: "; printArray(array1, 3);
    cout << "array 2: "; printArray(array2, 3);
    cout << "array 3: "; printArray(array3, 3);


    // output
    cout << "\nDouble: \n";
    cout << "array 1: ";    double_function(array1, 3); 
    cout << "array 2: ";    double_function(array2, 3);
    cout << "array 3: ";    double_function(array3, 3);

    cout << "\nPress enter to exit... ";
    cin.get();

    return 0;
}


// function definitions
void double_function(int array[], int size) {
    cout << "[ ";
    for (int i=0;i<size;i++) {
        cout << array[i] * 2 << ", ";
    };
    cout << "]" << endl;
};


void printArray(int array[], int size) {
    cout << "[ ";
    for (int i=0;i<size;i++) {
        cout << array[i] << ", ";
    };
    cout << "]" << endl;
};