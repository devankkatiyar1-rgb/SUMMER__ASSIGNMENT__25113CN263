// Write a program to Write function for armstrong

#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n) {

    if (n < 0) {
        return false;
    }

    int original = n;
    int digits = 0;
    int result = 0;
    int num = n;

    // Handle 0
    if (n == 0) {
        digits = 1;
    }

    // Count number of digits
    while (n > 0) {
        n = n / 10;
        digits++;
    }

    // Calculate Armstrong sum
    while (num > 0) {
        int remainder = num % 10;
        result += (int)pow(remainder, digits);
        num = num / 10;
    }

    return result == original;
}

int main() {

    int n;
    cout << "Enter number: ";
    cin >> n;

    if (isArmstrong(n)) {
        cout << "Armstrong Number";
    } 
    else {
        cout << "Not an Armstrong Number";
    }

    return 0;
}