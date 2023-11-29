#include <iostream>
using namespace std;

// function declaration
void sort(int arr[], int size);


int main(){
    int array[5];

    // user inputs
    cout << "Enter five number separated by spaces: ";
    for (int i=0; i<5; i++) {
        cin >> array[i];
    }

    // output
    cout << "Sorted: ";
    sort(array, 5);
    return 0;
}


// sort function definition
void sort(int arr[], int size) {
    // variables
    int i, j, temp;
    bool swap;

    // sorting algorithm
    for (i=0; i<size; i++) {
        swap = false;
        for (j=0; j<size-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

                swap = true;
            }
        }
        if (swap == false){
            break;
        }
    }

    // Output
    for (i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
}
