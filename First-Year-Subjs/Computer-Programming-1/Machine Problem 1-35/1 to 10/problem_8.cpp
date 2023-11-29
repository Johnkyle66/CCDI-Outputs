#include <iostream>
using namespace std;

int main()
{
    float speed;

    cout << "Enter the speed in km/h (kilometer per hour): ";
    cin >> speed;

    if (speed > 1100)
    {
        cout << "It's a civillian aircraft";
    }
    else if (speed >= 500 && speed <= 1100)
    {
        cout << "It's a military aircraft!";
    }
    else
    {
        cout << "It's a BIRD!";
    }

    return 0;
}