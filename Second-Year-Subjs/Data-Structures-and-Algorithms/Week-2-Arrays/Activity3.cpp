#include <iostream>

using namespace std;

// function declarations
void printArray(int (&array)[3]);
int returnArrayCountGreaterThanY(int (&array)[3], int y_value);

int main() {
    // variables
    int array1[] = {2,3,5};
    int array2[] = {2,3,5};
    int array3[] = {4,10,15};
    int array4[] = {4,10,15};

    // output
    cout << "Original: \n";
    cout << "Array 1: "; printArray(array1);
    cout << "Array 2: "; printArray(array2);
    cout << "Array 3: "; printArray(array3);
    cout << "Array 4: "; printArray(array4);

    // output 2
    cout << "\nOutput: \n";
    cout << "Array 1 GreaterThan (4): " << returnArrayCountGreaterThanY(array1, 4) << endl;
    cout << "Array 2 GreaterThan (1): " << returnArrayCountGreaterThanY(array2, 1)<< endl;
    cout << "Array 3 GreaterThan (10): " << returnArrayCountGreaterThanY(array3, 11)<< endl;
    cout << "Array 4 GreaterThan (20): " << returnArrayCountGreaterThanY(array4, 20)<< endl;

    cout << "\nPress enter to exit.... ";
    cin.get();
    return 0;
}


void printArray(int (&array)[3]) {
    cout << "[ ";
    for (int i=0; i<3; i++) { cout << array[i] << ", "; }
    cout << "]" << endl;
};


int returnArrayCountGreaterThanY(int (&array)[3], int y_value) {
    int count = 0;
    for (int i=0; i<3; i++) {
        if (array[i] > y_value) {
            count++;
        }
    }
    return count;
};

