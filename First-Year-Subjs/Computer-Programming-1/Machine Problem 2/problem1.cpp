#include <iostream>

using namespace std;

int main(){
    cout << "Problem 1\n\n";
    
    // variables
    int age;

    // Get user inputs
    cout << "Enter your current age: ";
    cin >> age;
    
    // Conditional
    if (age >= 18) {
        cout << "You are old enough to drive.\n";
    } else {
        int years = 18 - age;
        cout << "You need to wait " << years << " years before you can drive.\n";
    }

    return 0;
}