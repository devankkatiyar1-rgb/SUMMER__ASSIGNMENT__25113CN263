// Write a program to Check whether a number is palindrome. 

#include <iostream>
using namespace std;

int main() {
    int num, originalNum, reverse = 0, remainder;

    cin >> num;

    originalNum = num;

    while (num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }

    if (originalNum == reverse) {
        cout << "Palindrome Number";
    } else {
        cout << "Not a Palindrome Number";
    }

    return 0;
}