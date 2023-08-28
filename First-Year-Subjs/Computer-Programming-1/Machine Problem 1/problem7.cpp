/* John Kyle J. Desamparo | CCDI 2023 */

/* Problem Number 7 */

/* Write a program to calculate the area of a circle and display the result.
Use the formula */

#include<iostream>
using namespace std;

int main(){
    // variables
    float radius, area;

    cout << "/* Problem Number 7 */\n" << endl;

    // get user input
    cout << "Enter the value of radius: ";
    cin >> radius;

    // calculate area
    area = 3.1416 * radius;

    // output
    cout << "The AREA of the circle is " << area << endl;

    cout << "\n-- Press Enter to close --";
    cin.ignore();
    cin.get();

    return 0;
}