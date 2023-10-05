#include <iostream>

using namespace std;

int main() {
    cout << "Problem 3\n\n";
    
    // variables
    int initialGrade;
    int finalGrade;

    // get user inputs
    cout << "Enter your grade: ";
    cin >> initialGrade;

    // conditional
    if (initialGrade >= 100) {
        finalGrade = initialGrade;
    } else {
        finalGrade = initialGrade + 1;
    }
    // output
    cout << "Your final grade is: " << finalGrade << endl;

    return 0;
}