#include <iostream>
using namespace std;

int main() {
    int grade;

    cout << "Enter Grade: ";
    cin >> grade;

    switch (grade)
    {
    case 100:
    case 99:
    case 98:
        cout << "1.0";
        break;
    
    case 97:
    case 96:
    case 95:
        cout << "1.25";
        break;

    case 94:
    case 93:
    case 92:
        cout << "1.5";
        break;

    case 91: 
    case 90:
    case 89:
        cout << "1.75";
        break;

    case 88:
    case 87:
    case 86:
        cout << "2.0";
        break;

    case 85:
    case 84:
    case 83:
        cout << "2.25";
        break;

    case 82:
    case 81:
    case 80:
        cout << "2.5";
        break;

    case 79:
    case 78:
    case 77:
        cout << "2.75";
        break;

    case 76:
    case 75:
        cout << "3.0";
        break;

    default:
        cout << "5.0";
        break;
    }
    return 0;
}