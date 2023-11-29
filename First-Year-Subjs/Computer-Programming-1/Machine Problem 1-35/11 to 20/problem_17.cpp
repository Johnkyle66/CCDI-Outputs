#include <iostream>
using namespace std;

int main()
{
    float number;

    cout << "Enter a \"Ritcher Scale\" number: ";
    cin >> number;
    
    if (number < 5)
    {
        cout << "LITTLE OR NO DAMAGE";
    }
    else if (number >= 5.0 && number <= 5.5)
    {
        cout << "SOME DAMAGE";
    }
    else if (number >= 5.5 && number <= 6.5)
    {
        cout << "SERIOUS DAMAGE";
    }
    else if (number >= 6.5 && number <= 7.5)
    {
        cout << "DISASTER";
    }
    else if (number > 7.5)
    {
        cout << "CATASTROPHE";
    }

    return 0;
}