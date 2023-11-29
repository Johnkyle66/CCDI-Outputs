#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    
    cout << "Enter three numbers separated by space:\n";
    cin >> a >> b >> c;

    if (a > b)
    {
        int temp = b;
        b = a;
        a = temp;
    }

    if (b > c)
    {
        int temp = b;
        b = c;
        c = temp;
    }

    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

    cout << a << " " << b << " " << c << endl;
    return 0;
}