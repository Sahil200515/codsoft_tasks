#include <iostream>
using namespace std;

int main() {
    double firstNumber, secondNumber, result;
    char choice;

    cout << "******** SIMPLE CALCULATOR ********" << endl;

    cout << "Enter First Number: ";
    cin >> firstNumber;

    cout << "Enter Operator (+, -, *, /): ";
    cin >> choice;

    cout << "Enter Second Number: ";
    cin >> secondNumber;

    switch (choice) {
        case '+':
            result = firstNumber + secondNumber;
            cout << "Answer = " << result;
            break;

        case '-':
            result = firstNumber - secondNumber;
            cout << "Answer = " << result;
            break;

        case '*':
            result = firstNumber * secondNumber;
            cout << "Answer = " << result;
            break;

        case '/':
            if (secondNumber == 0) {
                cout << "Cannot divide by zero!";
            } else {
                result = firstNumber / secondNumber;
                cout << "Answer = " << result;
            }
            break;

        default:
            cout << "Invalid Operator!";
    }

    cout << endl;
    cout << "Thank You for Using Simple Calculator!" << endl;

    return 0;
}
