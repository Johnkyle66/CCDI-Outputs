#include <iostream>
using namespace std;

int main()
{
    float range, prelims, midterm, finals;

    cout << "Enter Your Prelims Grade: ";
    cin >> prelims;
    cout << "Enter Your Midterms Grade: ";
    cin >> midterm;
    cout << "Enter Your Finals Grade: ";
    cin >> finals;

    range = (prelims * 0.3) + (midterm * 0.3) + (finals * 0.4);

    cout << "Total Grade is: " << range << endl;

    if (range >= 98 && range <= 100)
    {
        cout << "Class Card Grade: 1.00";
    }
    else if (range >= 95 && range <= 97)
    {
        cout << "Class Card Grade: 1.25";
    }
    else if (range >= 92 && range <= 94)
    {
        cout << "Class Card Grade: 1.50";
    }
    else if (range >= 89 && range <= 91)
    {
        cout << "Class Card Grade: 1.75";
    }
    else if (range >= 85 && range <= 88)
    {
        cout << "Class Card Grade: 2.00";
    }
    else if (range >= 82 && range <= 84)
    {
        cout << "Class Card Grade: 2.25";
    }
    else if (range >= 80 && range <= 81)
    {
        cout << "Class Card Grade: 2.50";
    }
    else if (range >= 77 && range <= 79)
    {
        cout << "Class Card Grade: 2.75";
    }
    else if (range >= 75 && range <= 76)
    {
        cout << "Class Card Grade: 3.00";
    }
    else if (range >= 70 && range <= 74)
    {
        cout << "Class Card Grade: 4.00";
    }
    else if (range < 70)
    {
        cout << "Class Card Grade: 5.00";
    }
    
    return 0;
}