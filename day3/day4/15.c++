#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int number, digits = 0, result = 0;
    cin >> number;

    int original = number; // store original number
    int num = number;

    // Count digits
    while(number > 0) {
        digits++;
        number = number / 10;
    }

    // Armstrong calculation
    while(num > 0) {

        int rem = num % 10;
        result = result + pow(rem, digits);

        num = num / 10;
    }

    if(result == original) {
        cout << "The number is Armstrong";
    }
    else {
        cout << "The number is not Armstrong";
    }

    return 0;
}