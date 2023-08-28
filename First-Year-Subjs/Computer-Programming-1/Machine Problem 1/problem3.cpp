/* John Kyle J. Desamparo | CCDI 2023 */

/* Problem Number 3 */

/* Write a program that takes as input the purchase price of an item(P), its
expected number of years in service (Y) and its expected salvage
value(S). Then output the early depreciation for the Item(D). Use the
formula: D= (P-S)/Y; */

#include<iostream>

int main(){
    // variable declaration
    int D, S, Y, P;

    std::cout << "/* Problem Number 3 */\n" << std::endl;

    // get user input
    std::cout << "Enter the purchase price of an item: ";
    std::cin >> P;
    std::cout << "Enter the number of years in service: ";
    std::cin >> Y;
    std::cout << "Enter the expected salvage value: ";
    std::cin >> S;

    // formula
    D = (P-S)/Y;

    // output
    std::cout << "\n/* Output */\n" << "The early depreciation for the Item is: " << D << std::endl;
    std::cout << "\n-- Press Enter to close --";
    std::cin.ignore();
    std::cin.get();

    return 0;
}