#include <iostream>
#include <vector>
#include <variant>
#include <string>

/* Issue - an array can only have 1 data type ie: int only or string only.
So we will try and make our own data type/structure that can handle both */
using namespace std;

// IntOrString is a custom data type that can handle both int and string
using IntOrString = variant<int, string>;

// Function Declaration
// A function that takes a vector which is passed by reference and returns a vector with the type of IntOrString
vector<IntOrString> makeItBig(vector<IntOrString>& array);
void printArray(vector<IntOrString>& array);

int main() {

    // variables
    vector<IntOrString> array1, array2, array3;

    array1 = {-1,3,5,-5};
    array2 = {2,4,6};
    array3 = {-4,0,4};

    // output
    cout << "Original: \n";
    cout << "array 1: ";    printArray(array1); 
    cout << "array 2: ";    printArray(array2);
    cout << "array 3: ";    printArray(array3);

    makeItBig(array1);
    makeItBig(array2);
    makeItBig(array3);

    // output
    cout << "\nMake It Big: \n";
    cout << "array 1: ";    printArray(array1); 
    cout << "array 2: ";    printArray(array2);
    cout << "array 3: ";    printArray(array3);

    cout << "\nPress enter to exit.... ";
    cin.get();

    return 0;
}


vector<IntOrString> makeItBig(vector<IntOrString>& array) {
    int arraySize = array.size();

    for (int i=0; i<arraySize; i++){
        if (holds_alternative<int>(array[i]) && get<int>(array[i]) > 0) {
            array[i] = "big";
        }
    }

    return array;
};


void printArray(vector<IntOrString>& array) {
    cout << "[ ";

    for (const auto& element : array) {
        // checks if the element is a string or an integer before printing
        if (holds_alternative<int>(element)) { cout << get<int>(element) << ", "; }
        else if (holds_alternative<string>(element)) { cout << get<string>(element) << ", "; }
    }

    cout << "]" << endl;
}
