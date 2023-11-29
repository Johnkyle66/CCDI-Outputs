#include <iostream>
using namespace std;

int main()
{
    char ID;

    cout << "Enter ship's class ID: ";
    cin >> ID;
    
    if (ID == 'B' || ID == 'b')
    {
        cout << "SHIP CLASS: Battleship";
    }
    else if (ID == 'C' || ID == 'c')
    {
        cout << "SHIP CLASS: Cruiser";
    }
    else if (ID == 'D' || ID == 'd')
    {
        cout << "SHIP CLASS: Destroyer";
    }
    else if (ID == 'F' || ID == 'f')
    {
        cout << "SHIP CLASS: Frigate";
    }
    
    return 0;
}