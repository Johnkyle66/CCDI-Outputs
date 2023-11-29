#include <iostream>
using namespace std;

int main()
{   
    int choice;
    float n1, n2;

    cout << "\t1. ADD TWO NUMBERS\n";
    cout << "\t2. SUBTRACT TWO NUMBERS\n";
    cout << "\t3. MULTIPLY TWO NUMBERS\n";
    cout << "\t4. DIVIDE TWO NUMBERS\n";
    cout << "\t5. EXIT\n";

    cout << "\nENTER YOUR CHOICE: ";
    cin >> choice;
    cout << "Enter the first number: ";
    cin >> n1;
    cout << "Enter the second number: ";
    cin >> n2;

    if (choice == 1)
    {
        cout << "The Sum is: " << n1 + n2;
    }
    else if (choice == 2)
    {
        cout << "The Difference is: " << n1 - n2;
    }
    else if (choice == 3)
    {
        cout << "The Product is: " << n1 * n2;
    }
    else if (choice == 4)
    {
        cout << "The Quotient is: " << n1 / n2;
    }
    else
    {
        cout << "Thanks for using the app";
    }

    return 0;
}