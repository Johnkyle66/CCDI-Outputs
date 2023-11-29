#include <iostream>
using namespace std;

int main() {
    int a,b,c,d,e,f,g,h,i,j;
    int average;

    cout << "Enter Your Grades\n";
    cout << "Math I: "; cin >> a;
    cout << "Math II: "; cin >> b;
    cout << "Math III: "; cin >> c;
    cout << "English I: "; cin >> d;
    cout << "English II: "; cin >> e;
    cout << "English III: "; cin >> f;
    cout << "Science I: "; cin >> g;
    cout << "Science II: "; cin >> h;
    cout << "Science III: "; cin >> i;
    cout << "Calculus: "; cin >> j;

    average = (a+b+c+d+e+f+g+h+i+j) / 10;
    cout << "Average: " << average << endl;

    if (average >= 98 && average <= 100) {
        cout << "Scholarship Grant: " << "President's list" << endl;
        cout << "Tuition fee Discount: " << "100%" << endl;
    } else if (average >= 95 && average <= 97) {
        cout << "Scholarship Grant: " << "College Scholar" << endl;
        cout << "Tuition fee Discount: " << "50%" << endl;
    } else if (average >= 92 && average <= 94) {
        cout << "Scholarship Grant: " << "Dean's List" << endl;
        cout << "Tuition fee Discount: " << "30%" << endl;
    } else {
        cout << "Scholarship Grant: " << "None" << endl;
        cout << "Tuition fee Discount: " << "0" << endl;
    }
    return 0;
}