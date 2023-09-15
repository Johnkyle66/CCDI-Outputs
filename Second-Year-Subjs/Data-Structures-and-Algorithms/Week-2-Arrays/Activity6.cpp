// John Kyle J. Desamparo
// BSCS-2A
#include <iostream>

using namespace std;

// function declaration:
void filterRange(int array[], int size, int min, int max);
void printArray(int array[], int size);

int main() {

    // variables
    int array1[] = {1,3,5,7,10};
    int array2[] = {1,3,5,7,10};
    int array3[] = {2,4,3,5};
    int array4[] = {2,4,3,5};
    int array5[] = {6,2,-3,5,7};

    // output
    cout << "Array 1 (4 to 8): "; printArray(array1, 5); cout << endl;
    cout << "Array 2 (-1 to 4): "; printArray(array2, 5); cout << endl;
    cout << "Array 3 (2 to 6): "; printArray(array3, 4); cout << endl;
    cout << "Array 4 (0 to 4): "; printArray(array4, 4); cout << endl;
    cout << "Array 5 (3 to 8): "; printArray(array5, 5); cout << endl;

    // results
    cout << "\nResults: \n";
    cout << "Array 1: "; filterRange(array1, 5, 4, 8); cout << endl;
    cout << "Array 2: "; filterRange(array2, 5, -1, 4); cout << endl;
    cout << "Array 3: "; filterRange(array3, 4, 2, 6); cout << endl;
    cout << "Array 4: "; filterRange(array4, 4, 0, 4); cout << endl;
    cout << "Array 5: "; filterRange(array5, 5, 3, 8); cout << endl;

    cout << "\nPress enter to exit.... ";
    cin.get();
    return 0;
}

// function definitions:
void printArray(int array[], int size) {
    cout << "[ ";
    for (int i=0; i<size; i++) {
        cout << array[i] << ", ";
    };
    cout << "]";
};

void filterRange(int array[], int size, int min, int max){
    cout << "[ ";
    for (int i = 0; i<size; i++) {
        if (array[i] > min && array[i] < max) {
            cout << array[i] << ", ";
        }
    }
    cout << "]";
}