#include <iostream>
using namespace std;

int main() {
    int numberGuess = 77; // กำหนดเลขที่ต้องการทายเป็นเลขคงที่
    int userGuess, attempt = 0;

    cout << "Guess a number between 1 and 100 : ";

    while (attempt < 7) {
        cin >> userGuess;
        attempt++;

        if (userGuess == numberGuess) {
            cout << "You guessed correctly." << endl;
            break;
        } else if (userGuess < numberGuess) {
            cout << "More than this" << endl;
        } else {
            cout << "less than this" << endl;
        }

        if (attempt == 7) {
            cout << "You lost! The correct number is " << numberGuess << endl;
        }
    }

    return 0;
}
