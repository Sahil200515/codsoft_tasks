#include <iostream>
using namespace std;

char gameBoard[3][3] = {
    {'1', '2', '3'},
    {'4', '5', '6'},
    {'7', '8', '9'}
};

void showBoard() {
    cout << "\n========== TIC TAC TOE ==========\n\n";

    for (int i = 0; i < 3; i++) {
        cout << " " << gameBoard[i][0] << " | " << gameBoard[i][1] << " | " << gameBoard[i][2] << endl;

        if (i != 2)
            cout << "---|---|---" << endl;
    }

    cout << endl;
}

bool winnerFound(char symbol) {

    for (int i = 0; i < 3; i++) {

        if (gameBoard[i][0] == symbol &&
            gameBoard[i][1] == symbol &&
            gameBoard[i][2] == symbol)
            return true;

        if (gameBoard[0][i] == symbol &&
            gameBoard[1][i] == symbol &&
            gameBoard[2][i] == symbol)
            return true;
    }

    if (gameBoard[0][0] == symbol &&
        gameBoard[1][1] == symbol &&
        gameBoard[2][2] == symbol)
        return true;

    if (gameBoard[0][2] == symbol &&
        gameBoard[1][1] == symbol &&
        gameBoard[2][0] == symbol)
        return true;

    return false;
}

int main() {

    int position;
    char currentPlayer = 'X';

    for (int round = 1; round <= 9; round++) {

        showBoard();

        cout << "Player " << currentPlayer
             << ", Enter Position (1-9): ";

        cin >> position;

        if (position < 1 || position > 9) {
            cout << "Invalid Position! Try Again.\n";
            round--;
            continue;
        }

        int row = (position - 1) / 3;
        int column = (position - 1) % 3;

        if (gameBoard[row][column] == 'X' ||
            gameBoard[row][column] == 'O') {

            cout << "Position Already Occupied!\n";
            round--;
            continue;
        }

        gameBoard[row][column] = currentPlayer;

        if (winnerFound(currentPlayer)) {

            showBoard();

            cout << "Congratulations! Player "
                 << currentPlayer
                 << " Wins the Game!" << endl;

            return 0;
        }

        if (currentPlayer == 'X')
            currentPlayer = 'O';
        else
            currentPlayer = 'X';
    }

    showBoard();

    cout << "Game Over! Match Draw." << endl;

    return 0;
}
