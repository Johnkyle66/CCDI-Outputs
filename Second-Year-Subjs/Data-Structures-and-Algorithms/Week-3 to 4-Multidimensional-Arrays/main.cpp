#include <iostream>
#include <string>

using namespace std;

struct StudentRec {
    string name;
    float tuition;
    float gpa;
    string major;
};

int main() {
    StudentRec aStudent;

    // Read in a student's name
    cout << "Please enter your name: ";
    getline(cin, aStudent.name);

    // Add $200.00 to the student's tuition.
    aStudent.tuition += 200.00;

    // If the student's major is "Computer Science", print out the student's name and his/her gpa
    if (aStudent.major == "Computer Science") {
        cout << "Name: " << aStudent.name << endl;
        cout << "GPA: " << aStudent.gpa << endl;
    // if not print his/her tuition.
    } else {
        cout << "Tuition: " << (float)aStudent.tuition << endl;
    }

    return 0;
}