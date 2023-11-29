#include <iostream>
using namespace std;

int main() 
{
    int working_hours, ot_time;
    double rate, pay;

    cout << "Enter the number of hours worked: ";
    cin >> working_hours;
    cout << "Enter your hourly rate: ";
    cin >> rate;

    if (working_hours > 40)
    {
        ot_time = working_hours - 40;
        pay = (working_hours * rate) + (ot_time * (rate * 1.50));
    }
    else
    {
        pay = working_hours * rate;
    }

    cout << "Your gross pay is " << pay << endl;
    return 0;
}