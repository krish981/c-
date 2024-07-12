#include <iostream>
#include <cstdlib>  // for rand() and srand() functions
#include <ctime>    // for time() function

using namespace std;

int main() {
    // Seed the random number generator with current time
    srand(static_cast<unsigned int>(time(0)));

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;

    int guess;
    int attempts = 0;
    bool isGuessCorrect = false;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "Guess a number between 1 and 100." << endl << endl;

    while (!isGuessCorrect) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess == secretNumber) {
            cout << "Congratulations! You guessed the correct number in " << attempts << " attempts." << endl;
            isGuessCorrect = true;
        } else if (guess < secretNumber) {
            cout << "Too low! Try guessing higher." << endl;
        } else {
            cout << "Too high! Try guessing lower." << endl;
        }
    }

    return 0;
}

