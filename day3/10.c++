// Write a program to Print prime numbers in a range 

#include <iostream>
using namespace std;

int main() {
    int start, end;

    cin >> start >> end;

    for (int num = start; num <= end; num++) {

        bool isPrime = true;

        if (num <= 1) {
            isPrime = false;
        }

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << num << " ";
        }
    }

    return 0;
}