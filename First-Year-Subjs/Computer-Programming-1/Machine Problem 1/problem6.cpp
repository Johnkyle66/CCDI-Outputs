/* John Kyle J. Desamparo | CCDI 2023 */

/* Problem Number 6 */

/* Write a program that will Input the name , position of the employee ,
Input the rate per hour, hours worked. Compute the Gross pay for an
employee. */

#include<iostream>
#include<string>

int main(){
    // variables
    std::string name;
    float rate_per_hour;
    float hours_worked;
    float salary;

    std::cout << "/* Problem Number 6 */\n" << std::endl;

    // get user input
    std::cout << "Enter the Name: ";
    std::getline(std::cin, name);
    std::cout << "Enter the Rate per Hour: ";
    std::cin >> rate_per_hour;
    std::cout << "Enter the hours worked: ";
    std::cin >> hours_worked;

    // calculate salary
    salary = hours_worked * rate_per_hour;

    // output
    std::cout << "\n" << name << ", Your salary is " << salary << std::endl;

    std::cout << "\n-- Press Enter to close --";
    std::cin.ignore();
    std::cin.get();

    return 0;
}