#include <iostream>
using namespace std;

int main()
{
    float assignment, seatwork, quiz, exam, grade;

    cout << "Enter Your ASSIGNMENT Grade: ";
    cin >> assignment;

    cout << "Enter Your SEATWORK Grade: ";
    cin >> seatwork;

    cout << "Enter your QUIZ Grade: ";
    cin >> quiz;

    cout << "Enter your EXAM Grade: ";
    cin >> exam;

    grade = (assignment * 0.10) + (seatwork * 0.20) + (quiz * 0.30) + (exam * 0.40);

    cout << "General Average is: " << grade << endl;

    if (grade >= 97 && grade <= 100)
    {
        cout << "Equivalent Grade: 1.00 | Remarks: Excellent\n";
    }
    else if (grade >= 94 && grade <= 96)
    {
        cout << "Equivalent Grade: 1.25 | Remarks: Excellent\n";
    }
    else if (grade >= 91 && grade <= 93)
    {
        cout << "Equivalent Grade: 1.50 | Remarks: Very Good\n";
    }
    else if (grade >= 88 && grade <= 90)
    {
        cout << "Equivalent Grade: 1.75 | Remarks: Very Good\n";
    }
    else if (grade >= 85 && grade <= 87)
    {
        cout << "Equivalent Grade: 2.00 | Remarks: Good\n";
    }
    else if (grade >= 82 && grade <= 84)
    {
        cout << "Equivalent Grade: 2.25 | Remarks: Good\n";
    }
    else if (grade >= 79 && grade <= 81)
    {
        cout << "Equivalent Grade: 2.50 | Remarks: Satisfactory\n";
    }
    else if (grade >= 76 && grade <= 78)
    {
        cout << "Equivalent Grade: 2.75 | Remarks: Fair\n";
    }
    else if (grade == 75)
    {
        cout << "Equivalent Grade: 3.00 | Remarks: Passed\n";
    }
    else if (grade < 75)
    {
        cout << "Equivalent Grade: 5.00 | Remarks: Failed\n";
    }

    return 0;
}