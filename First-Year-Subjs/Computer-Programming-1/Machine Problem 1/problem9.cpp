/* John Kyle J. Desamparo | CCDI 2023 */

/* Problem Number 9 */

/* Write a program that converts an input inch(es) into its equivalent
centimeters. Take note that one inch is equivalent to 2.54 cms. */

#include<iostream>

int main(){
    // variables
    float one_inch = 2.54;
    float inches, centimeters;
    
    std::cout << "/* Problem Number 9 */\n" << std::endl;

    // get user inputs
    std::cout << "Enter the inch(es): ";
    std::cin >> inches;

    // convert to cm
    centimeters = inches * one_inch;

    // output
    std::cout << "The value of that in cm(s) is: " << centimeters << std::endl;

    std::cout << "\n-- Press Enter to close --";
    std::cin.ignore();
    std::cin.get();

    return 0;
}