#include <iostream>
using namespace std;


// function declaration
int mostOccurringElement(int arr[10]);


// main function
int main() {
    // variables
    int array[10];
    int mostOccuringNumber;

    // user inputs
    cout << "Enter a 10 number separated by space: " << endl;
    for (int i=0; i<sizeof(array)/sizeof(int); i++) {
        cin >> array[i];
    }

    cout << "Original Array: ";
    for (int i=0; i<sizeof(array)/sizeof(int); i++) {
        cout << array[i] << " ";
    }

    mostOccuringNumber = mostOccurringElement(array);

    // output
    cout << "\nMost occured number: " << mostOccuringNumber << endl;
    return 0;
}


// function definition
int mostOccurringElement(int arr[10]) {
    int number = 0;
    int index = 0;
    int frequency[10] = {0};

    /* double for loop to count the frequency of each element of the base array
    and store it in a separate array */
    for (int i=0; i<10; i++) {
        for (int j=0; j<10; j++) {
           if (arr[j] == arr[i]) {
                frequency[i]++;
            }
        }
    }

    /* Another for loop to get the index/position of the element 
    that occured the most */
    for (int i=0; i<10; i++) {
        if (frequency[i] > index) {
            index = i;
        }
    }
    
    // Set the value and return it
    number = arr[index];
    return number;
}