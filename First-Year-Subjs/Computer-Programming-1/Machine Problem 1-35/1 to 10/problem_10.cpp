#include <iostream>
using namespace std;

int main()
{
    double valueOfRealEstate, tax;

    cout << "Value of Real Estate: ";
    cin >> valueOfRealEstate;

    if (valueOfRealEstate < 250001)
    {
        tax = valueOfRealEstate * 0.05;
    }
    else if (valueOfRealEstate >= 250001 && valueOfRealEstate <= 500000)
    {
        tax = valueOfRealEstate * 0.10;
    }
    else 
    {
        tax = valueOfRealEstate * 0.15;
    }

    cout << "Real Estate Tax: " << tax << endl;
    return 0;
}