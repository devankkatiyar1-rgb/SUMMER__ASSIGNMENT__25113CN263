// Write a program to Reverse a number. 

#include <iostream>
using namespace std;

int main() {
    int num, reverse = 0, remainder;

    cout << "Enter a number: ";
    cin >> num;

    while (num != 0) {
        remainder = num % 10;          // Get last digit
        reverse = reverse * 10 + remainder;
        num = num / 10;                // Remove last digit
    }

    cout << "Reversed number = " << reverse << endl;

    return 0;
}