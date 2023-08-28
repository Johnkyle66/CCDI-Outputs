/* John Kyle J. Desamparo | CCDI 2023 */

/* Problem Number 4 */

/* Write a program that convert the input Fahrenheit degree into its
equivalent Celsius degree. Use the formula C= 5/9 (F -32) */

#include<iostream>

int main(){
    float F, result;
    
    std::cout << "/* Problem Number 4 */\n" << std::endl;

    // get user input
    std::cout << "Enter the temperature in Fahrenheit: ";
    std::cin >> F;

    // conversion formula
    result = 5.0/9.0 * (F -32);

    // output
    std::cout << "The equivalent temperature in Celsius is: " << result << std::endl;

    std::cout << "\n-- Press Enter to close --";
    std::cin.ignore();
    std::cin.get();

    return 0;
}