#include <iostream>
using namespace std;

int main()
{
    char character;

    cout << "Enter a letter: ";
    cin >> character;

    if (character == 'a' || character == 'A') {
        cout << "vowel";
    } else if (character == 'e' || character == 'E') {
        cout << "vowel";
    } else if (character == 'i' || character == 'I') {
        cout << "vowel";
    } else if (character == 'o' || character == 'O') {
        cout << "vowel";
    } else if (character == 'u' || character == 'U') {
        cout << "vowel";
    } else {
        cout << "consonant";
    }

    return 0;
}