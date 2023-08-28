/* John Kyle J. Desamparo | CCDI 2023 */

/* Problem Number 1 */

/* Create a program that gives the user to display the sum of the first and
second numbers, difference of the sum and the third number, product of
the difference and the fourth number, and the quotient of the product and
the fifth number. Display their output. */

#include<iostream>

int main(){
    // variable declaration
    int first, second, third, fourth, fifth;

    std::cout << "/* Problem Number 1 */\n" << std::endl;

    // Get user inputs
    std::cout << "Enter the first number: ";
    std::cin >> first;

    std::cout << "Enter the second number: ";
    std::cin >> second;

    std::cout << "Enter the third number: ";
    std::cin >> third;

    std::cout << "Enter the fourth number: ";
    std::cin >> fourth;

    std::cout << "Enter the fifth number: ";
    std::cin >> fifth;

    // Calculate user inputs
    int sum = (first + second);
    int difference = (sum - third);
    int product = (difference * fourth);
    int quotient = (product / fifth);

    // Display Outputs
    std::cout << "\nThe SUM of " << "first" << " and " << "second" << " is\t\t: " << sum << std::endl;
    std::cout << "The DIFFERENCE of " << "sum" << " and " << "third" << " is\t: " << difference << std::endl;
    std::cout << "The PRODUCT of " << "difference" << " and " << "fourth" << " is\t: " << product << std::endl;
    std::cout << "The QUOTIENT of " << "product" << " and " << "fifth" << " is\t: " << quotient << std::endl;

    std::cout << "\n-- Press Enter to close --";
    std::cin.ignore();
    std::cin.get();

    return 0;
}