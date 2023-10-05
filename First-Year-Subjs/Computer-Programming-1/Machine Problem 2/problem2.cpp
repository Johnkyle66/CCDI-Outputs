#include <iostream>

using namespace std;

int main() {
    cout << "Problem 2\n\n";
    
    // variables
    float purchaseAmount;
    float amountToBePaid;

    // get user input
    cout << "How much was your purchase?: ";
    cin >> purchaseAmount;

    // conditional
    if (purchaseAmount >= 2000) {
        amountToBePaid = purchaseAmount - (purchaseAmount * 0.05);
    } 
    else {
        amountToBePaid = purchaseAmount;
    }
    
    // output
    cout << "You need to pay " << amountToBePaid << endl;

    return 0;
}