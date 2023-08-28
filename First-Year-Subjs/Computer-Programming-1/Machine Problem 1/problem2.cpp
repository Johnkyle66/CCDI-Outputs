/* John Kyle J. Desamparo | CCDI 2023 */

/* Problem Number 2 */

/* Create a program that generates the grade of the three grading systems.
Display the output. */

#include<iostream>

int main(){
    // variable declaration
    float prelim, midterm, final;

    std::cout << "/* Problem Number 2 */\n" << std::endl;

    // get prelim grades
    std::cout << "Enter the Prelim Grade: ";
    std::cin >> prelim;

    //get midterm grades
    std::cout << "Enter the Midterm Grade: ";
    std::cin >> midterm;

    //get final grades
    std::cout << "Enter the Final Grade: ";
    std::cin >> final;

    // calculate the grades
    prelim *= 0.3;  // grade * 30%
    midterm *= 0.3; // grade * 30%
    final *= 0.4;   // grade * 40%
    float total_grade = prelim + midterm + final;

    // output
    std::cout << "Your General Average is: " << total_grade << std::endl;
    std::cout << "\n-- Press Enter to close --";
    std::cin.ignore();
    std::cin.get();

    return 0;
}