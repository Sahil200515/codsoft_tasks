#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int secretNumber = rand() % 100 + 1;
    int guess, attempts = 0;
    char playAgain;

    do {
        secretNumber = rand() % 100 + 1;
        attempts = 0;

        cout << "\n===== Number Guessing Game =====\n";
        cout << "Guess a number between 1 and 100.\n";

        do {
            cout << "Enter your guess: ";
            cin >> guess;
            attempts++;

            if (guess > secretNumber) {
                cout << "Too High! Try again.\n";
            }
            else if (guess < secretNumber) {
                cout << "Too Low! Try again.\n";
            }
            else {
                cout << "\nCongratulations! You guessed the correct number.\n";
                cout << "Total Attempts: " << attempts << endl;
            }

        } while (guess != secretNumber);

        cout << "\nDo you want to play again? (Y/N): ";
        cin >> playAgain;

    } while (playAgain == 'Y' || playAgain == 'y');

    cout << "\nThank you for playing!\n";

    return 0;
}
