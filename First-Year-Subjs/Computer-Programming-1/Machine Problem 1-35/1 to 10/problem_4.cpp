#include <iostream>
using namespace std;

int main()
{
    int grade;

    cout << "Enter your grade: ";
    cin >> grade;

    if (grade < 100)
    {
        grade += 1;
    }

    cout << "Your new grade is: " << grade;
    return 0;
}