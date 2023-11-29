#include <iostream>
using namespace std;

/* Implement the ff. decision table using a nested if statement. */

int main()
{
    float grade;

    cout << "Enter Your GPA (0-4): ";
    cin >> grade;

    if (grade >= 0.0) {
        if (grade >= 1.0) {
            if (grade >= 2.0) {
                if (grade >= 3.0) {
                    if (grade >= 3.5 && grade <= 4.00) {
                        cout << "Highest honors for semester";
                    } else {
                        cout << "Dean's list for semester";
                    }
                } else {
                    cout << "( no message )";
                }
            } else {
                cout << "On probation for next semester";
            }
        } else {
            cout << "Failed semester - registration suspended" << endl;
        }
    }

    return 0;
}