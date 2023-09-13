#include <iostream>

using namespace std;

int* double_function(int (&array)[3]);
void printArray(int (&array)[3]);

int main() {
    // variables
    int array1[] = {1,2,3};
    int array2[] = {-2, 0, 2};
    int array3[] = {2, 10, 100};

    // output
    cout << "Original: \n";
    cout << "array 1: "; printArray(array1);
    cout << "array 2: "; printArray(array2);
    cout << "array 3: "; printArray(array3);

    double_function(array1); 
    double_function(array2);
    double_function(array3);

    // output
    cout << "\nDouble: \n";
    cout << "array 1: "; printArray(array1);
    cout << "array 2: "; printArray(array2);
    cout << "array 3: "; printArray(array3);

    cout << "\nPress enter to exit... ";
    cin.get();

    return 0;
}


int* double_function(int (&array)[3]) {
    for (int i=0;i<3;i++) {
        array[i] *= 2;
    };

    return &array[0];
};


void printArray(int (&array)[3]) {
    cout << "[ ";
    for (int i=0;i<3;i++) {
        cout << array[i] << ", ";
    };
    cout << "]" << endl;
};