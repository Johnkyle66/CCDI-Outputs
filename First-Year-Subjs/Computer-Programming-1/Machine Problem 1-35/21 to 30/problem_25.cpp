#include <iostream>
using namespace std;

int main()
{
    int watts, brightness;

    cout << "Enter Light Wattage: ";
    cin >> watts;

    switch (watts)
    {
        case 15:
            brightness = 125;
            break;
        case 25:
            brightness = 215;
            break;
        case 40:
            brightness = 500;
            break;
        case 60:
            brightness = 880;
            break;
        case 75:
            brightness = 1000;
            break;
        case 100:
            brightness = 1675;
            break;
        default:
            brightness = -1;
    }

    cout << "Brightness: " << brightness << endl;
    return 0;
}