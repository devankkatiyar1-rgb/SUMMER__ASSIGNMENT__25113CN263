// Write a program to Check whether a number is prime

#include <iostream>
using namespace std;

int main() {
    int number;
    bool isPrime = true;

    cin >> number;

    if (number <= 1) {
        isPrime = false;
    }

    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        cout << "Prime Number";
    } else {
        cout << "Not a Prime Number";
    }

    return 0;
}