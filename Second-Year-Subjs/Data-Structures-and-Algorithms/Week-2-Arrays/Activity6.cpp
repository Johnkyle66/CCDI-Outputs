#include <iostream>
#include <vector>

using namespace std;

// function declaration:
vector<int> filterRange(vector<int> &array, int min, int max);
void printArray(vector<int> &array);

int main() {

    // variables
    vector<int> array1 = {1,3,5,7,10};
    vector<int> array2 = {1,3,5,7,10};
    vector<int> array3 = {2,4,3,5};
    vector<int> array4 = {2,4,3,5};
    vector<int> array5 = {6,2,-3,5,7};

    // output
    cout << "Array 1: "; printArray(array1); cout << endl;
    cout << "Array 2: "; printArray(array2); cout << endl;
    cout << "Array 3: "; printArray(array3); cout << endl;
    cout << "Array 4: "; printArray(array4); cout << endl;
    cout << "Array 5: "; printArray(array5); cout << endl;

    // Filter()
    array1 = filterRange(array1, 4, 8);
    array2 = filterRange(array2, -1, 4);
    array3 = filterRange(array3, 2, 6);
    array4 = filterRange(array4, 0, 4);
    array5 = filterRange(array5, 3, 8);

    // results
    cout << "\nResults: \n";
    cout << "Array 1: "; printArray(array1); cout << endl;
    cout << "Array 2: "; printArray(array2); cout << endl;
    cout << "Array 3: "; printArray(array3); cout << endl;
    cout << "Array 4: "; printArray(array4); cout << endl;
    cout << "Array 5: "; printArray(array5); cout << endl;

    cout << "\nPress enter to exit.... ";
    cin.get();
    return 0;
}

// function definitions:
void printArray(vector<int> &array) {
    cout << "[ ";

    for (int i=0; i < array.size(); i++) {
        cout << array[i] << ", ";
    };

    cout << "]";
};


vector<int> filterRange(vector<int> &array, int min, int max) {
    vector<int> filteredArray;

    for (int i = 0; i < array.size(); i++) {
        if (array[i] > min && array[i] < max) {
            filteredArray.push_back(array[i]);
        }
    }

    return filteredArray;
}