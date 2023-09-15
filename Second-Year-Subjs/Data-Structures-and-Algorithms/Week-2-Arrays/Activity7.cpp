// John Kyle J. Desamparo
// BSCS-2A
#include <iostream>
#include <vector>

using namespace std;

// Function declaration:
void heights(int buildings[], int size);
void printArray(int array[], int size);

int main() {

    // Test cases
    int buildings1[] = {-1, 1, 1, 7, 3};
    int buildings2[] = {0, 4};
    int buildings3[] = {-1, 1, 1, 7, 3, 5, 9};
    int buildings4[] = {-1, 1, 1, 7, 3, 5, 9, -3, 3, 15};

    // Output
    cout << "Buildings 1: "; printArray(buildings1, 5); cout << endl;
    cout << "Buildings 2: "; printArray(buildings2, 2); cout << endl;
    cout << "Buildings 3: "; printArray(buildings3, 7); cout << endl;
    cout << "Buildings 4: "; printArray(buildings4, 10); cout << endl;

    // Results
    cout << "\nVisible Buildings: \n";
    cout << "Buildings 1: "; heights(buildings1, 5); cout << endl;
    cout << "Buildings 2: "; heights(buildings2, 2); cout << endl;
    cout << "Buildings 3: "; heights(buildings3, 7); cout << endl;
    cout << "Buildings 4: "; heights(buildings4, 10); cout << endl;

    cout << "\nPress enter to exit.... ";
    cin.get();
    return 0;
}


// Function definitions:
void printArray(int array[], int size){
    cout << "[ ";
    for (int i = 0; i<size; i++) {
        cout << array[i] << ", ";
    }
    cout << "]";
}


void heights(int buildings[], int size) {
    int tallest = 0;

    cout << "[ ";
    for (int i=0; i<size; i++){
        if (buildings[i] > tallest) {
            tallest = buildings[i];
            cout << buildings[i] << ", ";
        }
    }
    cout << "]";
}