#include <iostream>
using namespace std; 

int main()
{
    int no_of_units, tuition_fee;

    cout << "Enter the number of your units: ";
    cin >> no_of_units;

    if (no_of_units >=21)
    {
        tuition_fee = 7000;
    }
    else
    {
        tuition_fee = no_of_units * 300;
    }

    cout << "Your tuition fee is " << tuition_fee << endl;
    return 0;
}