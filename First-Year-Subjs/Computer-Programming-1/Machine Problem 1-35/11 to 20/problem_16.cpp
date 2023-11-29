#include <iostream>
using namespace std;

int main()
{
    int TEMP;

    cout << "Enter the temperature: ";
    cin >> TEMP;

    if (TEMP < 0)
    {
        cout << "ICE";
    }
    else if (TEMP >= 0 && TEMP <= 100)
    {
        cout << "WATER";
    }
    else if (TEMP > 100)
    {
        cout << "STEAM";
    }

    return 0;
}