/* John Kyle J. Desamparo | CCDI 2023 */

/* Problem Number 8 */

/* Write a program that converts the input dollar to its peso exchange rate
equivalent. Assume that the present exchange rate is 51.50 pesos against
the dollar. Then display the peso equivalent exchange rate */

#include<iostream>

int main(){
    // variables
    float conversion = 51.50;
    float dollar, peso;

    std::cout << "/* Problem Number 8 */\n" << std::endl;

    // get user input
    std::cout << "Enter the dollar($) amount: ";
    std::cin >> dollar;

    // convert to peso
    peso = conversion * dollar;

    //output
    std::cout << "The value of that in peso(P) is: " << peso << std::endl;

    std::cout << "\n-- Press Enter to close --";
    std::cin.ignore();
    std::cin.get();

    return 0;
}