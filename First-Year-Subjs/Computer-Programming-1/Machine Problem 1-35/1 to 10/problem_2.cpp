#include <iostream>
using namespace std;

int main()
{
    int age, years;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18)
    {
        cout << "YOU are old enough to drive.";
    }
    else 
    {
        years = 18-age;
        cout << "You need to wait " << years << " years before you can drive.";
    }   

    return 0;
}