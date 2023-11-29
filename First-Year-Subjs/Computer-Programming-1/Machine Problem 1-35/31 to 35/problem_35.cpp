#include <iostream>
using namespace std;

int main() {

    char player1, player2;

    cout << "Player 1, enter your choice (S,R,P): ";
    cin >> player1;

    cout << "Player 2, enter your choice (S,R,P): ";
    cin >> player2;

    if (player1 == player2)
    {
        cout << "NOBODY WINS" << endl;
    }
    else if ((player1 == 'S' || player1 == 's') && (player2 == 'P' || player2 == 'p'))
    {
        cout << "Player 2 WINS! (SCISSORS CUT PAPER)" << endl;
    }
    else if ((player1 == 'R' || player1 == 'r') && (player2 == 'S' || player2 == 's'))
    {
        cout << "Player 1 WINS! (ROCK BREAKS SCISSORS)" << endl;
    }
    else if ((player1 == 'P' || player1 == 'p') && (player2 == 'R' || player2 == 'r'))
    {
        cout << "Player 1 WINS! (PAPER COVERS ROCK)" << endl;
    }
    else if ((player1 == 'S' || player1 == 's') && (player2 == 'R' || player2 == 'r'))
    {
        cout << "Player 2 WINS! (ROCK BREAKS SCISSORS)" << endl;
    }
    else if ((player1 == 'R' || player1 == 'r') && (player2 == 'P' || player2 == 'p'))
    {
        cout << "Player 2 WINS! (PAPER COVERS ROCK)" << endl;
    }
    else {
        cout << "Player 1 WINS! (SCISSORS CUT PAPER)" << endl;
    }

    return 0;
}
