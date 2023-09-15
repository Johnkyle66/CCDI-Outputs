// John Kyle J. Desamparo
// BSCS-2A
#include <iostream>
using namespace std;

// function declarations
void printArray(int array[], int size);
int returnArrayCountGreaterThanY(int array[], int size, int y_value);

int main() {
    // variables
    int array1[] = {2,3,5};
    int array2[] = {2,3,5};
    int array3[] = {4,10,15};
    int array4[] = {4,10,15};

    // output
    cout << "Original: \n";
    cout << "Array 1: "; printArray(array1, 3);
    cout << "Array 2: "; printArray(array2, 3);
    cout << "Array 3: "; printArray(array3, 3);
    cout << "Array 4: "; printArray(array4, 3);

    // output 2
    cout << "\nOutput: \n";
    cout << "Array 1 GreaterThan (4): " << returnArrayCountGreaterThanY(array1, 3, 4) << endl;
    cout << "Array 2 GreaterThan (1): " << returnArrayCountGreaterThanY(array2, 3, 1)<< endl;
    cout << "Array 3 GreaterThan (10): " << returnArrayCountGreaterThanY(array3, 3, 11)<< endl;
    cout << "Array 4 GreaterThan (20): " << returnArrayCountGreaterThanY(array4, 3, 20)<< endl;

    cout << "\nPress enter to exit.... ";
    cin.get();
    return 0;
}


// Function Definitions
void printArray(int array[], int size){
    cout << "[ ";
    for (int i=0; i<3; i++) { cout << array[i] << ", "; }
    cout << "]" << endl;
};

int returnArrayCountGreaterThanY(int array[], int size, int y_value){
    int count = 0;
    for (int i=0; i<3; i++) {
        if (array[i] > y_value) {
            count++;
        }
    }
    return count;
};

