// John Kyle J. Desamparo
// BSCS-2A
#include <iostream>
using namespace std;

// function declaration
void printArray(int array[], int size);
void reversed(int array[], int size);

int main(){

    // variables
    int array1[] = {1,3,5};
    int array2[] = {-1,3,-5};
    int array3[] = {1,2,3,4,5};
    int array4[] = {2,10,13,15};

    // output
    cout << "Original: \n";
    cout << "Array 1: "; printArray(array1, 3);
    cout << "Array 2: "; printArray(array2, 3);
    cout << "Array 3: "; printArray(array3, 5);
    cout << "Array 4: "; printArray(array4, 4);

    // reverse()
    reversed(array1, 3);
    reversed(array2, 3);
    reversed(array3, 5);
    reversed(array4, 4);

    // output
    cout << "\nReverse: \n";
    cout << "Array 1: "; printArray(array1, 3);
    cout << "Array 2: "; printArray(array2, 3);
    cout << "Array 3: "; printArray(array3, 5);
    cout << "Array 4: "; printArray(array4, 4);


    cout << "\nPress enter to exit.... ";
    cin.get();
    return 0;
}

// Function Definitions
void printArray(int *array, int size) {
    cout << "[ ";
    for (int i=0; i<size; i++) { cout << array[i] << ", "; }
    cout << "]" << endl;
};

void reversed(int array[], int size) {
    int left = 0;
    int right = size - 1;

    while (left < right) {
        int temp = array[left];
        array[left] = array[right];
        array[right] = temp;

        left++;
        right--;
    }
};