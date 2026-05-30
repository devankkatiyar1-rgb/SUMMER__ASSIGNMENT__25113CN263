// Write a program to Find LCM of two numbers.

#include <iostream>
using namespace std;

int main() {

    int num1, num2;
    cin >> num1 >> num2;

    int a = num1;
    int b = num2;

    // Find GCD using Euclidean method
    while (b != 0) {
        int rem = a % b;
        a = b;
        b = rem;
    }

    int gcd = a;

    // Find LCM
    int lcm = (num1 * num2) / gcd;

    cout << "LCM = " << lcm;

    return 0;
}