#include <iostream>
using namespace std;

int main()
{
    int MOP;
    float TF, Total;

    cout << "Enter Tuition Fee: ";
    cin >> TF;

    cout << "(Press 1. for Cash,\n2. for Two installment,\n3. for Three Installment)" << endl;
    cout << "Enter mode of payment: ";
    cin >> MOP;

    switch (MOP) {
    case 1:
        Total = TF - (TF * 0.10);
        break;
    case 2:
        Total = TF - (TF * 0.05);
        break;
    case 3:
        Total = TF + (TF * 0.10);
        break;
    default:
        break;
    }

    cout << "Your Total Tuition Fee is: " << Total << endl;
    return 0;
}