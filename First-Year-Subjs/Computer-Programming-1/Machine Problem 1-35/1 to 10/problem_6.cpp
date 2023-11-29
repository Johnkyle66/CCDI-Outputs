#include <iostream>
using namespace std;

int main()
{
    int a, b, number;

    cout << "Enter two numbers separated by a space: ";
    cin >> a >> b;

    if (a==b)
    {
        NULL;
    }
    else if (a > b)
    {
        cout << a << " is the higher number.";
    }
    else 
    {
        cout << b << " is the higher number.";
    }
    
    return 0;
}