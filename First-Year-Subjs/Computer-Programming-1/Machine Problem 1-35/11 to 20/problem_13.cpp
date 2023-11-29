#include <iostream>
using namespace std;

int main()
{
    int a, b, c, lowest;

    cout << "Enter three numbers separated by space:" << endl;
    cin >> a >> b >> c;

    lowest = a;

    if (b < lowest)
    {
        lowest = b;
    }
    
    if (c < lowest)
    {
        lowest = c;
    }

    cout << "The lowest number is: " << lowest;
    return 0;
}