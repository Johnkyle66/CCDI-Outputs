/* John Kyle J. Desamparo | CCDI 2023 */

/* Problem Number 5 */

/* Write a program that convert the input Celsius degree into its
equivalent Fahrenheit degree. Use the formula F= (9/5) * C + 32 */

#include<iostream>

int main(){
    // variables
    float C, F;
    
    std::cout << "/* Problem Number 5 */\n" << std::endl;

    // get user input
    std::cout << "Enter the temperature in Celsius: ";
    std::cin >> C;

    // conversion formula
    F = (9.0/5.0) * C + 32;

    // output
    std::cout << "The equivalent temperature in Fahrenheit is: " << F << std::endl;

    std::cout << "\n-- Press Enter to close --";
    std::cin.ignore();
    std::cin.get();

    return 0;
}