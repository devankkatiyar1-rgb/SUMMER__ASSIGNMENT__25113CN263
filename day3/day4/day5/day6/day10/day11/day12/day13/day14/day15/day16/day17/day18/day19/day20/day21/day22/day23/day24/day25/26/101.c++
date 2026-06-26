/*Write a program to Create number guessing 
game*/

#include <iostream>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()

using namespace std;

int main() {
    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    int secret = rand() % 100 + 1;

    int guess;

    cout << "===== Number Guessing Game =====" << endl;
    cout << "I have chosen a number between 1 and 100." << endl;

    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess < secret) {
            cout << "Too Low! Try Again.\n";
        }
        else if (guess > secret) {
            cout << "Too High! Try Again.\n";
        }
        else {
            cout << "Congratulations! You guessed the correct number." << endl;
            break;
        }
    }

    return 0;
}